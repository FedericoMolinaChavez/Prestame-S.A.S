#ifndef CREDITOSUSUARIOS_H
#define CREDITOSUSUARIOS_H

#include <QDialog>
#include <QtSql/QSqlDatabase>//(Libreria)base de datos.
#include<QtSql/QSqlQuery> //(Libreria)consultas y requerimientos para la base de datos.
#include<QtSql/QSqlError>//(Libreria) conocer los errores de dichas consultas y requerimientos.

namespace Ui {
class creditosUsuarios;
}

class creditosUsuarios : public QDialog
{
    Q_OBJECT

public:
    explicit creditosUsuarios(QWidget *parent = 0);
    ~creditosUsuarios();
    void crearTablaUsuarioCredito();

    void insertarTablaUsuarioCredito();


private:
    Ui::creditosUsuarios *ui;
    QSqlDatabase db;//variable Base de Datos.
};

#endif // CREDITOSUSUARIOS_H
