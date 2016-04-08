#include "registrarse.h"
#include "ui_registrarse.h"


#include <QDebug>//(Libreria)Permite imprimir mensajes con el fin de que la aplicacion este trabajando correctamente.

registrarse::registrarse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarse)
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
    crearTablaUsuarioRegistro();
}

registrarse::~registrarse()
{
    delete ui;
}

//Procesos.

void registrarse::crearTablaUsuarioRegistro()
{
    QString consulta;
    consulta.append("CREATE TABLE IF NOT EXISTS usuarioRegistro("
                    "nombre VARCHAR(100),"
                    "apellido VARCHAR(100),"
                    "fechaDeNacimiento VARCHAR(20),"
                    "sexo VARCHAR(20),"
                    "estadoCivil VARCHAR(20),"
                    "numeroDeCedula VARCHAR(20),"
                    "direccionDeResidencia VARCHAR(150),"
                    "tarjetaDeCredito VARCHAR(20),"
                    "numeroDeCelular VARCHAR(20),"
                    "correoElectronico VARCHAR(150),"
                    "ingresosMensuales INTEGER NOT NULL,"
                    "ingresosMensualesFamiliares INTEGER NOT NULL,"
                    "gastos VARCHAR(100),"
                    "nombreDeLaEmpresa VARCHAR(100),"
                    "telefonoDeLaEmpresa VARCHAR(15),"
                    "tiempoLaborandoEnLaEmpresa VARCHAR(100),"
                    "usuario VARCHAR(100),"
                    "contrasenea VARCHAR(100)"

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

void registrarse::insertarTablaUsuarioRegistro()
{
    QString consulta;
    consulta.append("INSERT INTO usuarioRegistro("
                    "nombre,"
                    "apellido,"
                    "fechaDeNacimiento,"
                    "sexo,"
                    "estadoCivil,"
                    "numeroDeCedula,"
                    "direccionDeResidencia,"
                    "tarjetaDeCredito,"
                    "numeroDeCelular,"
                    "correoElectronico,"
                    "ingresosMensuales,"
                    "ingresosMensualesFamiliares,"
                    "gastos VARCHAR(100),"
                    "nombreDeLaEmpresa,"
                    "telefonoDeLaEmpresa,"
                    "tiempoLaborandoEnLaEmpresa,"
                    "usuario,"
                    "contrasenea"
                    "VALUES("
                    "'"+ui->lineEdit_1Nombre->text()+"',"
                    "'"+ui->lineEdit_2Apellido->text()+"',"
                    "'"+ui->lineEdit_3FechaDeNacimiento->text()+"',"
                    "'"+ui->lineEdit_4Sexo->text()+"',"
                    "'"+ui->lineEdit_5EstadoCivil->text()+"',"
                    "'"+ui->lineEdit_6NumeroDeCedula->text()+"',"
                    "'"+ui->lineEdit_7DirecciondeResidencia->text()+"',"
                    "'"+ui->lineEdit_8TarjetaDeCredito->text()+"',"
                    "'"+ui->lineEdit_9NumeroDeCelular->text()+"',"
                    "'"+ui->lineEdit_10CorreoElectronico->text()+"'"
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
