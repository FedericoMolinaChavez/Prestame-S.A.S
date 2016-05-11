#ifndef PRESTAMESAS_H
#define PRESTAMESAS_H

#include <QMainWindow>

namespace Ui {
class PrestameSAS;
}

class PrestameSAS : public QMainWindow
{
    Q_OBJECT

public:
    explicit PrestameSAS(QWidget *parent = 0);
    ~PrestameSAS();

private slots:
    void on_actionRegistrarse_triggered();

    void on_actionIniciar_Sesion_triggered();

private:
    Ui::PrestameSAS *ui;
};

#endif // PRESTAMESAS_H
