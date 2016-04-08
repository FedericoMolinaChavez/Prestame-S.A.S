#include "creditosusuarios.h"
#include "ui_creditosusuarios.h"

#include <QDebug>//(Libreria)Permite imprimir mensajes con el fin de que la aplicacion este trabajando correctamente.

creditosUsuarios::creditosUsuarios(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::creditosUsuarios)
{
    ui->setupUi(this);
    qDebug()<<"Aplicacion ha sido Inicida.";

    QString nombreBaseDeDatos;//Inicializacion de la variable nombreBaseDeDatos.
    nombreBaseDeDatos.append("DatosParaElCredito.sqlite");//Asignacion del nombre en nombreBaseDeDatos.
    db=QSqlDatabase::addDatabase("QSQLITE");//Agrega los drivers del tipo base de datos.
    db.setDatabaseName(nombreBaseDeDatos);//Se le asigna a la variable db el nombre previamente asignado a nombreBaseDeDatos.
    if(db.open()){//Si logra abrir la base de datos.
        qDebug()<<"Se ha enlazado la base de datos.";
    }else{//Si no logra abrir la base de datos.
        qDebug()<<"¡ERROR!,no Se ha podido enlazar la base de datos.";
    }
    crearTablaUsuarioCredito();
}

creditosUsuarios::~creditosUsuarios()
{
    delete ui;
}

void creditosUsuarios::crearTablaUsuarioCredito()
{
    QString consulta;
    consulta.append("CREATE TABLE IF NOT EXISTS usuarioCredito("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "nombre VARCHAR(100),"
                    "apellido VARCHAR(100),"
                    "fechaDeNacimiento VARCHAR(20),"
                    "sexo VARCHAR(10),"
                    "estadoCivil VARCHAR(20),"
                    "direccionDeResidencia VARCHAR(150),"
                    "numeroDeCedula INTEGER NOT NULL,"
                    "tarjetaDeCredito INTEGER NOT NULL"
                    ");");
    QSqlQuery crear;
    crear.prepare(consulta);// crear prepara la consulta.
    if(crear.exec())
    {//Si se ejecuta la tabla.
        qDebug()<<"La tabla de usuarioCredito se ha creado correctamente.";
    }else{//Si no se ejecuta la tabla.
        qDebug()<<"La tabla de usuarioCredito no se ha creado correctamente o no existe.";
        qDebug()<<"¡ERROR!"<<crear.lastError();
    }
}

void creditosUsuarios::insertarTablaUsuarioCredito()
{
    QString consulta;
    consulta.append("INSERT INTO usuarioCredito("
                    "nombre,"
                    "apellido,"
                    "fechaDeNacimiento,"
                    "sexo,"
                    "estadoCivil,"
                    "numeroDeCedula,"
                    "direccionDeResidencia,"
                    "tarjetaDeCredito)"
                    "VALUES("
                    "'"+ui->lineEdit_1Nombre->text()+"',"
                    "'"+ui->lineEdit_2Apellido->text()+"',"
                    "'"+ui->lineEdit_3FechaDeNacimiento->text()+"',"
                    "'"+ui->lineEdit_4Sexo->text()+"',"
                    "'"+ui->lineEdit_5EstadoCivil->text()+"',"
                    "'"+ui->lineEdit_6NumeroDeCedula->text()+"'',"
                    ""+ui->lineEdit_7DireccionDeResidencia->text()+","
                    ""+ui->lineEdit_8TarjetaDeCredito->text()+""
                    ");");
    QSqlQuery insertar;
    insertar.prepare(consulta);// insertar prepara la consulta.
    if(insertar.exec())
    {//Si se ejecuta la tabla.
        qDebug()<<"El usuario se ha insertado correctamente.";
    }else{//Si no se ejecuta la tabla.
        qDebug()<<"El usuario no se ha insertado correctamente.";
        qDebug()<<"¡ERROR!"<<insertar.lastError();
    }
}
