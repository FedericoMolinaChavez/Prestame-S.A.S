#include "prestame_sas.h"
#include "ui_prestame_sas.h"
#include "registrarse.h"
#include "registrarse_segunda_ventana.h"


prestame_SAS::prestame_SAS(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::prestame_SAS)
{
    ui->setupUi(this);
}

prestame_SAS::~prestame_SAS()
{
    delete ui;
}

void prestame_SAS::on_actionIniniciarSesion_triggered()
{
    iniciar_Sesion *ventanaIniciarSesion=new iniciar_Sesion(this);//Objeto ventanaIniciarSesion.  pd el this la convierte en padre, por lo que siempre estara por encima de las hijas.
    ventanaIniciarSesion->setModal(true);
    ventanaIniciarSesion->show();//Vuelve vicible la ventana.
    //ventanaIniciarSesion->hide();//Vuelve invicible la ventana.
}

void prestame_SAS::on_actionRegistrarse_triggered()
{
    registrarse *ventanaRegistrarse=new registrarse(this);//Objeto ventanaIniciarSesion.  pd el this la convierte en padre, por lo que siempre estara por encima de las hijas.
    ventanaRegistrarse->setModal(true);
    ventanaRegistrarse->show();//Vuelve vicible la ventana.
}

//Registrarse ventana 1
void registrarse::on_pushButton_1Siguiente_clicked()
{
    registrarse_Segunda_Ventana *ventanaRegistrarse2=new registrarse_Segunda_Ventana(this);//Objeto ventanaIniciarSesion.  pd el this la convierte en padre, por lo que siempre estara por encima de las hijas.
    ventanaRegistrarse2->setModal(true);
    ventanaRegistrarse2->show();//Vuelve vicible la ventana.
}

void registrarse::on_pushButton_2Cancelar_clicked()
{
    //Implementado.
}

//Registrarse ventana 2
void registrarse_Segunda_Ventana::on_pushButton_3Anterior_clicked()
{

}
