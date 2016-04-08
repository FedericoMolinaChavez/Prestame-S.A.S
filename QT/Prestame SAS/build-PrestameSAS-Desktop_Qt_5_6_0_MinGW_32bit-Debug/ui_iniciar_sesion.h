/********************************************************************************
** Form generated from reading UI file 'iniciar_sesion.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INICIAR_SESION_H
#define UI_INICIAR_SESION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_iniciar_Sesion
{
public:
    QPushButton *pushButton_1Acceder;
    QPushButton *pushButton_2Cancelar;
    QLineEdit *lineEdit_1Nombre;
    QFrame *line_1;
    QLineEdit *lineEdit_2Contrasenea;
    QFrame *line_2;
    QLabel *label_1Nombre;
    QLabel *label_2Contrasenea;

    void setupUi(QDialog *iniciar_Sesion)
    {
        if (iniciar_Sesion->objectName().isEmpty())
            iniciar_Sesion->setObjectName(QStringLiteral("iniciar_Sesion"));
        iniciar_Sesion->resize(360, 200);
        QIcon icon;
        icon.addFile(QStringLiteral("../Iconos/people.png"), QSize(), QIcon::Normal, QIcon::Off);
        iniciar_Sesion->setWindowIcon(icon);
        pushButton_1Acceder = new QPushButton(iniciar_Sesion);
        pushButton_1Acceder->setObjectName(QStringLiteral("pushButton_1Acceder"));
        pushButton_1Acceder->setGeometry(QRect(170, 170, 81, 31));
        pushButton_2Cancelar = new QPushButton(iniciar_Sesion);
        pushButton_2Cancelar->setObjectName(QStringLiteral("pushButton_2Cancelar"));
        pushButton_2Cancelar->setGeometry(QRect(270, 170, 81, 31));
        lineEdit_1Nombre = new QLineEdit(iniciar_Sesion);
        lineEdit_1Nombre->setObjectName(QStringLiteral("lineEdit_1Nombre"));
        lineEdit_1Nombre->setGeometry(QRect(10, 50, 341, 21));
        lineEdit_1Nombre->setEchoMode(QLineEdit::Normal);
        line_1 = new QFrame(iniciar_Sesion);
        line_1->setObjectName(QStringLiteral("line_1"));
        line_1->setGeometry(QRect(10, 30, 241, 16));
        line_1->setFrameShape(QFrame::HLine);
        line_1->setFrameShadow(QFrame::Sunken);
        lineEdit_2Contrasenea = new QLineEdit(iniciar_Sesion);
        lineEdit_2Contrasenea->setObjectName(QStringLiteral("lineEdit_2Contrasenea"));
        lineEdit_2Contrasenea->setGeometry(QRect(10, 140, 341, 20));
        lineEdit_2Contrasenea->setEchoMode(QLineEdit::Password);
        line_2 = new QFrame(iniciar_Sesion);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 110, 231, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_1Nombre = new QLabel(iniciar_Sesion);
        label_1Nombre->setObjectName(QStringLiteral("label_1Nombre"));
        label_1Nombre->setGeometry(QRect(10, 10, 71, 21));
        QFont font;
        font.setPointSize(12);
        label_1Nombre->setFont(font);
        label_2Contrasenea = new QLabel(iniciar_Sesion);
        label_2Contrasenea->setObjectName(QStringLiteral("label_2Contrasenea"));
        label_2Contrasenea->setGeometry(QRect(10, 90, 101, 21));
        label_2Contrasenea->setFont(font);

        retranslateUi(iniciar_Sesion);
        QObject::connect(pushButton_2Cancelar, SIGNAL(clicked()), iniciar_Sesion, SLOT(close()));

        QMetaObject::connectSlotsByName(iniciar_Sesion);
    } // setupUi

    void retranslateUi(QDialog *iniciar_Sesion)
    {
        iniciar_Sesion->setWindowTitle(QApplication::translate("iniciar_Sesion", "Iniciar Sesion", 0));
        pushButton_1Acceder->setText(QApplication::translate("iniciar_Sesion", "Acceder", 0));
        pushButton_2Cancelar->setText(QApplication::translate("iniciar_Sesion", "Cancelar", 0));
        lineEdit_1Nombre->setText(QString());
        label_1Nombre->setText(QApplication::translate("iniciar_Sesion", "Usuario", 0));
        label_2Contrasenea->setText(QApplication::translate("iniciar_Sesion", "Contrase\303\261a", 0));
    } // retranslateUi

};

namespace Ui {
    class iniciar_Sesion: public Ui_iniciar_Sesion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INICIAR_SESION_H
