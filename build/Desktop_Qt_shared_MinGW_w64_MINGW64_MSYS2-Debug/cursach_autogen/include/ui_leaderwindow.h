/********************************************************************************
** Form generated from reading UI file 'leaderwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEADERWINDOW_H
#define UI_LEADERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_LeaderWindow
{
public:
    QLabel *label_check;

    void setupUi(QDialog *LeaderWindow)
    {
        if (LeaderWindow->objectName().isEmpty())
            LeaderWindow->setObjectName("LeaderWindow");
        LeaderWindow->resize(400, 300);
        label_check = new QLabel(LeaderWindow);
        label_check->setObjectName("label_check");
        label_check->setGeometry(QRect(80, 50, 151, 24));
        QFont font;
        font.setPointSize(18);
        label_check->setFont(font);
        label_check->setAlignment(Qt::AlignCenter);

        retranslateUi(LeaderWindow);

        QMetaObject::connectSlotsByName(LeaderWindow);
    } // setupUi

    void retranslateUi(QDialog *LeaderWindow)
    {
        LeaderWindow->setWindowTitle(QCoreApplication::translate("LeaderWindow", "Dialog", nullptr));
        label_check->setText(QCoreApplication::translate("LeaderWindow", "\320\247\320\265\320\272 \320\273\320\265\320\271\320\261\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LeaderWindow: public Ui_LeaderWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEADERWINDOW_H
