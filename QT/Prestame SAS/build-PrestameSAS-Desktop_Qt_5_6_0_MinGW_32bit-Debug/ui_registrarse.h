/********************************************************************************
** Form generated from reading UI file 'registrarse.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRARSE_H
#define UI_REGISTRARSE_H

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

class Ui_registrarse
{
public:
    QLabel *label_1Nombre;
    QLabel *label_2Apellido;
    QLabel *label_3FechaDeNacimiento;
    QLabel *label_4Sexo;
    QLabel *label_5EstadoCivil;
    QLabel *label_6NumeroDeCedula;
    QLabel *label_7DireccionDeResidencia;
    QLabel *label_8TarjetaDeCredito;
    QLabel *label_9NumeroDeCelular;
    QLabel *label_10CorreoElectronico;
    QLineEdit *lineEdit_2Apellido;
    QLineEdit *lineEdit_3FechaDeNacimiento;
    QLineEdit *lineEdit_4Sexo;
    QLineEdit *lineEdit_5EstadoCivil;
    QLineEdit *lineEdit_6NumeroDeCedula;
    QLineEdit *lineEdit_7DirecciondeResidencia;
    QLineEdit *lineEdit_8TarjetaDeCredito;
    QLineEdit *lineEdit_9NumeroDeCelular;
    QLineEdit *lineEdit_10CorreoElectronico;
    QPushButton *pushButton_1Siguiente;
    QPushButton *pushButton_2Cancelar;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QFrame *line_9;
    QFrame *line_10;
    QFrame *line_11;
    QFrame *line_12;
    QFrame *line_15;
    QFrame *line_16;
    QFrame *line_17;
    QFrame *line_18;
    QLineEdit *lineEdit_1Nombre;

    void setupUi(QDialog *registrarse)
    {
        if (registrarse->objectName().isEmpty())
            registrarse->setObjectName(QStringLiteral("registrarse"));
        registrarse->resize(743, 483);
        QIcon icon;
        icon.addFile(QStringLiteral("../Iconos/Registrarse.png"), QSize(), QIcon::Normal, QIcon::Off);
        registrarse->setWindowIcon(icon);
        label_1Nombre = new QLabel(registrarse);
        label_1Nombre->setObjectName(QStringLiteral("label_1Nombre"));
        label_1Nombre->setGeometry(QRect(20, 10, 61, 21));
        QFont font;
        font.setPointSize(12);
        label_1Nombre->setFont(font);
        label_2Apellido = new QLabel(registrarse);
        label_2Apellido->setObjectName(QStringLiteral("label_2Apellido"));
        label_2Apellido->setGeometry(QRect(350, 10, 61, 21));
        label_2Apellido->setFont(font);
        label_3FechaDeNacimiento = new QLabel(registrarse);
        label_3FechaDeNacimiento->setObjectName(QStringLiteral("label_3FechaDeNacimiento"));
        label_3FechaDeNacimiento->setGeometry(QRect(20, 70, 151, 21));
        label_3FechaDeNacimiento->setFont(font);
        label_4Sexo = new QLabel(registrarse);
        label_4Sexo->setObjectName(QStringLiteral("label_4Sexo"));
        label_4Sexo->setGeometry(QRect(350, 70, 151, 21));
        label_4Sexo->setFont(font);
        label_5EstadoCivil = new QLabel(registrarse);
        label_5EstadoCivil->setObjectName(QStringLiteral("label_5EstadoCivil"));
        label_5EstadoCivil->setGeometry(QRect(20, 140, 151, 21));
        label_5EstadoCivil->setFont(font);
        label_6NumeroDeCedula = new QLabel(registrarse);
        label_6NumeroDeCedula->setObjectName(QStringLiteral("label_6NumeroDeCedula"));
        label_6NumeroDeCedula->setGeometry(QRect(350, 140, 151, 21));
        label_6NumeroDeCedula->setFont(font);
        label_7DireccionDeResidencia = new QLabel(registrarse);
        label_7DireccionDeResidencia->setObjectName(QStringLiteral("label_7DireccionDeResidencia"));
        label_7DireccionDeResidencia->setGeometry(QRect(20, 200, 181, 21));
        label_7DireccionDeResidencia->setFont(font);
        label_8TarjetaDeCredito = new QLabel(registrarse);
        label_8TarjetaDeCredito->setObjectName(QStringLiteral("label_8TarjetaDeCredito"));
        label_8TarjetaDeCredito->setGeometry(QRect(350, 200, 231, 21));
        label_8TarjetaDeCredito->setFont(font);
        label_9NumeroDeCelular = new QLabel(registrarse);
        label_9NumeroDeCelular->setObjectName(QStringLiteral("label_9NumeroDeCelular"));
        label_9NumeroDeCelular->setGeometry(QRect(20, 340, 231, 21));
        label_9NumeroDeCelular->setFont(font);
        label_10CorreoElectronico = new QLabel(registrarse);
        label_10CorreoElectronico->setObjectName(QStringLiteral("label_10CorreoElectronico"));
        label_10CorreoElectronico->setGeometry(QRect(360, 340, 231, 21));
        label_10CorreoElectronico->setFont(font);
        lineEdit_2Apellido = new QLineEdit(registrarse);
        lineEdit_2Apellido->setObjectName(QStringLiteral("lineEdit_2Apellido"));
        lineEdit_2Apellido->setGeometry(QRect(350, 40, 331, 20));
        lineEdit_3FechaDeNacimiento = new QLineEdit(registrarse);
        lineEdit_3FechaDeNacimiento->setObjectName(QStringLiteral("lineEdit_3FechaDeNacimiento"));
        lineEdit_3FechaDeNacimiento->setGeometry(QRect(20, 100, 321, 20));
        lineEdit_4Sexo = new QLineEdit(registrarse);
        lineEdit_4Sexo->setObjectName(QStringLiteral("lineEdit_4Sexo"));
        lineEdit_4Sexo->setGeometry(QRect(350, 100, 331, 20));
        lineEdit_5EstadoCivil = new QLineEdit(registrarse);
        lineEdit_5EstadoCivil->setObjectName(QStringLiteral("lineEdit_5EstadoCivil"));
        lineEdit_5EstadoCivil->setGeometry(QRect(20, 170, 321, 20));
        lineEdit_6NumeroDeCedula = new QLineEdit(registrarse);
        lineEdit_6NumeroDeCedula->setObjectName(QStringLiteral("lineEdit_6NumeroDeCedula"));
        lineEdit_6NumeroDeCedula->setGeometry(QRect(350, 170, 331, 20));
        lineEdit_7DirecciondeResidencia = new QLineEdit(registrarse);
        lineEdit_7DirecciondeResidencia->setObjectName(QStringLiteral("lineEdit_7DirecciondeResidencia"));
        lineEdit_7DirecciondeResidencia->setGeometry(QRect(20, 230, 321, 20));
        lineEdit_8TarjetaDeCredito = new QLineEdit(registrarse);
        lineEdit_8TarjetaDeCredito->setObjectName(QStringLiteral("lineEdit_8TarjetaDeCredito"));
        lineEdit_8TarjetaDeCredito->setGeometry(QRect(350, 230, 331, 20));
        lineEdit_9NumeroDeCelular = new QLineEdit(registrarse);
        lineEdit_9NumeroDeCelular->setObjectName(QStringLiteral("lineEdit_9NumeroDeCelular"));
        lineEdit_9NumeroDeCelular->setGeometry(QRect(20, 370, 331, 20));
        lineEdit_10CorreoElectronico = new QLineEdit(registrarse);
        lineEdit_10CorreoElectronico->setObjectName(QStringLiteral("lineEdit_10CorreoElectronico"));
        lineEdit_10CorreoElectronico->setGeometry(QRect(360, 370, 321, 20));
        pushButton_1Siguiente = new QPushButton(registrarse);
        pushButton_1Siguiente->setObjectName(QStringLiteral("pushButton_1Siguiente"));
        pushButton_1Siguiente->setGeometry(QRect(490, 450, 91, 31));
        pushButton_2Cancelar = new QPushButton(registrarse);
        pushButton_2Cancelar->setObjectName(QStringLiteral("pushButton_2Cancelar"));
        pushButton_2Cancelar->setGeometry(QRect(590, 450, 91, 31));
        line = new QFrame(registrarse);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 30, 118, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(registrarse);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(350, 30, 118, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(registrarse);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(20, 90, 118, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(registrarse);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(80, 90, 118, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(registrarse);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(350, 90, 118, 3));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(registrarse);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(20, 160, 118, 3));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(registrarse);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(350, 160, 118, 3));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(registrarse);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(400, 160, 118, 3));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(registrarse);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(20, 220, 118, 3));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        line_10 = new QFrame(registrarse);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setGeometry(QRect(100, 220, 118, 3));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        line_11 = new QFrame(registrarse);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setGeometry(QRect(350, 220, 118, 3));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        line_12 = new QFrame(registrarse);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setGeometry(QRect(450, 220, 118, 3));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);
        line_15 = new QFrame(registrarse);
        line_15->setObjectName(QStringLiteral("line_15"));
        line_15->setGeometry(QRect(20, 360, 118, 3));
        line_15->setFrameShape(QFrame::HLine);
        line_15->setFrameShadow(QFrame::Sunken);
        line_16 = new QFrame(registrarse);
        line_16->setObjectName(QStringLiteral("line_16"));
        line_16->setGeometry(QRect(70, 360, 118, 3));
        line_16->setFrameShape(QFrame::HLine);
        line_16->setFrameShadow(QFrame::Sunken);
        line_17 = new QFrame(registrarse);
        line_17->setObjectName(QStringLiteral("line_17"));
        line_17->setGeometry(QRect(360, 360, 118, 3));
        line_17->setFrameShape(QFrame::HLine);
        line_17->setFrameShadow(QFrame::Sunken);
        line_18 = new QFrame(registrarse);
        line_18->setObjectName(QStringLiteral("line_18"));
        line_18->setGeometry(QRect(400, 360, 118, 3));
        line_18->setFrameShape(QFrame::HLine);
        line_18->setFrameShadow(QFrame::Sunken);
        lineEdit_1Nombre = new QLineEdit(registrarse);
        lineEdit_1Nombre->setObjectName(QStringLiteral("lineEdit_1Nombre"));
        lineEdit_1Nombre->setGeometry(QRect(20, 40, 311, 20));
        QWidget::setTabOrder(lineEdit_1Nombre, lineEdit_2Apellido);
        QWidget::setTabOrder(lineEdit_2Apellido, lineEdit_3FechaDeNacimiento);
        QWidget::setTabOrder(lineEdit_3FechaDeNacimiento, lineEdit_4Sexo);
        QWidget::setTabOrder(lineEdit_4Sexo, lineEdit_5EstadoCivil);
        QWidget::setTabOrder(lineEdit_5EstadoCivil, lineEdit_6NumeroDeCedula);
        QWidget::setTabOrder(lineEdit_6NumeroDeCedula, lineEdit_7DirecciondeResidencia);
        QWidget::setTabOrder(lineEdit_7DirecciondeResidencia, lineEdit_8TarjetaDeCredito);
        QWidget::setTabOrder(lineEdit_8TarjetaDeCredito, lineEdit_9NumeroDeCelular);
        QWidget::setTabOrder(lineEdit_9NumeroDeCelular, lineEdit_10CorreoElectronico);
        QWidget::setTabOrder(lineEdit_10CorreoElectronico, pushButton_1Siguiente);
        QWidget::setTabOrder(pushButton_1Siguiente, pushButton_2Cancelar);

        retranslateUi(registrarse);
        QObject::connect(pushButton_2Cancelar, SIGNAL(clicked()), registrarse, SLOT(close()));
        QObject::connect(pushButton_1Siguiente, SIGNAL(clicked()), registrarse, SLOT(hide()));

        QMetaObject::connectSlotsByName(registrarse);
    } // setupUi

    void retranslateUi(QDialog *registrarse)
    {
        registrarse->setWindowTitle(QApplication::translate("registrarse", "Registro", 0));
        label_1Nombre->setText(QApplication::translate("registrarse", "Nombre", 0));
        label_2Apellido->setText(QApplication::translate("registrarse", "Apellido", 0));
        label_3FechaDeNacimiento->setText(QApplication::translate("registrarse", "Fecha de Nacimiento", 0));
        label_4Sexo->setText(QApplication::translate("registrarse", "Sexo", 0));
        label_5EstadoCivil->setText(QApplication::translate("registrarse", "Estado Civil", 0));
        label_6NumeroDeCedula->setText(QApplication::translate("registrarse", "Numero de Cedula", 0));
        label_7DireccionDeResidencia->setText(QApplication::translate("registrarse", "Direccion de Residencia", 0));
        label_8TarjetaDeCredito->setText(QApplication::translate("registrarse", "Tarjeta de Credito (Opcional)", 0));
        label_9NumeroDeCelular->setText(QApplication::translate("registrarse", "Numero de Celular", 0));
        label_10CorreoElectronico->setText(QApplication::translate("registrarse", "Correo Electronico", 0));
        pushButton_1Siguiente->setText(QApplication::translate("registrarse", "Siguente", 0));
        pushButton_2Cancelar->setText(QApplication::translate("registrarse", "Cancelar", 0));
    } // retranslateUi

};

namespace Ui {
    class registrarse: public Ui_registrarse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRARSE_H
