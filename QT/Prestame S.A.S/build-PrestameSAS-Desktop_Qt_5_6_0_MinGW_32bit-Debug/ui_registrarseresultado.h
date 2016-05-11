/********************************************************************************
** Form generated from reading UI file 'registrarseresultado.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRARSERESULTADO_H
#define UI_REGISTRARSERESULTADO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_registrarseResultado
{
public:
    QPlainTextEdit *plainTextEditResultadoDelRegistro;

    void setupUi(QDialog *registrarseResultado)
    {
        if (registrarseResultado->objectName().isEmpty())
            registrarseResultado->setObjectName(QStringLiteral("registrarseResultado"));
        registrarseResultado->resize(872, 479);
        QIcon icon;
        icon.addFile(QStringLiteral("../Iconos/Registro.png"), QSize(), QIcon::Normal, QIcon::Off);
        registrarseResultado->setWindowIcon(icon);
        plainTextEditResultadoDelRegistro = new QPlainTextEdit(registrarseResultado);
        plainTextEditResultadoDelRegistro->setObjectName(QStringLiteral("plainTextEditResultadoDelRegistro"));
        plainTextEditResultadoDelRegistro->setGeometry(QRect(20, 10, 841, 451));

        retranslateUi(registrarseResultado);

        QMetaObject::connectSlotsByName(registrarseResultado);
    } // setupUi

    void retranslateUi(QDialog *registrarseResultado)
    {
        registrarseResultado->setWindowTitle(QApplication::translate("registrarseResultado", "Registro", 0));
    } // retranslateUi

};

namespace Ui {
    class registrarseResultado: public Ui_registrarseResultado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRARSERESULTADO_H
