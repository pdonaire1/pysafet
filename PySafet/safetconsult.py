#!/usr/bin/python
# -*- coding: utf-8 -*-
from PyQt4.QtCore import *
import Safet
import os
myconsult = u"operacion:Listar_datos Cargar_archivo_flujo:../.safet/flowfiles/reportesActividades.xml Variable:VariableSumaTodas"
#myconsult = u"operacion:agregar_ticket resumen: pruebaPy descripcion: dfdf componente: Aplicacion hito: VersionAlfa version: 0.1.0.0 tipo: Funcionalidad_extra prioridad: Importante" 
#myconsult = u"operacion:Listar_datos Cargar_archivo_flujo:../.safet/flowfiles/flujogeneral.xml Variable:VariableNuevo"
myform = QString(myconsult)
print "Paso 1"
myinflow = Safet.MainWindow(u"..")
myinflow.setMediaPath("../tmp")
myinflow.setHostURL("http://localhost")
myinflow.registerLogin("vbravo")
result = myinflow.login("vbravo","d91408cd")
print "result: %d" % (result)
print "myform: %s" % (myconsult) 
isinserted = myinflow.toInputConsole(myconsult)
print "\n\n\nmyinflow isinserted: %s" % (isinserted)
print "\n\n\n----------------table:\n %s" % (myinflow.currentTable().toUtf8())
print "\n\n\n----------------json:\n %s" % (myinflow.currentJSON().toUtf8())
