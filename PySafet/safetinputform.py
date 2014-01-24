#!/usr/bin/python
# -*- coding: utf-8 -*-
from PyQt4.QtCore import *
import Safet
import os
import sys
if len(sys.argv)>1:
	myconsult = u"%s" % (sys.argv[1].decode("utf-8")) 
else:
	print "n/a"
	sys.exit()

myform = QString(myconsult)
myinflow = Safet.MainWindow(u"/home/vbravo")
myinflow.setMediaPath("/var/www/media")
myinflow.setHostMediaPath("http://seguridad.cenditel.gob.ve/safet/intranet/media/archivos")
result = myinflow.login("vbravo","zpinquar")
if result:
	isinserted = myinflow.toInputForm(myform)
	if isinserted:
#		print u"Registro insertado...OK"
		print "Registro insertado...OK " + myinflow.currentJSON().toUtf8()
	else:
		print u"*Registro NO INSERTADO:" + myinflow.currentError().toUtf8()

