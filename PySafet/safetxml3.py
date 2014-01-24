#-*- coding: utf-8 -*-
from PyQt4.QtCore import *
import Safet
import os
import sys

if len(sys.argv) < 4:
	print "La sintaxis es safetxml3.py <Nodo_Origen> <Nodo_Destino> <Nuevo_Nodo>"
	sys.exit(0)

myinflow = Safet.MainWindow(u"/home/vbravo")
result = myinflow.login(u"vbravo",u"zpinquar")
#if not result:
#   return u"Falla en la autenticación"

#s = QString(os.getcwd()+"/flujoviaticosgeneral.xml")
s = QString("/home/vbravo/.safet/flowfiles/flujoAppPlanificacionSoftware.xml")
print s
myinflow.changeConnXMLWorkflow(s, sys.argv[1],sys.argv[2],sys.argv[3])

