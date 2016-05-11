#ifndef REGISTRARSE_H
#define REGISTRARSE_H

#include <QDialog>
#include <QXmlStreamWriter>
#include <QXmlStreamReader>
#include <QTextStream>
#include <QFile>

#include <QtSql/QSqlDatabase>//(Libreria)base de datos.
#include<QtSql/QSqlQuery> //(Libreria)consultas y requerimientos para la base de datos.
#include<QtSql/QSqlError>//(Libreria) conocer los errores de dichas consultas y requerimientos.
#include <QDebug>

namespace Ui {
class registrarse;
}

class registrarse : public QDialog
{
    Q_OBJECT

public:
    explicit registrarse(QWidget *parent = 0);
    void crearTablaUsuarioRegistro();
    ~registrarse();

private slots:
    void on_pushButton_1Siguiente_clicked();

private:
    Ui::registrarse *ui;
     QSqlDatabase db;//variable Base de Datos.
};

#endif // REGISTRARSE_H
