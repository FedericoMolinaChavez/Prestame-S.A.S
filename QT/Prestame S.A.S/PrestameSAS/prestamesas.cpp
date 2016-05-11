#include "prestamesas.h"
#include "ui_prestamesas.h"
#include "registrarse.h"
#include "iniciarsesion.h"

PrestameSAS::PrestameSAS(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PrestameSAS)
{
    ui->setupUi(this);
}

PrestameSAS::~PrestameSAS()
{
    delete ui;
}

void PrestameSAS::on_actionRegistrarse_triggered()
{
    registrarse *ventanaRegistrarse=new registrarse(this);//Objeto ventanaIniciarSesion.  pd el this la convierte en padre, por lo que siempre estara por encima de las hijas.
    ventanaRegistrarse->setModal(true);
    ventanaRegistrarse->show();//Vuelve vicible la ventana.
}

void PrestameSAS::on_actionIniciar_Sesion_triggered()
{
    iniciarSesion *ventanaRegistrarse=new iniciarSesion(this);//Objeto ventanaIniciarSesion.  pd el this la convierte en padre, por lo que siempre estara por encima de las hijas.
    ventanaRegistrarse->setModal(true);
    ventanaRegistrarse->show();//Vuelve vicible la ventana.
}
