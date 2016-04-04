#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug()<<"Aplicacion Inicida.";

    QString nombreBaseDeDatos;
    nombreBaseDeDatos.append("baseDeDatos1.sqlite");
    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(nombreBaseDeDatos);
    if(db.open()){
        qDebug()<<"Se ha enlazado la base de datos.";
    }else{
        qDebug()<<"ERROR,no Se ha podido enlazar la base de datos.";
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}
