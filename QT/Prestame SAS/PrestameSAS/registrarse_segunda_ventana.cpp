#include "registrarse_segunda_ventana.h"
#include "ui_registrarse_segunda_ventana.h"

registrarse_Segunda_Ventana::registrarse_Segunda_Ventana(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarse_Segunda_Ventana)
{
    ui->setupUi(this);
}

registrarse_Segunda_Ventana::~registrarse_Segunda_Ventana()
{
    delete ui;
}
