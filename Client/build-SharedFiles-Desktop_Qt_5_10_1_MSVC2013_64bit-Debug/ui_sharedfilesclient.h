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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SharedFilesClient
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QFrame *line;
    QPushButton *pushButton_4;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SharedFilesClient)
    {
        if (SharedFilesClient->objectName().isEmpty())
            SharedFilesClient->setObjectName(QStringLiteral("SharedFilesClient"));
        SharedFilesClient->resize(646, 375);
        centralWidget = new QWidget(SharedFilesClient);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 20, 111, 150));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        line = new QFrame(verticalLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(140, 20, 491, 291));
        SharedFilesClient->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SharedFilesClient);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 646, 21));
        SharedFilesClient->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SharedFilesClient);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SharedFilesClient->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SharedFilesClient);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SharedFilesClient->setStatusBar(statusBar);

        retranslateUi(SharedFilesClient);

        QMetaObject::connectSlotsByName(SharedFilesClient);
    } // setupUi

    void retranslateUi(QMainWindow *SharedFilesClient)
    {
        SharedFilesClient->setWindowTitle(QApplication::translate("SharedFilesClient", "SharedFilesClient", nullptr));
        pushButton_5->setText(QApplication::translate("SharedFilesClient", "Refrescar", nullptr));
        pushButton_2->setText(QApplication::translate("SharedFilesClient", "Crear", nullptr));
        pushButton_3->setText(QApplication::translate("SharedFilesClient", "Editar", nullptr));
        pushButton->setText(QApplication::translate("SharedFilesClient", "Eliminar", nullptr));
        pushButton_4->setText(QApplication::translate("SharedFilesClient", "Cerrar Sesion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SharedFilesClient: public Ui_SharedFilesClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHAREDFILESCLIENT_H
