#ifndef REGISTRARSESEGUNDAVENTANA_H
#define REGISTRARSESEGUNDAVENTANA_H

#include <QDialog>
#include <QtXml/QDomDocument>
#include <QtXml/QDomElement>
namespace Ui {
class registrarseSegundaVentana;
}

class registrarseSegundaVentana : public QDialog
{
    Q_OBJECT

public:
    explicit registrarseSegundaVentana(QWidget *parent = 0);
    ~registrarseSegundaVentana();

private slots:
    void on_pushButton_3Anterior_clicked();

    void on_pushButton_clicked();

    void on_pushButtonFinalizar_clicked();

    void on_pushButton_1Finalizar_clicked();

private:
    Ui::registrarseSegundaVentana *ui;
    QDomDocument *archivoTemporal;
};

#endif // REGISTRARSESEGUNDAVENTANA_H
