#include "prestame_sas.h"
#include <iniciar_sesion.h>
#include <registrarse.h>
#include <registrarse_segunda_ventana.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    prestame_SAS w;
    w.show();

    return a.exec();
}
