# -*- coding: utf-8 -*-
from PyQt4.QtCore import *
import Safet
import os
mystr = u"operacion:Listar_datos Cargar_archivo_flujo: /home/vbravo/.safet/flowfiles/flujobloggeneral.xml Variable: VariableFinalizado"
myform = QString(mystr)
myinflow = Safet.MainWindow("/home/vbravo")
result = myinflow.login("admin","zpinquar")
if result:
	isinserted = myinflow.toInputConsole(mystr)
	if isinserted:
		print "Consulta Realizada...OK"
		print "JSON:\n%s" % (myinflow.currentJSON())
		
	else:
		print "Consulta NO Realizada"
