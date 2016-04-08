#ifndef INICIAR_SESION_H
#define INICIAR_SESION_H

#include <QDialog>

namespace Ui {
class iniciar_Sesion;
}

class iniciar_Sesion : public QDialog
{
    Q_OBJECT

public:
    explicit iniciar_Sesion(QWidget *parent = 0);
    ~iniciar_Sesion();

private slots:
    void on_pushButton_1Acceder_clicked();

    void on_pushButton_2Cancelar_clicked();

private:
    Ui::iniciar_Sesion *ui;
};

#endif // INICIAR_SESION_H
