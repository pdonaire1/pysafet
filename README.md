pysafet
=======

python library to use "Safet": a workflow &amp; signature electronic library


Instalación de la librería Libsafet

===================================


El código fuente de la librería Libsafet se encuentra alojada en una plataforma de desarrollo colaborativo de software (forja) llamada Github, esta plataforma utiliza como sistema de control de versión el software Git. Para la compilación se requiere que se instale los siguientes dependencias:

libgraphviz-dev
libtar-dev
g++
libglib2.0-dev
x11proto-xext-dev
libqt4-dev
libssl-dev
make
qmake
python-qt4-sql
python-sip-dev
python-qt4-dev
libqt4-sql-sqlite

$ sudo aptitude install libgraphviz-dev libtar-dev g++ libglib2.0-dev x11proto-xext-dev libqt4-dev libssl-dev make qmake python-qt4-sql python-sip-dev python-qt4-dev libqt4-sql-sqlite

Para clonar el repositorio de Libsafet debemos instalar el control de versiones git:

$ sudo aptitude install git

Luego ubicado en el directorio de trabajo (donde se va a descargar los fuentes) ejecuta el comando 

$ git clone https://github.com/victorrbravo/pysafet.git pysafet

Dentro del directorio de trabajo se crea el directorio pysafet donde se tiene el clone de la librería Libsafet 

Pasos para la compilación de la librería:

$ cd pysafet/websafet
$ qmake-qt4
$ make
$ cd ../PySafet/
$  python configure.py
$ make 
$ sudo make install
$ cd ../websafet
$ sudo make install 

Para verificar que la librería se instalo correctamente se procede arrancar un interprete de Python, para la misma debe hacer los siguientes pasos: 

$ python

cenditel@CENDITEL:~/proyecto/pysafet/websafet$ python 
Python 2.7.3 (default, Jan  2 2013, 13:56:14) 
[GCC 4.7.2] on linux2 
Type "help", "copyright", "credits" or "license" for more information. 
>>> 

y en el prompt de python (>>>) importa la librería de Safet ejecutando el siguiente comando 

>>> import Safet
>>>

Si el interprete no muestra ningún mensajes, el módulo se instalo correctamente. 
Para salir del interprete Ctrl D 

Ejecución de un ejemplo precargado
==================================

Dentro del directorio Pysafet contiene tres archivos que corresponde a un ejemplo precargado en la librería Libsafet:  cargarEstudiantes.py, graficoEstudiantes.py y listarEstudiantes.py

Para ejecutar el ejemplo debemos realizar los siguientes paso:

Se ubica en el directorio ../pysafet/Pysafet/ y procede a cargar los estudiantes con el comando:

../pysafet/PySafet$ python cargarEstudiantes.py
QFSFileEngine::open: No file name specified 

Luego lista los estudiante ejecutando el comando:

../pysafet/PySafet$ python listarEstudiantes.py
QFSFileEngine::open: No file name specified 
QSqlDatabasePrivate::removeDatabase: connection '/home/cenditel/.safet/mydb.db' is still in use, all queries will cease to work. 
QSqlDatabasePrivate::removeDatabase: connection '/home/cenditel/.safet/mydb.db' is still in use, all queries will cease to work. 
QSqlDatabasePrivate::removeDatabase: connection '/home/cenditel/.safet/mydb.db' is still in use, all queries will cease to work. 
safetvariable = 'VariableSesion8'; 
safetkey = ''; 
safettitle = 'VariableSesion8'; 
safetreport = 'operacion:Listar_datos Cargar_archivo_flujo: /home/cenditel/.safet/flowfiles/flujogeneralsesiones.xml Variable: VariableSesion8'; 
safetlistcount = 115; 
safetcolumns  = [{ key: "cedula",label:"cedula",width:90,resizeable:true,sortable:true}, 
{ key: "id_estudiante",label:"id_estudiante",width:10,resizeable:true,sortable:true}, 
{ key: "cedula",label:"cedula",width:90,resizeable:true,sortable:true}, 
{ key: "nombres",label:"nombres",width:90,resizeable:true,sortable:true}, 
{ key: "apellidos",label:"apellidos",width:90,resizeable:true,sortable:true}, 
{ key: "nombre",label:"nombre",width:90,resizeable:true,sortable:true}, 
{ key: "fecha_asignacion",label:"fecha_asignacion",width:130,resizeable:true,sortable:true}]; 

 safetjson = { 
 "columns" : [ {"sTitle": "cedula"}, 
 {"sTitle": "id_estudiante"}, 
 {"sTitle": "cedula"}, 
 {"sTitle": "nombres"}, 
 {"sTitle": "apellidos"}, 
 {"sTitle": "nombre"}, 
 {"sTitle": "fecha_asignacion"}, 
 ], 
.
.
.

Por ultimo generamos el flujo de trabajo, pero antes de generarlo, se creo en el home del usuario un directorio que llamaremos tmp 

../pysafet/PySafet$ mkdir /home/#usuario#/tmp

Luego ejecutamos el comando 

../pysafet/PySafet$ python graficoEstudiantes.py
QFSFileEngine::open: No file name specified 
QSqlDatabasePrivate::removeDatabase: connection '/home/cenditel/.safet/mydb.db' is still in use, all queries will cease to work. 
QString::arg: Argument missing: , 230 
QString::arg: Argument missing: , 0.43 
QString::arg: Argument missing: , 230 
QString::arg: Argument missing: , 6.5 
QString::arg: Argument missing: , 230 
QString::arg: Argument missing: , 0.43 
QString::arg: Argument missing: , 230 
QString::arg: Argument missing: , 9.6 
.
.
.
qt_temp.T17049.svg

Listamos el directorio tmp para verificar que se genero el flujo de trabajo 


../pysafet/PySafet$ ls /home/#usuario#/tmp/ 
qt_temp.T17049.svg

Para visualizar el flujo de trabajo ejecutamos: 

../pysafet/PySafet$ eog /home/#usuario#/tmp/qt_temp.T17049.svg
 
