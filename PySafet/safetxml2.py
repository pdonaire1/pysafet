#-*- coding: utf-8 -*-
from PyQt4.QtCore import *
import Safet
import os
import sys

if len(sys.argv) < 2:
	print "Debe colocar un argumento"
	sys.exit(0)

myinflow = Safet.MainWindow(u"/home/vbravo")
result = myinflow.login(u"vbravo",u"zpinquar")
#if not result:
#   return u"Falla en la autenticación"

#s = QString(os.getcwd()+"/flujoviaticosgeneral.xml")
s = QString("/home/vbravo/.safet/flowfiles/flujoAppPlanificacionSoftware.xml")
print s
myinflow.delNodeToXMLWorkflow(s, u"%s" % (sys.argv[1]))

