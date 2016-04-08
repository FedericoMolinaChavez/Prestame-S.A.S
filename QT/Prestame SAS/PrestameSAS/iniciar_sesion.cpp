#include "iniciar_sesion.h"
#include "ui_iniciar_sesion.h"
#include "QString"

iniciar_Sesion::iniciar_Sesion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::iniciar_Sesion)
{
    ui->setupUi(this);
}

iniciar_Sesion::~iniciar_Sesion()
{
    delete ui;
}

void iniciar_Sesion::on_pushButton_1Acceder_clicked()
{

}

void iniciar_Sesion::on_pushButton_2Cancelar_clicked()
{
//Impletementado.
}
