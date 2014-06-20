/*
* SAFET Sistema Automatizado para la Firma Electrónica y Estampado de Tiempo
* Copyright (C) 2008 VÃ­ctor Bravo (vbravo@cenditel.gob.ve), Antonio Araujo (aaraujo@cenditel.gob.ve
*
* CENDITEL Fundacion Centro Nacional de Desarrollo e Investigación en TecnologÃ­as Libres
*
* Este programa es software libre; Usted puede usarlo bajo los términos de la licencia de
* software GPL versión 2.0 de la Free Software Foundation.
*
* Este programa se distribuye con la esperanza de que sea útil, pero SI NINGUNA GARANTÍA;
* tampoco las implí­citas garantí­as de MERCANTILIDAD o ADECUACIÃ“N A UN PROPÓSITO PARTICULAR.
* Consulte la licencia GPL para más detalles. Usted debe recibir una copia de la GPL junto
* con este programa; si no, escriba a la Free Software Foundation Inc. 51 Franklin Street,
* 5º Piso, Boston, MA 02110-1301, USA.
*
*/

#include "SafetYAWL.h"
#include "SafetAutofilter.h"
#include "SafetTask.h"
#include "SafetConnection.h"
#include "SafetSQLParser.h"
#include "SafetWorkflow.h"


SafetAutofilter::SafetAutofilter() {

  _countoptions = 0;
  filtertask = NULL;
 _filterType = None;

}


void SafetAutofilter::setFiltertask(SafetTask* t) {
     Q_ASSERT( filtertask == NULL );
     Q_CHECK_PTR( t );
     filtertask = t;
     SafetWorkflow *wf = qobject_cast<SafetWorkflow*>( filtertask->parent() );
     localparser.setWorkflow(wf);
}

QList<SafetTask*> SafetAutofilter::createTasks(const QString& prefix) {
     SYD << tr("....SafetAutofilter::createTasks...(1)...");
     QList<SafetTask*> mylist;
     if ( filtertask == NULL || filtertask->parent() == NULL ) {
         return mylist;
     }

     SYD << tr("....SafetAutofilter::createTasks...(2)...");
     SafetVariable *v = NULL;
     if ( filtertask->getVariables().count() > 0 ) {
          v = qobject_cast<SafetVariable*>( filtertask->getVariables().at(0) );
     }

     SafetWorkflow *wf = qobject_cast<SafetWorkflow*>( filtertask->parent() );
     Q_CHECK_PTR ( wf );
     generateFilterOptions();
     QString logvar = SafetYAWL::getConf()["Autofilter/datetime.period"];
     bool ok;
     int hcount = 0;
     int hinc = logvar.toInt(&ok);

     int i = 0;
     SYD << tr("....SafetAutofilter::createTasks...(3)...");
     foreach(QString s, getoptions) {
          Q_ASSERT(s.split("|").count() > 0 ); // Obtener el nombre de la nueva opcion
          s = s.split("|").at(0).trimmed().replace(QRegExp("[\\.\\-]"),"");
          if ( s.isEmpty()) {
              s = tr("vacio");
          }
          QString title;

          if ( filterType() == DateTime ) {
              SYD
                      << tr("CreateTasks: Autofiltro es tipo Fecha/Hora con opcion: \"%1\"")
                      .arg(s);
               title = localparser.getFields().at(0);
               title = title.remove("_")+tr("Plus%1").arg(hcount*hinc);
               hcount++;
          }
          else {

               title = s;
//               title.replace("_","");
//               title.replace(" ","");
               title.replace("á","a");
               title.replace("é","e");
               title.replace("í","i");
               title.replace("ó","o");
               title.replace("ú","u");
               title.replace("ñ","n");
               title.replace("Ñ","N");

          }

          SYD   << tr("....SafetAutofilter::createTasks()....Opcion para el autofiltro: \"%1\" Titulo:\"%2\"")
                  .arg(s)
                  .arg(title);
          SafetTask *mytask = new SafetTask();
          mytask->setParent( qobject_cast<SafetXmlObject*> (wf) );
          Q_CHECK_PTR( mytask );
          mytask->setId(title);
          mytask->setTitle(getvaluesoptions.at(i++));
          mytask->setReport( report() );
          //** Para el puerto
          SafetPort* myport = new SafetPort();         
          Q_CHECK_PTR( myport );
          myport->setSide("forward");
          myport->setType("split");
          myport->setQuery("");
          myport->setPattern("none");
          mytask->addPort( myport );
          //** Para la variable
          SafetVariable* myvariable = new SafetVariable();
          Q_CHECK_PTR( myvariable );
          myvariable->setId( prefix+"_"+title+"_");
          SYD  << tr(".......SafetAutofilter::createTasks()....Agregando la tarea de autofiltro: \"%1\"").arg(mytask->id());
          if ( v != NULL ) {
               myvariable->setDocumentsource( v->documentsource() );
               myvariable->setTokenlink( v->tokenlink() );
          }
          mytask->addVariable( myvariable );
          SYD << tr("......SafetAutofilter::createTasks().Agregando la variable de autofiltro: \"%2\" a la tarea \"%1\"").arg(mytask->id()).arg(myvariable->id());
          // ** Para la  conexion

          SafetConnection *myconnection = new SafetConnection();
          Q_CHECK_PTR( myconnection );
          myconnection->setParent( qobject_cast<SafetXmlObject*>(myport));
          myconnection->setSource( source() );

          myport->addConnection( myconnection );


          QList<SafetTask*> subtasks;
          if ( getsecondoptions.contains(s) && getsecondoptions[s].count()  > 0 ) {
              SafetYAWL::streamlog << SafetLog::Debug
                      << tr("Numero de sub-opciones: \"%1\"")
                      .arg(getsecondoptions[s].count());
              if ( filterType() == DateTime) {
                  QString subprefix;
                  QRegExp rx(".+(Plus\\d+)");
                  if (title.indexOf(rx,0) >= 0 ) {
                    subprefix = rx.cap(1);
                   }
                  else {
                      SYE
                              << tr("Falla en autofiltro fecha");
                      return mylist;
                  }
                subtasks = createSubTasks(mytask,getsecondoptions[s], subprefix);
              }
              else {
                  subtasks = createSubTasks(mytask,getsecondoptions[s], title.left(5));
              }
          }



            mylist.push_back( mytask);
     }
     SYD << tr("..SafetAutofilter::createTasks()...modifyForAutofilter...(1)..mylist.count():|%1|")
            .arg(mylist.count());

     modifyForAutofilter(mylist);
     SYD << tr("..SafetAutofilter::createTasks()...modifyForAutofilter...(2)");
     // Agregar las tareas al padre
     foreach(SafetTask *t, mylist) {
          wf->addTask( t  );
     }
     if (_subsql.isEmpty()) {
        normalizeTasks(mylist);
    }
     return mylist;
}

QList<SafetTask*> SafetAutofilter::createSubTasks(SafetTask* task, QStringList subtasks, const QString& prefix) {
    QList<SafetTask*> result;
    if ( task == NULL ) {
        return result;
    }
    if ( task->outport() == NULL ) {
        return result;
    }
    if (_subsql.isEmpty()) {
        SYE
                << tr("No se pueden crear un sub-filtro, la expresion SQL esta vacia");
        return result;
    }

    SafetWorkflow *wf = qobject_cast<SafetWorkflow*>( filtertask->parent() );
    Q_CHECK_PTR ( wf );
    SafetConnection* taskConn = NULL;
    SafetPort* taskPort = NULL;

    SafetVariable *v = NULL;
    if ( filtertask->getVariables().count() > 0 ) {
         v = qobject_cast<SafetVariable*>( filtertask->getVariables().at(0) );
    }
    if ( task->outport()->getConnectionlist().count() ==  0 ) {
        return result;
    }
    taskConn = task->outport()->getConnectionlist().at(0);
    taskPort = qobject_cast<SafetPort*>(taskConn->parent());
    taskPort->clearConn();

    Q_CHECK_PTR( taskConn );
    Q_CHECK_PTR( taskPort );



    foreach(QString nametask, subtasks){
        QString curid = prefix+tr("_")+nametask;

        SafetTask *mytask = new SafetTask();
        mytask->setParent( qobject_cast<SafetXmlObject*> (wf) );
        Q_CHECK_PTR( mytask );

        mytask->setId(curid);
        mytask->setTitle(nametask);
        mytask->setReport( subreport() );
        SafetPort* myport = new SafetPort();
        Q_CHECK_PTR( myport );
        myport->setSide("forward");
        myport->setType("split");
        myport->setQuery("");
        myport->setPattern("none");
        mytask->addPort( myport );
        //** Para la variable
        SafetVariable* myvariable = new SafetVariable();
        Q_CHECK_PTR( myvariable );
        myvariable->setId( prefix+"_"+curid+"_");
        SYA  << tr("Agregando la tarea de autofiltro: \"%1\"").arg(mytask->id());

        if ( v != NULL ) {
             myvariable->setDocumentsource( v->documentsource() );
             myvariable->setTokenlink( v->tokenlink() );
        }
        mytask->addVariable( myvariable );
        SYA << tr("Agregando a la variable de autofiltro: \"%2\" la tarea \"%1\"").arg(mytask->id()).arg(myvariable->id());
        // ** Para la  conexion

        // Colocar Conexion de tarea actual (mytask)
        SafetConnection *myconnection = new SafetConnection();
        Q_CHECK_PTR( myconnection );
        //myconnection->setParent( qobject_cast<SafetXmlObject*>(myport));

        qDebug("....... taskConn...curid:%s",qPrintable( curid));
        qDebug("....... taskConn->source():%s",qPrintable( taskConn->source()));
        qDebug("....... ............option:%s",qPrintable( nametask));
        qDebug();
        myconnection->setSource( taskConn->source() );
        myconnection->setQuery("true");
        myconnection->setOptions("");
        myport->addConnection(myconnection);


        // Colocar Conexion de tarea padre
        SafetConnection *taskconnection = new SafetConnection();
        Q_CHECK_PTR( taskconnection );
        //taskconnection->setParent( qobject_cast<SafetXmlObject*>(taskPort));
        taskconnection->setSource( curid );
        taskconnection->setQuery(_subsql);

        taskconnection->setOptions(nametask);
        taskPort->addConnection(taskconnection);
        if ( taskPort->getConnectionlist().count() == 2 ) {
            qDebug(".......colocando pattern or....");
            taskPort->setPattern("or");

        }


        result.append(mytask);
        wf->addTask( mytask  );


    }
    return result;

}

void SafetAutofilter::modifyForAutofilter(const QList<SafetTask*>& lt) {
     Q_CHECK_PTR ( filtertask );
     SafetPort *myport = NULL;
     SYD << tr(".....SafetAutofilter::modifyForAutofilter...AUTOFILTER...entering...(1)...");
     foreach(SafetPort* port, filtertask->getPorts()) {
          Q_CHECK_PTR( port );
          if ( port->type() == type() ) {
               myport = port;
           }
     }
     SYD << tr(".....SafetAutofilter::modifyForAutofilter...filtertask:|%1|")
            .arg(filtertask->id());
     if ( myport == NULL ) {
          myport = new SafetPort();
          Q_CHECK_PTR( myport );
          filtertask->addPort( myport );
     }
     Q_CHECK_PTR( myport);
     resetOptions();
     foreach(SafetTask* task, lt ) {
          Q_CHECK_PTR( task );
          SafetConnection *myconnection = new SafetConnection();
          Q_CHECK_PTR( myconnection);
          myconnection->setSource( task->id() ) ;
          myconnection->setQuery( query() ) ;
          QString nextoption = getNextOption();
          myconnection->setOptions( nextoption ) ;
          myconnection->setTokenlink( tokenlink() );
          if (myport->getConnectionlist().count() < 2 ) {
               myport->setPattern("or");
          }
          SYD << tr(".....SafetAutofilter::modifyForAutofilter...addConnection for:|%1|")
                 .arg(task->id());

          myport->addConnection( myconnection );
     }
}


void SafetAutofilter::normalizeTasks(const QList<SafetTask*>& tasks) {

     Q_CHECK_PTR ( filtertask );

     QList<SafetPort*> ports = filtertask->getPorts();
     Q_ASSERT( ports.count() > 0 );
     SafetPort *myport = ports.at(0);
     SafetConnection *myconn = NULL;
     Q_CHECK_PTR( myport );
     QList<SafetConnection*> conns = myport->getConnectionlist();
     QString srcsource;

     foreach( SafetTask* task, tasks) {
          Q_CHECK_PTR( task );
          Q_ASSERT( task->getPorts().count() > 0 ) ;
          myport = task->getPorts().at(0);
          Q_ASSERT( myport->getConnectionlist().count() > 0 );
          myconn = myport->getConnectionlist().at(0);
          Q_CHECK_PTR( myconn );
          srcsource = myconn->source();
          foreach ( SafetConnection* conn, conns) {
                    Q_CHECK_PTR( conn );
                    if ( conn->source().trimmed().compare(srcsource.trimmed(),Qt::CaseInsensitive) == 0 ) {
                         myconn->setOptions( conn->options() );
                         myconn->setQuery( conn->query() );
                         myconn->setTokenlink(conn->tokenlink() );
                         break;
                    }
          }
     }
}




QStringList SafetAutofilter::generateFilterOptions() {

     getoptions.clear();
     getvaluesoptions.clear();
    getsecondoptions.clear();
     localparser.setStr(query().toUtf8());
     localparser.parse();

     QString table = localparser.getTablesource();
     if ( localparser.getFields().count() <= 0 ) {
         SYE
                 << tr("EL numero de campos (%2)es incorrecta para la sentencia SQL: \"%1\"")
                 .arg(query())
                 .arg(localparser.getFields().count());
         return getoptions;
     }

     QString secondfield,firstfield =  localparser.getFields().at(0);
     if ( localparser.getFields().count() > 1 ) {
         secondfield = localparser.getFields().at(1);
     }
     QString newsql = "SELECT DISTINCT";
     newsql += " ";
     newsql += firstfield;
     newsql += " ";
     if (!secondfield.isEmpty()) {
         newsql += ", ";
         newsql += secondfield;
         newsql += " ";
         _subsql = "SELECT " + secondfield + " FROM " + table;
     }
     SafetWorkflow *wf = qobject_cast<SafetWorkflow*>( filtertask->parent() );
     if (wf == NULL ) {
         SYE
                 << tr("Ocurrió un error al crear Autofiltro (Falla en la creacion de"
                       " la lista de opciones");
         return QStringList();
     }
     QString link = wf->processTokenlink(tokenlink());

     newsql += "FROM";
     newsql += " ";
     newsql += table;
     newsql += " ";
     newsql += link;
     newsql += " ";     
     newsql += localparser.getWhereClause();
     newsql += " ";
     newsql += "ORDER BY";
     newsql += " ";
     newsql += firstfield;
     newsql += ";";

     SYD << tr(".........SafetAutofilter::generateFilterOptions NEWSQL:|%1|")
            .arg(newsql);

     QSqlQuery query(SafetYAWL::currentDb);
     query.prepare(  newsql );
     bool executed = query.exec();
     if ( !executed ) {
         SYE
                 << tr("La Sentencia SQL :\" %1 \" es incorrecta. "
                       "Ejecute la sentencia en un cliente del gestor de BD, "
                       "y compruebe resultados"
                       "<br/><br/><b>Detalle:</b> %2")
                    .arg(newsql)
                    .arg(query.lastError().databaseText());
         return getoptions;
   }

     int error;
     bool genfilter = generateDateFilters(query,table, error);
     if (error == 1 ) {
         return getoptions;
     }
      if ( genfilter ) {
          SYA
                  << tr("Generando filtro de fecha/hora con la expresion SQL  \"%1\"").arg(newsql);
           _filterType = DateTime;

           SYD
                   << tr("Numero de opciones del autofiltro (Fecha/Hora) \"%1\"").arg(getoptions.count());
           if ( query.record().count() > 1 ) {
                     //_subsql = "";
                    generateDateSubFilterOptions(firstfield,secondfield,table);

           }
           return getoptions;
      }


      QString lastsecondfield,currentsecondfield;

      while (query.next()) {
          QString currentfield;          
          QString oricurrentfield = query.value(0).toString();

          currentfield = oricurrentfield;
          currentfield.replace(" ","");
          currentfield.replace(",",".");

          getoptions.push_back( currentfield );
          getvaluesoptions.push_back( oricurrentfield ); // Verificar para descripcion

          qDebug("...getoptions...: %s",qPrintable(currentfield));
          if ( query.record().count() > 1 ) {
              if (currentsecondfield.isEmpty()) {
                  currentsecondfield = query.value(1).toString();
                  getsecondoptions[currentfield].append(currentsecondfield);

                  qDebug("...getsecondoptions...empty: %s\n",qPrintable(currentsecondfield));

              }
              else {
                  currentsecondfield = query.value(1).toString();
                  if ( currentsecondfield != lastsecondfield ) {
                      getsecondoptions[currentfield].append(currentsecondfield);
                  }

                  qDebug("...getsecondoptions...not empty: %s\n",qPrintable(currentsecondfield));
              }

              lastsecondfield = currentsecondfield;
          }


      }


      _filterType = String;
     return getoptions;

}

void SafetAutofilter::generateDateSubFilterOptions(const QString& firstfield,const QString& secondfield,const QString& table) {

    foreach(QString getoption, getoptions) {
        QString newsql = "SELECT DISTINCT";
        newsql += " ";
        newsql += secondfield;
        newsql += " ";
        newsql += "FROM";
        newsql += " ";
        newsql += table;
        newsql += " ";
        newsql += "WHERE";
        newsql += " ";
        newsql += firstfield;
        newsql += getoption;

        QSqlQuery query(SafetYAWL::currentDb);
        query.prepare(  newsql );
        SafetYAWL::streamlog <<
               SafetLog::Debug
               << tr("Ejecutando la sentencia sub-campo: \"%1\"")
               .arg(newsql);
        bool executed = query.exec();
        if ( !executed ) {
            SafetYAWL::streamlog
                    << SafetLog::Error
                    << tr("La Sentencia para sub-campo SQL :\" %1 \" es incorrecta. Ejecute la sentencia en un cliente del gestor de BD, y compruebe resultados").arg(newsql);
            return;
        }

        while( query.next()) {
            QString value = query.value(0).toString();
            SafetYAWL::streamlog <<
                   SafetLog::Debug
                   << tr("Agregando sub-campo: \"%1\"")
                   .arg(value);

            getsecondoptions[ getoption ].append(value);
        }
    }

}

bool SafetAutofilter::generateDateFilters(const QSqlQuery& query, const QString& table, int &error) {
     error = 0;
     Q_ASSERT( query.record().count() > 0  );
     bool ok;
     QVariant::Type t = query.record().field(0).type();
     SafetYAWL::streamlog << SafetLog::Debug
             << tr("Tipo del registro a realizar autofiltro: %1 (Datetime:%2,UInt:%3,Int:%4)")
             .arg(t)
             .arg(QVariant::DateTime)
             .arg(QVariant::UInt)
             .arg(QVariant::Int);

     if ( t != QVariant::DateTime && t != QVariant::UInt && t != QVariant::Int ) {
         error = 0;
         return false;
     }
     getoptions.clear();
     QString logvar = SafetYAWL::getConf()["Autofilter/datetime.period"];
     Q_ASSERT(query.lastQuery().length() > 1 );
     QString newsql = query.lastQuery();
     SafetYAWL::streamlog << SafetLog::Debug
             << tr("Filtro de Fecha/Hora colocado a \"%1\" horas")
             .arg(logvar);

     if ( newsql.endsWith(";") ) {
          newsql.chop(1);
     }
     if ( !newsql.contains("ORDER BY")) {
        newsql += " ORDER BY " + query.record().fieldName(0);
    }

     QSqlQuery orderquery(SafetYAWL::currentDb);

     SafetYAWL::streamlog <<
             SafetLog::Action
             << tr("Se va a ejecutar la sentencia SQL: \"%1\" (ordenada, tipo fecha)").arg(newsql);
     orderquery.prepare(  newsql );
     bool executed = orderquery.exec();
     if ( !executed ) {
         SafetYAWL::streamlog
                 << SafetLog::Error
                 <<
      tr("No se puede generar el autofiltro porque la sentencia SQL \"%1\"  es incorrecta").arg(newsql);
         error = 1;
         return false;
    }
     executed =  orderquery.next();
     if ( !executed) {
         SafetYAWL::streamlog
                 << SafetLog::Error
                 <<
         tr("No se puede generar el autofiltro porque la expresion \"%1\"  no contiene registros").arg(newsql);
         error = 1;
         return false;

     }
     QString fieldname = orderquery.record().fieldName(0);
     QDateTime iteDateFirst;
     if ( t == QVariant::DateTime  ) {
          iteDateFirst = orderquery.value(0).toDateTime();
     } else if ( t == QVariant::Int  ) {
          iteDateFirst = QDateTime::fromTime_t(orderquery.value(0).toUInt(&ok));
          if ( !ok ){
               SafetYAWL::streamlog << SafetLog::Error << tr("Error al convertir la fecha \"%1\"  del campo \"%2\"").arg(orderquery.value(0).toString(),fieldname);
          }
     }
     SafetYAWL::streamlog << SafetLog::Debug << tr("Primera fecha para el autofiltro \"%1\": \"%2\"").arg(fieldname)
               .arg(iteDateFirst.toString() );
//     qDebug("..first: %s", qPrintable(orderquery.value(0).toDateTime().toString()));
     executed =  orderquery.last();
     if ( !executed ) {
         SafetYAWL::streamlog
                 << SafetLog::Error
                 <<tr("No se puede generar el autofiltro porque fallo la busqueda del ultimo registro de la \"%1\"").arg(table);
         error = 1;
         return false;
     }
     QDateTime iteDateLast;
     if ( t == QVariant::DateTime  ) {
          iteDateLast = orderquery.value(0).toDateTime();
     } else if ( t == QVariant::Int  ) {
          iteDateLast = QDateTime::fromTime_t(orderquery.value(0).toUInt(&ok));
          if ( !ok ){
               SafetYAWL::streamlog << SafetLog::Error << tr("Error al convertir la fecha \"%1\"  del campo \"%2\"").arg(orderquery.value(0).toString(),fieldname);
          }

     }
     SYD << tr("Ultima fecha para el autofiltro  \"%1\": \"%2\"").arg(fieldname)
               .arg(iteDateLast.toString() );
     QDateTime iteDate, nextIteDate;
     iteDate = iteDateFirst;
     QString dateformat = "yyyy-MM-dd hh:mm:ss";
     QString valuedateformat = "ddd yy/MM/dd hh:mm";
     int i = 0;
     while ( true ) {
           QString newfilter;
           bool ok;
            nextIteDate = iteDate.addSecs(logvar.toInt(&ok)*3600);
            Q_ASSERT(ok );
            if ( t == QVariant::DateTime  ) {
                newfilter = QString(">='%1' AND %3<'%2'")
                            .arg(iteDate.toString(dateformat))
                            .arg(nextIteDate.toString(dateformat))
                            .arg(table+"."+fieldname);
           }
            else if ( t == QVariant::Int  ) {
                newfilter = QString(">='%1' AND %3<'%2'")
                            .arg(iteDate.toTime_t())
                            .arg(nextIteDate.toTime_t())
                            .arg(table+"."+fieldname);
            }

           SYD << tr("Proxima Fecha del Filtro: \"%1\"").arg(nextIteDate.toString());
           SYD << SafetLog::Debug << tr("Agregando filtro de fecha: \"%1\"").arg(newfilter);
           getvaluesoptions.append(QString("%1").arg(iteDate.toString(valuedateformat)));
           getoptions.append(newfilter);
           if (nextIteDate >= iteDateLast ) break;
           iteDate = nextIteDate;
     }


     return true;
}

QString SafetAutofilter::getNextOption() {
      Q_ASSERT_X( getvaluesoptions.count() > 0, qPrintable(tr("Autofilter")),
                  qPrintable(tr("La lista de opciones del \"Autofilter\" esta vacia")));
      if ( _countoptions < getvaluesoptions.count() ) {
           return getvaluesoptions.at( _countoptions++ ) ;
      }
      _countoptions = 0;
      return getvaluesoptions.at( _countoptions++ ) ;
 }
