#include "registrarseresultado.h"
#include "ui_registrarseresultado.h"

registrarseResultado::registrarseResultado(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarseResultado)
{
    ui->setupUi(this);
    QFile salida("registrarseDatos.xml");
    salida.open(QIODevice::ReadOnly);
    QTextStream leer(&salida);
    ui->plainTextEditResultadoDelRegistro->setPlainText(leer.readAll());
    salida.close();
}

registrarseResultado::~registrarseResultado()
{
    delete ui;
}
