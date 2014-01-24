#!/usr/bin/python
# -*- coding: utf-8 -*-
from PyQt4.QtCore import *
import Safet
import os

#pars = {'Por_Hito': 'VersionAlfa', '2': '_Cualquiera_' }

#pars['Por Hito'] = 'VersionAlfa'
#pars['Por_Propietario'] = '_Cualquiera_'


myconsult = u"operacion:Generar_gráfico_para_clave_actualizacion_software  Cargar_archivo_flujo: /home/vbravo/.safet/flowfiles/actualizacion_software.xml   Clave:88"
#myconsult = u"operacion:Listar_datos  Cargar_archivo_flujo:/home/vbravo/.safet/flowfiles/flujoAppPlanificacionSoftware.xml   Variable:vCodificacion_Interfaz"
#myconsult = u"operacion:Generar_gráfico_coloreado Cargar_archivo_flujo: /home/vbravo/.safet/flowfiles/flujoAppPlanificacionSoftware.xml"
#myconsult = u"operacion:agregar_ticket resumen: pruebaPy descripcion: dfdf componente: Aplicacion hito: VersionAlfa version: 0.1.0.0 tipo: Funcionalidad_extra prioridad: Importante" 
#myconsult = u"operacion:Listar_datos Cargar_archivo_flujo:/home/vbravo/.safet/flowfiles/flujogeneral.xml Variable:VariableNuevo"
#myconsult = u"operacion:Listar_datos Cargar_archivo_flujo: /home/vbravo/.safet/flowfiles/flujogeneral.xml Variable: VariableNuevo"
#myconsult = u"operacion:Listar_datos Cargar_archivo_flujo: /home/vbravo/.safet/flowfiles/flujogeneral.xml Variable: VariablePorCerrar"
#myconsult = u"operacion:Generar_gráfico_coloreado Cargar_archivo_flujo: /home/vbravo/.safet/flowfiles/flujogeneral.xml"
#myconsult = u"operacion:Generar_gráfico_para_clave Cargar_archivo_flujo: /home/vbravo/.safet/flowfiles/flujogeneral.xml Clave: 6"
#myconsult = u"operacion:Generar_gráfico_coloreado Cargar_archivo_flujo: /home/vbravo/.safet/flowfiles/flujogeneralsesiones.xml"
#myconsult = u"operacion:Generar_gráfico_para_clave Cargar_archivo_flujo: /home/vbravo/.safet/flowfiles/flujogeneralsesiones.xml Clave: V019144886"
#myconsult = u"operacion:Listar_datos Cargar_archivo_flujo: /home/vbravo/.safet/flowfiles/flujogeneralsesiones.xml  Variable: VariableSesion2"
#myconsult = u"operacion:Listar_datos Cargar_archivo_flujo: /home/vbravo/.safet/flowfiles/reportesActividades.xml Variable: VariableSumaTodas" 
#myconsult = u"operacion:Listar_datos_consolidado  Cargar_archivo_flujo: /home/vbravo/.safet/flowfiles/reportesActividades.xml Variable: VariableSumaTodas" 
#myconsult = u"operacion:Listar_datos   Cargar_archivo_flujo: /home/vbravo/.safet/flowfiles/flujoAppPrueba.xml Variable: vTarea2" 
#myconsult = u"operacion:Generar_gráfico_para_clave_proyecto_holamundo  Cargar_archivo_flujo:/home/vbravo/.safet/flowfiles/flujoAppPrueba.xml   Clave:87"

myform = QString(myconsult)
print "Paso 1"
myinflow = Safet.MainWindow(u"/home/vbravo")
myinflow.setMediaPath(u"/home/vbravo/PySafet")
myinflow.setHostURL(u"http://localhost")

print "RegisterLogin.........."
myinflow.registerLogin("vbravo")
print "RegisterLogin.........."
result = myinflow.login("vbravo","d91408cd")
print "result: %d" % (result)
print "myform: %s" % (myconsult)
#myinflow.setParsValues(pars) 
isinserted = myinflow.toInputConsole(myconsult)
print "myinflow isinserted: %d" % (isinserted)
#print "------_>json: \n%s" % (myinflow.currentJSON().toUtf8())
print "------------------->table:\n%s" % (myinflow.currentTable().toUtf8())
print "Hecho."


