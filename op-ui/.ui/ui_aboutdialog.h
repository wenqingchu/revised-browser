/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created: Sun Jul 28 19:44:58 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *logo;
    QLabel *name;
    QLabel *version;
    QLabel *description;
    QLabel *sitelink;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *authorsButton;
    QPushButton *licenseButton;
    QPushButton *closeButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(454, 236);
        AboutDialog->setModal(true);
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        logo = new QLabel(AboutDialog);
        logo->setObjectName(QString::fromUtf8("logo"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy);
        logo->setScaledContents(false);
        logo->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(logo);

        name = new QLabel(AboutDialog);
        name->setObjectName(QString::fromUtf8("name"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        name->setFont(font);
        name->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(name);

        version = new QLabel(AboutDialog);
        version->setObjectName(QString::fromUtf8("version"));
        sizePolicy1.setHeightForWidth(version->sizePolicy().hasHeightForWidth());
        version->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        version->setFont(font1);
        version->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(version);

        description = new QLabel(AboutDialog);
        description->setObjectName(QString::fromUtf8("description"));
        description->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(description);

        sitelink = new QLabel(AboutDialog);
        sitelink->setObjectName(QString::fromUtf8("sitelink"));
        sizePolicy1.setHeightForWidth(sitelink->sizePolicy().hasHeightForWidth());
        sitelink->setSizePolicy(sizePolicy1);
        sitelink->setAlignment(Qt::AlignCenter);
        sitelink->setOpenExternalLinks(true);

        verticalLayout->addWidget(sitelink);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        authorsButton = new QPushButton(AboutDialog);
        authorsButton->setObjectName(QString::fromUtf8("authorsButton"));

        horizontalLayout->addWidget(authorsButton);

        licenseButton = new QPushButton(AboutDialog);
        licenseButton->setObjectName(QString::fromUtf8("licenseButton"));

        horizontalLayout->addWidget(licenseButton);

        closeButton = new QPushButton(AboutDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setDefault(true);

        horizontalLayout->addWidget(closeButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AboutDialog);
        QObject::connect(closeButton, SIGNAL(clicked()), AboutDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        logo->setText(QString());
        name->setText(QString());
        version->setText(QString());
        description->setText(QApplication::translate("AboutDialog", "Secure web browsing with the OP web browser", 0, QApplication::UnicodeUTF8));
        sitelink->setText(QApplication::translate("AboutDialog", "Thanks <a href=\"http://arora-browser.org\">Arora</a> for most of the UI codes", 0, QApplication::UnicodeUTF8));
        authorsButton->setText(QApplication::translate("AboutDialog", "Authors", 0, QApplication::UnicodeUTF8));
        licenseButton->setText(QApplication::translate("AboutDialog", "License", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("AboutDialog", "Close", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(AboutDialog);
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
