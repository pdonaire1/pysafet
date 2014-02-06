pysafet
=======

python library to use "Safet": a workflow &amp; signature electronic library


Instalación de la librería Libsafet

===================================


El código fuente de la librería Libsafet se encuentra alojada en una plataforma de desarrollo colaborativo de software (forja) llamada Github, esta plataforma utiliza como sistema de control de versión el software Git. Para la compilación se requiere que se instale los siguientes dependencias:
```
libgraphviz-dev
libtar-dev
g++
libglib2.0-dev
x11proto-xext-dev
libqt4-dev
libssl-dev
make
python-qt4-sql
python-sip-dev
python-qt4-dev
libqt4-sql-sqlite
```
Para instalar las dependencias desde la línea de commandos o terminal (puede hacerlo con synaptics, si está en ubuntu) puede ejecutar:

```
$ sudo aptitude install libgraphviz-dev libtar-dev g++ libglib2.0-dev x11proto-xext-dev libqt4-dev libssl-dev make python-qt4-sql python-sip-dev python-qt4-dev libqt4-sql-sqlite  
```

Para clonar el repositorio de Libsafet debemos instalar el control de versiones git:
```
$ sudo aptitude install git
```

Luego ubicado en el directorio de trabajo (donde se va a descargar los fuentes) ejecuta el comando 

```
$ git clone https://github.com/victorrbravo/pysafet.git pysafet
```

Dentro del directorio de trabajo se crea el directorio pysafet donde se tiene el clone de la librería Libsafet 

Pasos para la compilación de la librería:
```
$ cd pysafet/websafet
$ qmake-qt4
$ make
$ cd ../PySafet/
$  python configure.py
$ make 
$ sudo make install
$ cd ../websafet
$ sudo make install 
```

Para verificar que la librería se instalo correctamente se procede arrancar un interprete de Python, para la misma debe hacer los siguientes pasos: 
```
$ python
cenditel@CENDITEL:~/proyecto/pysafet/websafet$ python 
Python 2.7.3 (default, Jan  2 2013, 13:56:14) 
[GCC 4.7.2] on linux2 
Type "help", "copyright", "credits" or "license" for more information. 
>>> 
```
y en el prompt de python (>>>) importa la librería de Safet ejecutando el siguiente comando 

```
>>> import Safet
>>>
```

Si el interprete no muestra ningún mensajes, el módulo se instalo correctamente. 
Para salir del interprete Ctrl D 

Ejecución de un ejemplo precargado
==================================

Dentro del directorio Pysafet contiene tres archivos que corresponde a un ejemplo precargado en la librería Libsafet:  cargarEstudiantes.py, graficoEstudiantes.py y listarEstudiantes.py

Para ejecutar el ejemplo debemos realizar los siguientes paso:

Se ubica en el directorio ../pysafet/Pysafet/ y procede a cargar los estudiantes con el comando:

```
../pysafet/PySafet$ python cargarEstudiantes.py
```
Luego lista los estudiante ejecutando el comando:
```
../pysafet/PySafet$ python listarEstudiantes.py
```

Por ultimo generamos el flujo de trabajo, pero antes de generarlo, se creo en el home del usuario un directorio que llamaremos tmp 
```
../pysafet/PySafet$ mkdir /home/#usuario#/tmp
```

Luego ejecutamos el comando 
```
../pysafet/PySafet$ python graficoEstudiantes.py
...
qt_temp.T17049.svg
```

Listamos el directorio tmp para verificar que se genero el flujo de trabajo 

```
../pysafet/PySafet$ ls /home/#usuario#/tmp/ 
qt_temp.T17049.svg
```

Para visualizar el flujo de trabajo ejecutamos: 

```
../pysafet/PySafet$ eog /home/#usuario#/tmp/qt_temp.T17049.svg
``` 

