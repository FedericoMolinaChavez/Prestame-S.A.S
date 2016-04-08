#include "prestame_sas.h"
#include "ui_prestame_sas.h"
#include "creditosusuarios.h"

#include <QDebug>//(Libreria)Permite imprimir mensajes con el fin de que la aplicacion este trabajando correctamente.

Prestame_SAS::Prestame_SAS(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Prestame_SAS)
{
    ui->setupUi(this);
}

Prestame_SAS::~Prestame_SAS()
{
    delete ui;
}

void Prestame_SAS::on_pushButton_1IngresarUsuario_clicked()
{
}
