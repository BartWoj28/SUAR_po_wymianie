/********************************************************************************
** Form generated from reading UI file 'dialogconnection.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCONNECTION_H
#define UI_DIALOGCONNECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogConnection
{
public:
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *adres1;
    QLabel *label;
    QSpinBox *adres2;
    QLabel *label_2;
    QSpinBox *adres3;
    QLabel *label_3;
    QSpinBox *adres4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QSpinBox *port;
    QSpacerItem *horizontalSpacer;
    QComboBox *wybor;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogConnection)
    {
        if (DialogConnection->objectName().isEmpty())
            DialogConnection->setObjectName("DialogConnection");
        DialogConnection->resize(400, 300);
        verticalLayout_3 = new QVBoxLayout(DialogConnection);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        label_4 = new QLabel(DialogConnection);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 8);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        adres1 = new QSpinBox(DialogConnection);
        adres1->setObjectName("adres1");
        adres1->setMinimum(1);
        adres1->setMaximum(255);
        adres1->setValue(127);

        horizontalLayout->addWidget(adres1);

        label = new QLabel(DialogConnection);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        adres2 = new QSpinBox(DialogConnection);
        adres2->setObjectName("adres2");
        adres2->setMaximum(255);

        horizontalLayout->addWidget(adres2);

        label_2 = new QLabel(DialogConnection);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        adres3 = new QSpinBox(DialogConnection);
        adres3->setObjectName("adres3");
        adres3->setMaximum(255);

        horizontalLayout->addWidget(adres3);

        label_3 = new QLabel(DialogConnection);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_3);

        adres4 = new QSpinBox(DialogConnection);
        adres4->setObjectName("adres4");
        adres4->setMaximum(255);
        adres4->setValue(1);

        horizontalLayout->addWidget(adres4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_5 = new QLabel(DialogConnection);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);

        port = new QSpinBox(DialogConnection);
        port->setObjectName("port");
        port->setMaximum(65535);

        verticalLayout_2->addWidget(port);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        wybor = new QComboBox(DialogConnection);
        wybor->addItem(QString());
        wybor->addItem(QString());
        wybor->setObjectName("wybor");

        horizontalLayout_2->addWidget(wybor);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);
        horizontalLayout_2->setStretch(2, 2);
        horizontalLayout_2->setStretch(3, 2);
        horizontalLayout_2->setStretch(4, 1);

        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        buttonBox = new QDialogButtonBox(DialogConnection);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 2);
        verticalLayout_3->setStretch(2, 1);
        verticalLayout_3->setStretch(3, 2);
        verticalLayout_3->setStretch(4, 1);
        verticalLayout_3->setStretch(5, 2);

        retranslateUi(DialogConnection);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogConnection, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogConnection, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogConnection);
    } // setupUi

    void retranslateUi(QDialog *DialogConnection)
    {
        DialogConnection->setWindowTitle(QCoreApplication::translate("DialogConnection", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("DialogConnection", "Adres", nullptr));
        label->setText(QCoreApplication::translate("DialogConnection", ".", nullptr));
        label_2->setText(QCoreApplication::translate("DialogConnection", ".", nullptr));
        label_3->setText(QCoreApplication::translate("DialogConnection", ".", nullptr));
        label_5->setText(QCoreApplication::translate("DialogConnection", "port", nullptr));
        wybor->setItemText(0, QCoreApplication::translate("DialogConnection", "klient", nullptr));
        wybor->setItemText(1, QCoreApplication::translate("DialogConnection", "serwer", nullptr));

    } // retranslateUi

};

namespace Ui {
    class DialogConnection: public Ui_DialogConnection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCONNECTION_H
