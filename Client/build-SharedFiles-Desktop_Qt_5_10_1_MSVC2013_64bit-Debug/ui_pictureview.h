/********************************************************************************
** Form generated from reading UI file 'pictureview.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTUREVIEW_H
#define UI_PICTUREVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PictureView
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PictureView)
    {
        if (PictureView->objectName().isEmpty())
            PictureView->setObjectName(QStringLiteral("PictureView"));
        PictureView->resize(640, 424);
        centralwidget = new QWidget(PictureView);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 231, 301));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(250, 10, 381, 361));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 379, 359));
        gridLayoutWidget = new QWidget(scrollAreaWidgetContents);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 160, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 320, 231, 51));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(formLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout->setWidget(0, QFormLayout::LabelRole, pushButton);

        pushButton_2 = new QPushButton(formLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        formLayout->setWidget(0, QFormLayout::FieldRole, pushButton_2);

        pushButton_3 = new QPushButton(formLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, pushButton_3);

        pushButton_4 = new QPushButton(formLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton_4);

        PictureView->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PictureView);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 21));
        PictureView->setMenuBar(menubar);
        statusbar = new QStatusBar(PictureView);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        PictureView->setStatusBar(statusbar);

        retranslateUi(PictureView);

        QMetaObject::connectSlotsByName(PictureView);
    } // setupUi

    void retranslateUi(QMainWindow *PictureView)
    {
        PictureView->setWindowTitle(QApplication::translate("PictureView", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("PictureView", "Guardar", nullptr));
        pushButton_2->setText(QApplication::translate("PictureView", "Generar JPG", nullptr));
        pushButton_3->setText(QApplication::translate("PictureView", "Cancelar", nullptr));
        pushButton_4->setText(QApplication::translate("PictureView", "Generar PNG", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PictureView: public Ui_PictureView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTUREVIEW_H
