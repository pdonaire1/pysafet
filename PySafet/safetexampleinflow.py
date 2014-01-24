# -*- coding: utf-8 -*-
from PyQt4.QtCore import *
import Safet
import os
mystr = u"""
operacion:generar_solicitud_para_blog Cédula_solicitante: V12670123-María, Gutiérrez Mendoza
Tipo_de_blog: Investigación
Observación: Un blog sobre cocina
Nombre_del_Blog: encocina
Nombre_de_la_dirección_Web_del_blog: encocina.cenditel.gob.ve
Proyecto_al_que_pertenece: RADECON
Fecha_que_propone: 1296247598
"""
#operacion:agregar_empleado Cedula: V20778810 Nombres: Víctor Rélar  Apellidos: Vélez Jímenez Cargo_asignado: Investigador"
myform = QString(mystr)
myinflow = Safet.MainWindow("/home/vbravo")
result = myinflow.login("admin","zpinquar")
if result:
#	isinserted = myinflow.toInputForm(mystr)
	isinserted = True
	if isinserted:
		print "Registro insertado...OK"
	else:
		print "Registro NO INSERTADO"
