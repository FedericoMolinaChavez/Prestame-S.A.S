/********************************************************************************
** Form generated from reading UI file 'prestame_sas.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRESTAME_SAS_H
#define UI_PRESTAME_SAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_prestame_SAS
{
public:
    QAction *actionIniniciarSesion;
    QAction *actionRegistrarse;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuUsuario;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *prestame_SAS)
    {
        if (prestame_SAS->objectName().isEmpty())
            prestame_SAS->setObjectName(QStringLiteral("prestame_SAS"));
        prestame_SAS->resize(738, 472);
        QIcon icon;
        icon.addFile(QStringLiteral("../Iconos/Diamante Simbolo Prestame SAS.png"), QSize(), QIcon::Normal, QIcon::Off);
        prestame_SAS->setWindowIcon(icon);
        actionIniniciarSesion = new QAction(prestame_SAS);
        actionIniniciarSesion->setObjectName(QStringLiteral("actionIniniciarSesion"));
        actionRegistrarse = new QAction(prestame_SAS);
        actionRegistrarse->setObjectName(QStringLiteral("actionRegistrarse"));
        centralWidget = new QWidget(prestame_SAS);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        prestame_SAS->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(prestame_SAS);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 738, 21));
        menuUsuario = new QMenu(menuBar);
        menuUsuario->setObjectName(QStringLiteral("menuUsuario"));
        prestame_SAS->setMenuBar(menuBar);
        mainToolBar = new QToolBar(prestame_SAS);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        prestame_SAS->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(prestame_SAS);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        prestame_SAS->setStatusBar(statusBar);

        menuBar->addAction(menuUsuario->menuAction());
        menuUsuario->addAction(actionIniniciarSesion);
        menuUsuario->addAction(actionRegistrarse);

        retranslateUi(prestame_SAS);

        QMetaObject::connectSlotsByName(prestame_SAS);
    } // setupUi

    void retranslateUi(QMainWindow *prestame_SAS)
    {
        prestame_SAS->setWindowTitle(QApplication::translate("prestame_SAS", "Prestame S.A.S", 0));
        actionIniniciarSesion->setText(QApplication::translate("prestame_SAS", "Iniciar Sesion", 0));
        actionRegistrarse->setText(QApplication::translate("prestame_SAS", "Registrarse", 0));
        menuUsuario->setTitle(QApplication::translate("prestame_SAS", "Usuario", 0));
    } // retranslateUi

};

namespace Ui {
    class prestame_SAS: public Ui_prestame_SAS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESTAME_SAS_H
