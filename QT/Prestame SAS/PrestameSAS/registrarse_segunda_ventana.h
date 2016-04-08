#ifndef REGISTRARSE_SEGUNDA_VENTANA_H
#define REGISTRARSE_SEGUNDA_VENTANA_H

#include <QDialog>
#include <QtSql/QSqlDatabase>//(Libreria)base de datos.
#include<QtSql/QSqlQuery> //(Libreria)consultas y requerimientos para la base de datos.
#include<QtSql/QSqlError>//(Libreria) conocer los errores de dichas consultas y requerimientos.


namespace Ui {
class registrarse_Segunda_Ventana;
}

class registrarse_Segunda_Ventana : public QDialog
{
    Q_OBJECT

public:
    explicit registrarse_Segunda_Ventana(QWidget *parent = 0);
    ~registrarse_Segunda_Ventana();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_3Anterior_clicked();

private:
    Ui::registrarse_Segunda_Ventana *ui;
};

#endif // REGISTRARSE_SEGUNDA_VENTANA_H
