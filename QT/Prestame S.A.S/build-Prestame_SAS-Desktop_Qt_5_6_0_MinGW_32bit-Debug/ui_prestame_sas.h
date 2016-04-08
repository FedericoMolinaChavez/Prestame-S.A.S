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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Prestame_SAS
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_1IngresarUsuario;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTableView *tableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Prestame_SAS)
    {
        if (Prestame_SAS->objectName().isEmpty())
            Prestame_SAS->setObjectName(QStringLiteral("Prestame_SAS"));
        Prestame_SAS->resize(752, 452);
        centralWidget = new QWidget(Prestame_SAS);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_1IngresarUsuario = new QPushButton(centralWidget);
        pushButton_1IngresarUsuario->setObjectName(QStringLiteral("pushButton_1IngresarUsuario"));
        pushButton_1IngresarUsuario->setGeometry(QRect(20, 0, 131, 41));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(100, 80, 531, 251));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 529, 249));
        tableView = new QTableView(scrollAreaWidgetContents);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(-5, 1, 541, 251));
        scrollArea->setWidget(scrollAreaWidgetContents);
        Prestame_SAS->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Prestame_SAS);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 752, 21));
        Prestame_SAS->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Prestame_SAS);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Prestame_SAS->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Prestame_SAS);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Prestame_SAS->setStatusBar(statusBar);

        retranslateUi(Prestame_SAS);

        QMetaObject::connectSlotsByName(Prestame_SAS);
    } // setupUi

    void retranslateUi(QMainWindow *Prestame_SAS)
    {
        Prestame_SAS->setWindowTitle(QApplication::translate("Prestame_SAS", "Prestame_SAS", 0));
        pushButton_1IngresarUsuario->setText(QApplication::translate("Prestame_SAS", "Ingresar Usuario", 0));
    } // retranslateUi

};

namespace Ui {
    class Prestame_SAS: public Ui_Prestame_SAS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESTAME_SAS_H
