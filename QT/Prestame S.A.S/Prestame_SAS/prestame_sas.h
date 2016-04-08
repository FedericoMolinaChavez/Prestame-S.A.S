#ifndef PRESTAME_SAS_H
#define PRESTAME_SAS_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>//(Libreria)base de datos.
#include<QtSql/QSqlQuery> //(Libreria)consultas y requerimientos para la base de datos.
#include<QtSql/QSqlError>//(Libreria) conocer los errores de dichas consultas y requerimientos.


namespace Ui {
class Prestame_SAS;
}

class Prestame_SAS : public QMainWindow
{
    Q_OBJECT

public:
    explicit Prestame_SAS(QWidget *parent = 0);
    ~Prestame_SAS();

private slots:
    void on_pushButton_1IngresarUsuario_clicked();

private:
    Ui::Prestame_SAS *ui;
};

#endif // PRESTAME_SAS_H
