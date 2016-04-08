#include "prestame_sas.h"
#include "creditosusuarios.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    creditosUsuarios w;
    Prestame_SAS w;
    w.show();

    return a.exec();
}
