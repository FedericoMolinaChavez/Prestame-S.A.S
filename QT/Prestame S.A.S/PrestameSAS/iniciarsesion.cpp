#include "iniciarsesion.h"
#include "ui_iniciarsesion.h"

iniciarSesion::iniciarSesion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::iniciarSesion)
{
    ui->setupUi(this);
}

iniciarSesion::~iniciarSesion()
{
    delete ui;
}
