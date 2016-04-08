/********************************************************************************
** Form generated from reading UI file 'creditosusuarios.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITOSUSUARIOS_H
#define UI_CREDITOSUSUARIOS_H

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

class Ui_creditosUsuarios
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *creditosUsuarios)
    {
        if (creditosUsuarios->objectName().isEmpty())
            creditosUsuarios->setObjectName(QStringLiteral("creditosUsuarios"));
        creditosUsuarios->resize(739, 469);
        buttonBox = new QDialogButtonBox(creditosUsuarios);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(380, 430, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        pushButton = new QPushButton(creditosUsuarios);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(650, 390, 75, 23));
        lineEdit = new QLineEdit(creditosUsuarios);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 20, 331, 31));
        lineEdit_2 = new QLineEdit(creditosUsuarios);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(382, 20, 341, 31));

        retranslateUi(creditosUsuarios);
        QObject::connect(buttonBox, SIGNAL(accepted()), creditosUsuarios, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), creditosUsuarios, SLOT(reject()));

        QMetaObject::connectSlotsByName(creditosUsuarios);
    } // setupUi

    void retranslateUi(QDialog *creditosUsuarios)
    {
        creditosUsuarios->setWindowTitle(QApplication::translate("creditosUsuarios", "Dialog", 0));
        pushButton->setText(QApplication::translate("creditosUsuarios", "PushButton", 0));
        lineEdit->setText(QApplication::translate("creditosUsuarios", "                                                Nombre", 0));
        lineEdit_2->setText(QApplication::translate("creditosUsuarios", "                                                  Apellido", 0));
    } // retranslateUi

};

namespace Ui {
    class creditosUsuarios: public Ui_creditosUsuarios {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITOSUSUARIOS_H
