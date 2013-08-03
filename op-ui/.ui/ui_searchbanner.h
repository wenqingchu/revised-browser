/********************************************************************************
** Form generated from reading UI file 'searchbanner.ui'
**
** Created: Sun Jul 28 19:44:59 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHBANNER_H
#define UI_SEARCHBANNER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>
#include "searchlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SearchBanner
{
public:
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *searchInfo;
    QToolButton *previousButton;
    QToolButton *nextButton;
    SearchLineEdit *searchLineEdit;
    QPushButton *doneButton;

    void setupUi(QWidget *SearchBanner)
    {
        if (SearchBanner->objectName().isEmpty())
            SearchBanner->setObjectName(QString::fromUtf8("SearchBanner"));
        SearchBanner->resize(405, 36);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SearchBanner->sizePolicy().hasHeightForWidth());
        SearchBanner->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(SearchBanner);
#ifndef Q_OS_MAC
        horizontalLayout->setSpacing(-1);
#endif
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(12, 0, -1, 0);
        horizontalSpacer = new QSpacerItem(26, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        searchInfo = new QLabel(SearchBanner);
        searchInfo->setObjectName(QString::fromUtf8("searchInfo"));

        horizontalLayout->addWidget(searchInfo);

        previousButton = new QToolButton(SearchBanner);
        previousButton->setObjectName(QString::fromUtf8("previousButton"));

        horizontalLayout->addWidget(previousButton);

        nextButton = new QToolButton(SearchBanner);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));

        horizontalLayout->addWidget(nextButton);

        searchLineEdit = new SearchLineEdit(SearchBanner);
        searchLineEdit->setObjectName(QString::fromUtf8("searchLineEdit"));

        horizontalLayout->addWidget(searchLineEdit);

        doneButton = new QPushButton(SearchBanner);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));

        horizontalLayout->addWidget(doneButton);


        retranslateUi(SearchBanner);

        QMetaObject::connectSlotsByName(SearchBanner);
    } // setupUi

    void retranslateUi(QWidget *SearchBanner)
    {
        SearchBanner->setWindowTitle(QApplication::translate("SearchBanner", "Form", 0, QApplication::UnicodeUTF8));
        searchInfo->setText(QApplication::translate("SearchBanner", "TextLabel", 0, QApplication::UnicodeUTF8));
        previousButton->setText(QApplication::translate("SearchBanner", "<", 0, QApplication::UnicodeUTF8));
        nextButton->setText(QApplication::translate("SearchBanner", ">", 0, QApplication::UnicodeUTF8));
        doneButton->setText(QApplication::translate("SearchBanner", "Done", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SearchBanner: public Ui_SearchBanner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHBANNER_H
