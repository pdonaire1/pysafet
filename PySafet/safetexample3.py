from PyQt4.QtCore import *
import Safet

myyawl= Safet.SafetYAWL()
myyawl.loadAllConfFiles(3)
mylist = QStringList()
nametowrite = QString()
d = Safet.ParsedSqlToData()
myddoc = Safet.SafetDocument()
d.fields.append("Cargar_Archivo")
d.fields.append("Nombre_contenedor")
d.values.append("/home/duzcategui/envoltorio/PySafet/firmados/DiagramaDeClases.jpeg")
d.values.append("/home/duzcategui/envoltorio/PySafet/firmados/DiagramaDeClases.ddoc")
myyawl.setCurrentPin("dba8A4RF")
result = myyawl.signDocumentsFromData(d,nametowrite,mylist,myddoc)


