#ifndef INICIARSESION_H
#define INICIARSESION_H

#include <QDialog>

namespace Ui {
class iniciarSesion;
}

class iniciarSesion : public QDialog
{
    Q_OBJECT

public:
    explicit iniciarSesion(QWidget *parent = 0);
    ~iniciarSesion();

private:
    Ui::iniciarSesion *ui;
};

#endif // INICIARSESION_H
