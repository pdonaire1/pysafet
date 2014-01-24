/*
* SAFET Sistema Automatizado para la Firma Electrónica y Estampado de Tiempo
* Copyright (C) 2008 Víctor Bravo (vbravo@cenditel.gob.ve), Antonio Araujo (aaraujo@cenditel.gob.ve
*     
* CENDITEL Fundacion Centro Nacional de Desarrollo e Investigación en Tecnologías Libres 
*  
* Este programa es software libre; Usted puede usarlo bajo los términos de la licencia de 
* software GPL versión 2.0 de la Free Software Foundation. 
* 
* Este programa se distribuye con la esperanza de que sea útil, pero SI NINGUNA GARANTÍA;
* tampoco las implícitas garantías de MERCANTILIDAD o ADECUACIÓN A UN PROPÓSITO PARTICULAR.
* Consulte la licencia GPL para más detalles. Usted debe recibir una copia de la GPL junto 
* con este programa; si no, escriba a la Free Software Foundation Inc. 51 Franklin Street,
* 5º Piso, Boston, MA 02110-1301, USA.
*
*/

#include "SafetYAWL.h"
#include "SafetTask.h"
#include "SafetAutofilter.h"
#include "SafetRecursiveFilter.h"
#include "SafetWorkflow.h"


SafetTask::SafetTask():SafetNode() {
	_id = "";

}

SafetTask::~SafetTask() {
//     qDebug("..saliendo...~SafetTask...");
}

QString SafetTask::getPrevTask() {
    QString result = "N/A";
//    SafetWorkflow *mywf;
//    mywf = qobject_cast<SafetWorkflow*> (this->parent());
//    Q_CHECK_PTR(mywf);
//    for(int i=0; i < mywf->getTasklist().count(); i++) {
//        SafetTask *curtask = mywf->getTasklist().at(i);
//        Q_CHECK_PTR(curtask);
//        SafetPort * curport = curtask->port()
//    }

    return result;
}

void SafetTask::addChild(SafetXmlObject* o) {
	Q_CHECK_PTR(o);
	SafetXmlObject::addChild(o);
	SafetWorkflow *mywf;
        SafetYAWL *myyawl;
        SafetVariable *ovar, *myvar;
        SafetAutofilter *myaf;
        SafetRecursivefilter *myrf;
        SafetPort* myport;
        QString sourceaf;
        bool contain = false;
        int i = 0; // Contador
	switch(SafetYAWL::getClassReference(SafetYAWL::translateNS(o->metaObject()->className()))) {
        case 7: // Variables             
		ovar = qobject_cast<SafetVariable*>(o);
		Q_CHECK_PTR( ovar );		
		mywf = qobject_cast<SafetWorkflow*> (this->parent());
		Q_CHECK_PTR( mywf);
		contain = mywf->variablesId().contains(ovar->id());
		//(*SafetYAWL::evalExit())( SafetYAWL::streamlog.eval(!contain, tr("La variable <%1> esta repetida").arg(ovar->id())) );
                if (contain ) {
                    SafetYAWL::streamlog
                            << SafetLog::Error
                            <<
                    tr("La variable \"%1\" esta repetida").arg(ovar->id());
                    return;
                }

                mywf->variablesId() += ovar->id();
		variablelist.push_back(ovar);
                if (aflist.count() > 0 ) {
                     for(i = 0; i < aflist.count(); i++ ) {
                          Q_CHECK_PTR( aflist.at(i) );
                          Q_ASSERT( aflist.at(i)->getVariables().count() > 0 );
                          myvar = aflist.at(i)->getVariables().at(0);
                          Q_CHECK_PTR( myvar );
                          myvar->setDocumentsource( ovar->documentsource() );
                          myvar->setTokenlink( ovar->tokenlink() );
                     }
                }
		break;
	case 3:
                myport = qobject_cast<SafetPort*>(o);
                Q_CHECK_PTR( myport );
                syncPort( myport );                
		break;
        case 10: // Autofiltros
                myaf = qobject_cast<SafetAutofilter*>(o);
                mywf = qobject_cast<SafetWorkflow*>(parent());                
                Q_CHECK_PTR( mywf );
                myyawl = qobject_cast<SafetYAWL*>(mywf->parent());
                Q_CHECK_PTR( myyawl );
                Q_CHECK_PTR( myaf );
//                qDebug("...myaf->id(): |%s| ...: mywf->isActiveFilter( myaf->id() ):%d",
//                       qPrintable(myaf->id()), myyawl->isActiveFilter( myaf->id() ) );
                if ( myyawl->isActiveFilter( myaf->id() ) ) {
//                     sourceaf = myaf->source();
//                     qDebug("... SafetTask::addChild...sourceaf...: %s", qPrintable(sourceaf));
//                     if ( mywf->searchTask( sourceaf ) == NULL && mywf->searchCondition( sourceaf) == NULL ) {
//                          SafetYAWL::streamlog  << SafetLog::Error
//                             << tr("El autofiltro \"%1\" no se puede crear porque el destino no existe: \"%2\"").arg(myaf->id()).arg(sourceaf);
//                          break;
//                     }
                      myaf->setFiltertask( this );
                //     qDebug("...aflist = myaf->createTasks();....");
                     aflist = myaf->createTasks(id().left(2).toLower());
                }
                mywf->autofiltersId().insert(myaf->id());
                break;
        case 11: // filtros Recursivos
                qDebug("..............CARGANDO FILTRO RECURSIVO.................(1)....");
                myrf = qobject_cast<SafetRecursivefilter*>(o);
                mywf = qobject_cast<SafetWorkflow*>(parent());
                Q_CHECK_PTR( mywf );
                myyawl = qobject_cast<SafetYAWL*>(mywf->parent());
                Q_CHECK_PTR( myyawl );
                Q_CHECK_PTR( myrf );
                //qDebug("...myrf->id(): |%s| ...: mywf->isActiveFilter( myrf->id() ):%d",
                //       qPrintable(myrf->id()), mywf->isActiveFilter( myrf->id() ) );
                if ( myyawl->isActiveRecursiveFilter(myrf->id()) ) {
//                     sourceaf = myrf->source();
//                     qDebug("... SafetTask::addChild...sourceaf...: %s", qPrintable(sourceaf));
//                     if ( mywf->searchTask( sourceaf ) == NULL && mywf->searchCondition( sourceaf) == NULL ) {
//                          SafetYAWL::streamlog  << SafetLog::Error
//                             << tr("El autofiltro \"%1\" no se puede crear porque el destino no existe: \"%2\"").arg(myaf->id()).arg(sourceaf);
//                          break;
//                     }
                      myrf->setFiltertask( this );
                //     qDebug("...rflist = myrf->createTasks();....");
                     rflist = myrf->createTasks(id().left(2).toLower());
                }
                mywf->recursivefiltersId().insert(myrf->id());
                break;

	default:;
	}

}

void SafetTask::addPort(SafetPort* p ) {
     Q_CHECK_PTR( p );
     p->setParent( qobject_cast<SafetXmlObject*>(this));
     portlist.push_back( p );
}

void SafetTask::addVariable(SafetVariable* v ) {
     Q_CHECK_PTR( v );
     SafetWorkflow *mywf = qobject_cast<SafetWorkflow*> (this->parent());
     Q_CHECK_PTR( mywf);
     v->setParent( qobject_cast<SafetXmlObject*>(this));
     bool contain = mywf->variablesId().contains(v->id());
     if (contain ) {
         SafetYAWL::streamlog
                 << SafetLog::Warning
                 <<tr("La variable \"%1\" esta repetida").arg(v->id());
         return;
     }
     variablelist.push_back( v );
     mywf->variablesId() += v->id();
}

void SafetTask::syncPort(SafetPort* p) {
     Q_CHECK_PTR( p );
     if ( aflist.count() == 0  ) {
          portlist.push_back(p);
          return;
     }
     Q_ASSERT( getPorts().count() > 0 );
     SafetPort* currentPort = getPorts().at(0);
     Q_CHECK_PTR( currentPort );
     foreach ( SafetConnection* c, p->getConnectionlist()) {
          currentPort->addConnection( c );
     }
}

QList<SafetVariable*>& SafetTask::getVariables() {
	return variablelist;	
}





