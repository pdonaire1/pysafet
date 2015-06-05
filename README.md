PySafet (Safet for python)
=======

PySafet : a workflow engine (library) with signature electronic features available for Python and C++

Para ver una documentación completa puede dirigirse al siguiente enlace (link): 

http://www.novoapps.info/pysafet/


1. Instalación para Debian Wheezy 7.0 (64 bits)
===============================================

Agregar al repositorio apt la siguiente línea (/etc/apt/sources.list):

```
deb http://tibisay.cenditel.gob.ve/repositorio wheezy main
```

Obtener la clave (GPG) del repositorio Debian, utilizando la siguiente línea de comandos:

```
> wget http://tibisay.cenditel.gob.ve/repositorio/apt-seguridad.gpg.asc
> apt-key add apt-seguridad.gpg.asc

```

Luego ejecutar:


```
> aptitude update
> aptitude install pysafet
```


2. Instalación desde los archivos fuentes 
======================================


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
$ make clean
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

Continuando con la configuraciones
======================
dirigirse a https://seguridad.cenditel.gob.ve/safet/media/curso/ y descargar el archivo libpnp_graphviz.so y
copiarlo a /urs/lib/libsafet

```
$ su
# cp ~/Descargas/libpnp_graphviz.so /usr/lib/libsafet/
```

Para correr La interfaz gráfica ejecutar el ejecutable del directorio ~/.safet/inflow

```
$ ./inflow
```
Usuario: admin Contraseña: admin.

Para hacer el CRUD, en el ~/.safet/input/ se encuentra el fichero deftrac.xml en donde se altera la linea 19 y 
se coloca en el atributo literal="" la opción que fué configurada en el ~/.safet/flowfiles/mensajes.xml en
la linea 20 en el atributo options="" Ej: options="iniciado" quedando así en el fichero deftrac.xml en la
linea 19 la opción literal="iniciado" para que pueda relacionarlo.

Y en la linea 84 del deftrac.xml se coloca en el atributo path="" la ruta del mismo xml quedando así:
```
		<field type="comboflow" mandatory="yes" options="next" 
                                  path="/home/c30/.safet/flowfiles/mensajes.xml" title="Siguiente_Estado">
```

NOTA: Si al momento de ejecutar un proceso ocurre un error, éste se puede apreciar en el archivo 
~/.safet/log/safet.log

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

