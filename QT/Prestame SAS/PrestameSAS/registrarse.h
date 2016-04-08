#ifndef REGISTRARSE_H
#define REGISTRARSE_H

#include <QDialog>
#include <registrarse_segunda_ventana.h>
#include <QtSql/QSqlDatabase>//(Libreria)base de datos.
#include<QtSql/QSqlQuery> //(Libreria)consultas y requerimientos para la base de datos.
#include<QtSql/QSqlError>//(Libreria) conocer los errores de dichas consultas y requerimientos.


namespace Ui {
class registrarse;
}

class registrarse : public QDialog
{
    Q_OBJECT

public:
    explicit registrarse(QWidget *parent = 0);
    ~registrarse();
    void crearTablaUsuarioRegistro();

    void insertarTablaUsuarioRegistro();

private slots:
    void on_pushButton_1Siguiente_clicked();

    void on_pushButton_2Cancelar_clicked();

    void on_lineEdit_1Nombre_selectionChanged();

private:
    Ui::registrarse *ui;
    QSqlDatabase db;//variable Base de Datos.
};

#endif // REGISTRARSE_H
