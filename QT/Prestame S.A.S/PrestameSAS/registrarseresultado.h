#ifndef REGISTRARSERESULTADO_H
#define REGISTRARSERESULTADO_H

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
class registrarseResultado;
}

class registrarseResultado : public QDialog
{
    Q_OBJECT

public:
    explicit registrarseResultado(QWidget *parent = 0);
    ~registrarseResultado();

private:
    Ui::registrarseResultado *ui;
};

#endif // REGISTRARSERESULTADO_H
