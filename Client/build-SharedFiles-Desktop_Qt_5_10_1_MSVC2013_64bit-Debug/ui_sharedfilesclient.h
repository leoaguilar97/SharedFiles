/********************************************************************************
** Form generated from reading UI file 'sharedfilesclient.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHAREDFILESCLIENT_H
#define UI_SHAREDFILESCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SharedFilesClient
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SharedFilesClient)
    {
        if (SharedFilesClient->objectName().isEmpty())
            SharedFilesClient->setObjectName(QStringLiteral("SharedFilesClient"));
        SharedFilesClient->resize(400, 300);
        menuBar = new QMenuBar(SharedFilesClient);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        SharedFilesClient->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SharedFilesClient);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SharedFilesClient->addToolBar(mainToolBar);
        centralWidget = new QWidget(SharedFilesClient);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SharedFilesClient->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(SharedFilesClient);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SharedFilesClient->setStatusBar(statusBar);

        retranslateUi(SharedFilesClient);

        QMetaObject::connectSlotsByName(SharedFilesClient);
    } // setupUi

    void retranslateUi(QMainWindow *SharedFilesClient)
    {
        SharedFilesClient->setWindowTitle(QApplication::translate("SharedFilesClient", "SharedFilesClient", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SharedFilesClient: public Ui_SharedFilesClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHAREDFILESCLIENT_H
