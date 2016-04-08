/********************************************************************************
** Form generated from reading UI file 'creditousuario.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITOUSUARIO_H
#define UI_CREDITOUSUARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *pushButton_1Inscribir;
    QLineEdit *lineEdit_1Nombre;
    QLineEdit *lineEdit_2Apellido;
    QLineEdit *lineEdit_3FechaDeNacimiento;
    QLineEdit *lineEdit_4Sexo;
    QLineEdit *lineEdit_5EstadoCivil;
    QLineEdit *lineEdit_6NumeroDeCedula;
    QLineEdit *lineEdit_7DireccionDeResidencia;
    QLineEdit *lineEdit_8TarjetaDeCredito;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(746, 479);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(650, 410, 81, 51));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        pushButton_1Inscribir = new QPushButton(Dialog);
        pushButton_1Inscribir->setObjectName(QStringLiteral("pushButton_1Inscribir"));
        pushButton_1Inscribir->setGeometry(QRect(550, 410, 81, 31));
        lineEdit_1Nombre = new QLineEdit(Dialog);
        lineEdit_1Nombre->setObjectName(QStringLiteral("lineEdit_1Nombre"));
        lineEdit_1Nombre->setGeometry(QRect(20, 10, 351, 21));
        lineEdit_2Apellido = new QLineEdit(Dialog);
        lineEdit_2Apellido->setObjectName(QStringLiteral("lineEdit_2Apellido"));
        lineEdit_2Apellido->setGeometry(QRect(380, 10, 351, 21));
        lineEdit_3FechaDeNacimiento = new QLineEdit(Dialog);
        lineEdit_3FechaDeNacimiento->setObjectName(QStringLiteral("lineEdit_3FechaDeNacimiento"));
        lineEdit_3FechaDeNacimiento->setGeometry(QRect(20, 40, 351, 21));
        lineEdit_4Sexo = new QLineEdit(Dialog);
        lineEdit_4Sexo->setObjectName(QStringLiteral("lineEdit_4Sexo"));
        lineEdit_4Sexo->setGeometry(QRect(380, 40, 351, 21));
        lineEdit_5EstadoCivil = new QLineEdit(Dialog);
        lineEdit_5EstadoCivil->setObjectName(QStringLiteral("lineEdit_5EstadoCivil"));
        lineEdit_5EstadoCivil->setGeometry(QRect(20, 70, 351, 21));
        lineEdit_6NumeroDeCedula = new QLineEdit(Dialog);
        lineEdit_6NumeroDeCedula->setObjectName(QStringLiteral("lineEdit_6NumeroDeCedula"));
        lineEdit_6NumeroDeCedula->setGeometry(QRect(380, 70, 351, 21));
        lineEdit_7DireccionDeResidencia = new QLineEdit(Dialog);
        lineEdit_7DireccionDeResidencia->setObjectName(QStringLiteral("lineEdit_7DireccionDeResidencia"));
        lineEdit_7DireccionDeResidencia->setGeometry(QRect(20, 100, 351, 21));
        lineEdit_8TarjetaDeCredito = new QLineEdit(Dialog);
        lineEdit_8TarjetaDeCredito->setObjectName(QStringLiteral("lineEdit_8TarjetaDeCredito"));
        lineEdit_8TarjetaDeCredito->setGeometry(QRect(380, 100, 351, 21));

        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        pushButton_1Inscribir->setText(QApplication::translate("Dialog", "Inscribir", 0));
        lineEdit_1Nombre->setText(QApplication::translate("Dialog", "                                                   Nombre", 0));
        lineEdit_2Apellido->setText(QApplication::translate("Dialog", "                                                    Apellido", 0));
        lineEdit_3FechaDeNacimiento->setText(QApplication::translate("Dialog", "                                            Fecha de Nacimiento", 0));
        lineEdit_4Sexo->setText(QApplication::translate("Dialog", "                                                     Sexo", 0));
        lineEdit_5EstadoCivil->setText(QApplication::translate("Dialog", "                                                Estado Civil", 0));
        lineEdit_6NumeroDeCedula->setText(QApplication::translate("Dialog", "                                           Numero de Cedula", 0));
        lineEdit_7DireccionDeResidencia->setText(QApplication::translate("Dialog", "                                        Direccion de Residencia", 0));
        lineEdit_8TarjetaDeCredito->setText(QApplication::translate("Dialog", "                                            Tarjeta de Credito", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITOUSUARIO_H
