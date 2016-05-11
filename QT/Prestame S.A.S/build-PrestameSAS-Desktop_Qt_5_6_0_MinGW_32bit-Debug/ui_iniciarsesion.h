/********************************************************************************
** Form generated from reading UI file 'iniciarsesion.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INICIARSESION_H
#define UI_INICIARSESION_H

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

class Ui_iniciarSesion
{
public:
    QLineEdit *lineEdit_1Nombre;
    QLineEdit *lineEdit_2Contrasenea;
    QPushButton *pushButton_2Cancelar;
    QLabel *label_2Contrasenea;
    QFrame *line_1;
    QFrame *line_2;
    QLabel *label_1Nombre;
    QPushButton *pushButton_1Acceder;

    void setupUi(QDialog *iniciarSesion)
    {
        if (iniciarSesion->objectName().isEmpty())
            iniciarSesion->setObjectName(QStringLiteral("iniciarSesion"));
        iniciarSesion->resize(373, 188);
        QIcon icon;
        icon.addFile(QStringLiteral("../Iconos/Iniciar Sesion.png"), QSize(), QIcon::Normal, QIcon::Off);
        iniciarSesion->setWindowIcon(icon);
        lineEdit_1Nombre = new QLineEdit(iniciarSesion);
        lineEdit_1Nombre->setObjectName(QStringLiteral("lineEdit_1Nombre"));
        lineEdit_1Nombre->setGeometry(QRect(10, 40, 341, 21));
        lineEdit_1Nombre->setEchoMode(QLineEdit::Normal);
        lineEdit_2Contrasenea = new QLineEdit(iniciarSesion);
        lineEdit_2Contrasenea->setObjectName(QStringLiteral("lineEdit_2Contrasenea"));
        lineEdit_2Contrasenea->setGeometry(QRect(10, 130, 341, 20));
        lineEdit_2Contrasenea->setEchoMode(QLineEdit::Password);
        pushButton_2Cancelar = new QPushButton(iniciarSesion);
        pushButton_2Cancelar->setObjectName(QStringLiteral("pushButton_2Cancelar"));
        pushButton_2Cancelar->setGeometry(QRect(270, 160, 81, 31));
        pushButton_2Cancelar->setCursor(QCursor(Qt::PointingHandCursor));
        label_2Contrasenea = new QLabel(iniciarSesion);
        label_2Contrasenea->setObjectName(QStringLiteral("label_2Contrasenea"));
        label_2Contrasenea->setGeometry(QRect(10, 80, 101, 21));
        QFont font;
        font.setPointSize(12);
        label_2Contrasenea->setFont(font);
        line_1 = new QFrame(iniciarSesion);
        line_1->setObjectName(QStringLiteral("line_1"));
        line_1->setGeometry(QRect(10, 20, 241, 16));
        line_1->setFrameShape(QFrame::HLine);
        line_1->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(iniciarSesion);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 100, 231, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_1Nombre = new QLabel(iniciarSesion);
        label_1Nombre->setObjectName(QStringLiteral("label_1Nombre"));
        label_1Nombre->setGeometry(QRect(10, 0, 71, 21));
        label_1Nombre->setFont(font);
        pushButton_1Acceder = new QPushButton(iniciarSesion);
        pushButton_1Acceder->setObjectName(QStringLiteral("pushButton_1Acceder"));
        pushButton_1Acceder->setGeometry(QRect(170, 160, 81, 31));
        pushButton_1Acceder->setCursor(QCursor(Qt::PointingHandCursor));
        QWidget::setTabOrder(lineEdit_1Nombre, lineEdit_2Contrasenea);
        QWidget::setTabOrder(lineEdit_2Contrasenea, pushButton_1Acceder);
        QWidget::setTabOrder(pushButton_1Acceder, pushButton_2Cancelar);

        retranslateUi(iniciarSesion);
        QObject::connect(pushButton_2Cancelar, SIGNAL(clicked()), iniciarSesion, SLOT(close()));

        QMetaObject::connectSlotsByName(iniciarSesion);
    } // setupUi

    void retranslateUi(QDialog *iniciarSesion)
    {
        iniciarSesion->setWindowTitle(QApplication::translate("iniciarSesion", "Iniciar Sesion", 0));
        lineEdit_1Nombre->setText(QString());
        pushButton_2Cancelar->setText(QApplication::translate("iniciarSesion", "Cancelar", 0));
        label_2Contrasenea->setText(QApplication::translate("iniciarSesion", "Contrase\303\261a", 0));
        label_1Nombre->setText(QApplication::translate("iniciarSesion", "Usuario", 0));
        pushButton_1Acceder->setText(QApplication::translate("iniciarSesion", "Acceder", 0));
    } // retranslateUi

};

namespace Ui {
    class iniciarSesion: public Ui_iniciarSesion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INICIARSESION_H
