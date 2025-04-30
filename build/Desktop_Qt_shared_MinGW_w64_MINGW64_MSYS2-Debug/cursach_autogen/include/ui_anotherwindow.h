/********************************************************************************
** Form generated from reading UI file 'anotherwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANOTHERWINDOW_H
#define UI_ANOTHERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_anotherWindow
{
public:
    QLabel *label;

    void setupUi(QWidget *anotherWindow)
    {
        if (anotherWindow->objectName().isEmpty())
            anotherWindow->setObjectName("anotherWindow");
        anotherWindow->resize(400, 300);
        label = new QLabel(anotherWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 30, 37, 12));

        retranslateUi(anotherWindow);

        QMetaObject::connectSlotsByName(anotherWindow);
    } // setupUi

    void retranslateUi(QWidget *anotherWindow)
    {
        anotherWindow->setWindowTitle(QCoreApplication::translate("anotherWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("anotherWindow", "Ququ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class anotherWindow: public Ui_anotherWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANOTHERWINDOW_H
