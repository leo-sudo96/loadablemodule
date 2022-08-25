/********************************************************************************
** Form generated from reading UI file 'qSlicerloadable_1FooBarWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERLOADABLE_1FOOBARWIDGET_H
#define UI_QSLICERLOADABLE_1FOOBARWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkPushButton.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerloadable_1FooBarWidget
{
public:
    QVBoxLayout *verticalLayout;
    ctkPushButton *PushButton;

    void setupUi(QWidget *qSlicerloadable_1FooBarWidget)
    {
        if (qSlicerloadable_1FooBarWidget->objectName().isEmpty())
            qSlicerloadable_1FooBarWidget->setObjectName(QString::fromUtf8("qSlicerloadable_1FooBarWidget"));
        qSlicerloadable_1FooBarWidget->resize(664, 372);
        verticalLayout = new QVBoxLayout(qSlicerloadable_1FooBarWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        PushButton = new ctkPushButton(qSlicerloadable_1FooBarWidget);
        PushButton->setObjectName(QString::fromUtf8("PushButton"));

        verticalLayout->addWidget(PushButton);


        retranslateUi(qSlicerloadable_1FooBarWidget);
        QObject::connect(PushButton, SIGNAL(clicked()), PushButton, SLOT(voxel_tracking()));

        QMetaObject::connectSlotsByName(qSlicerloadable_1FooBarWidget);
    } // setupUi

    void retranslateUi(QWidget *qSlicerloadable_1FooBarWidget)
    {
        qSlicerloadable_1FooBarWidget->setWindowTitle(QCoreApplication::translate("qSlicerloadable_1FooBarWidget", "Foo bar", nullptr));
        PushButton->setText(QCoreApplication::translate("qSlicerloadable_1FooBarWidget", "voxel tracking on", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerloadable_1FooBarWidget: public Ui_qSlicerloadable_1FooBarWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERLOADABLE_1FOOBARWIDGET_H
