/********************************************************************************
** Form generated from reading UI file 'sharedfilesserver.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHAREDFILESSERVER_H
#define UI_SHAREDFILESSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SharedFilesServer
{
public:
    QWidget *centralWidget;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SharedFilesServer)
    {
        if (SharedFilesServer->objectName().isEmpty())
            SharedFilesServer->setObjectName(QStringLiteral("SharedFilesServer"));
        SharedFilesServer->resize(734, 414);
        centralWidget = new QWidget(SharedFilesServer);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 711, 341));
        SharedFilesServer->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SharedFilesServer);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 734, 21));
        SharedFilesServer->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SharedFilesServer);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SharedFilesServer->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SharedFilesServer);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SharedFilesServer->setStatusBar(statusBar);

        retranslateUi(SharedFilesServer);

        QMetaObject::connectSlotsByName(SharedFilesServer);
    } // setupUi

    void retranslateUi(QMainWindow *SharedFilesServer)
    {
        SharedFilesServer->setWindowTitle(QApplication::translate("SharedFilesServer", "SharedFilesServer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SharedFilesServer: public Ui_SharedFilesServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHAREDFILESSERVER_H
