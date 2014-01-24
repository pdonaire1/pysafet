from PyQt4.QtCore import *
import Safet
import os

s = QString(os.getcwd()+"/flujoviaticosgeneral.xml")
print s
myyawl= Safet.SafetYAWL()
myyawl.openXML(s)
myyawl.convertXMLtoObjects()
myyawl.openDataSources()
mywf = myyawl.getWorkflow()
tasks = mywf.listTasks(True)

namevariable = QString("VariableSolicitado")
documents = mywf.getDocuments(namevariable).toUtf8()
documentsjson = mywf.getDocuments(namevariable, Safet.SafetWorkflow.JSON).toUtf8()
