from PyQt4.QtCore import *
import Safet

myyawl= Safet.SafetYAWL()
myyawl.loadAllConfFiles(3)
d = Safet.ParsedSqlToData()
myddoc = Safet.SafetDocument()
d.fields.append("Cargar_Archivo")
d.values.append("../PySafet/ingresados.ddoc")
result = myyawl.verifyDocumentsFromData(d,myddoc)

