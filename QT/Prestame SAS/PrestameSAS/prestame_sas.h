#ifndef PRESTAME_SAS_H
#define PRESTAME_SAS_H

#include <QMainWindow>
#include <iniciar_sesion.h>
#include <registrarse.h>

namespace Ui {
class prestame_SAS;
}

class prestame_SAS : public QMainWindow
{
    Q_OBJECT

public:
    explicit prestame_SAS(QWidget *parent = 0);
    ~prestame_SAS();

private slots:
    void on_actionIniniciarSesion_triggered();

    void on_actionRegistrarse_triggered();

private:
    Ui::prestame_SAS *ui;
};

#endif // PRESTAME_SAS_H
