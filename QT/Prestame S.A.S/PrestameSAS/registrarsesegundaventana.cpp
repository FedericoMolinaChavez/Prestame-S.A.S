#include "registrarsesegundaventana.h"
#include "ui_registrarsesegundaventana.h"
#include "registrarse.h"


registrarseSegundaVentana::registrarseSegundaVentana(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarseSegundaVentana)
{
    ui->setupUi(this);
}

registrarseSegundaVentana::~registrarseSegundaVentana()
{
    delete ui;
}

void registrarseSegundaVentana::on_pushButton_3Anterior_clicked()
{
    registrarse *ventanaRegistrarse=new registrarse(this);//Objeto ventanaIniciarSesion.  pd el this la convierte en padre, por lo que siempre estara por encima de las hijas.
    ventanaRegistrarse->setModal(true);
    ventanaRegistrarse->show();//Vuelve vicible la ventana.
}

void registrarseSegundaVentana::on_pushButton_1Finalizar_clicked()
{
    QFile archivo("registrarseDatos.xml");
    archivo.open(QIODevice::ReadOnly);
    archivoTemporal=new QDomDocument();
    archivoTemporal->setContent(&archivo);
    archivo.close();
    QDomElement raiz = archivoTemporal->documentElement();
    QDomElement elementos = raiz.firstChild().toElement();
    while(!elementos.isNull())
    {
        if(elementos.tagName()=="Dato")
        {
            QDomElement elemento=elementos.firstChild().toElement();
            while (!elemento.isNull())
            {
                QString dato=elementos.attribute("informacion","vacio");
                qDebug()<<dato;
            }
        }
    }

    // 1)se abre el archivo
    // 2)se lee el archivo
    //3) se copia el archivo en la tabla de la base de datos.
    //4)se cierra el archivo de texto.
    registrarse *ventanaRegistrarse=new registrarse(this);//Objeto ventanaIniciarSesion.  pd el this la convierte en padre, por lo que siempre estara por encima de las hijas.
    ventanaRegistrarse->setModal(true);
    ventanaRegistrarse->show();//Vuelve vicible la ventana.
}
