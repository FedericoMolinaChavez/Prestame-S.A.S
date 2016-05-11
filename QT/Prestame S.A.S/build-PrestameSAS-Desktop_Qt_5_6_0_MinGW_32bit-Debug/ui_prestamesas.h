/********************************************************************************
** Form generated from reading UI file 'prestamesas.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRESTAMESAS_H
#define UI_PRESTAMESAS_H

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

class Ui_PrestameSAS
{
public:
    QAction *actionIniciar_Sesion;
    QAction *actionRegistrarse;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuUsuario;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PrestameSAS)
    {
        if (PrestameSAS->objectName().isEmpty())
            PrestameSAS->setObjectName(QStringLiteral("PrestameSAS"));
        PrestameSAS->resize(878, 476);
        QIcon icon;
        icon.addFile(QStringLiteral("../Iconos/Diamante Simbolo Prestame SAS.png"), QSize(), QIcon::Normal, QIcon::Off);
        PrestameSAS->setWindowIcon(icon);
        actionIniciar_Sesion = new QAction(PrestameSAS);
        actionIniciar_Sesion->setObjectName(QStringLiteral("actionIniciar_Sesion"));
        actionRegistrarse = new QAction(PrestameSAS);
        actionRegistrarse->setObjectName(QStringLiteral("actionRegistrarse"));
        centralWidget = new QWidget(PrestameSAS);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        PrestameSAS->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PrestameSAS);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 878, 21));
        menuUsuario = new QMenu(menuBar);
        menuUsuario->setObjectName(QStringLiteral("menuUsuario"));
        PrestameSAS->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PrestameSAS);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PrestameSAS->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PrestameSAS);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PrestameSAS->setStatusBar(statusBar);

        menuBar->addAction(menuUsuario->menuAction());
        menuUsuario->addAction(actionIniciar_Sesion);
        menuUsuario->addAction(actionRegistrarse);

        retranslateUi(PrestameSAS);

        QMetaObject::connectSlotsByName(PrestameSAS);
    } // setupUi

    void retranslateUi(QMainWindow *PrestameSAS)
    {
        PrestameSAS->setWindowTitle(QApplication::translate("PrestameSAS", "Prestame S.A.S", 0));
        actionIniciar_Sesion->setText(QApplication::translate("PrestameSAS", "Iniciar Sesion", 0));
        actionRegistrarse->setText(QApplication::translate("PrestameSAS", "Registrarse", 0));
        menuUsuario->setTitle(QApplication::translate("PrestameSAS", "Usuario", 0));
    } // retranslateUi

};

namespace Ui {
    class PrestameSAS: public Ui_PrestameSAS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESTAMESAS_H
