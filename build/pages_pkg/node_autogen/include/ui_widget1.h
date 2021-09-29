/********************************************************************************
** Form generated from reading UI file 'widget1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET1_H
#define UI_WIDGET1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget1
{
public:
    QToolBox *toolBox;
    QWidget *page;
    QPushButton *pushButton;
    QWidget *page_2;

    void setupUi(QWidget *Widget1)
    {
        if (Widget1->objectName().isEmpty())
            Widget1->setObjectName(QString::fromUtf8("Widget1"));
        Widget1->resize(1017, 591);
        toolBox = new QToolBox(Widget1);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(0, 0, 1017, 592));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 1017, 530));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 20, 89, 25));
        toolBox->addItem(page, QString::fromUtf8("Page 1"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 1017, 530));
        toolBox->addItem(page_2, QString::fromUtf8("Page 2"));

        retranslateUi(Widget1);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget1);
    } // setupUi

    void retranslateUi(QWidget *Widget1)
    {
        Widget1->setWindowTitle(QApplication::translate("Widget1", "Form", nullptr));
        pushButton->setText(QApplication::translate("Widget1", "PushButton", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("Widget1", "Page 1", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("Widget1", "Page 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget1: public Ui_Widget1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET1_H
