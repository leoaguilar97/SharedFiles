/********************************************************************************
** Form generated from reading UI file 'presentationview.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRESENTATIONVIEW_H
#define UI_PRESENTATIONVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PresentationView
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QLineEdit *lineEdit_7;
    QWidget *tab_4;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_12;
    QWidget *tab_5;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_10;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_11;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_2;

    void setupUi(QWidget *PresentationView)
    {
        if (PresentationView->objectName().isEmpty())
            PresentationView->setObjectName(QStringLiteral("PresentationView"));
        PresentationView->resize(640, 325);
        horizontalLayoutWidget = new QWidget(PresentationView);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 621, 301));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(horizontalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_3->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(horizontalLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_3->addWidget(pushButton_5);


        horizontalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_2);

        line = new QFrame(horizontalLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        tabWidget = new QTabWidget(horizontalLayoutWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayoutWidget_4 = new QWidget(tab_3);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(10, 10, 431, 51));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(verticalLayoutWidget_4);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_4->addWidget(label_7);

        lineEdit_7 = new QLineEdit(verticalLayoutWidget_4);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        verticalLayout_4->addWidget(lineEdit_7);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayoutWidget_3 = new QWidget(tab_4);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 10, 431, 171));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);

        lineEdit_4 = new QLineEdit(verticalLayoutWidget_3);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout_3->addWidget(lineEdit_4);

        label_5 = new QLabel(verticalLayoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);

        lineEdit_5 = new QLineEdit(verticalLayoutWidget_3);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        verticalLayout_3->addWidget(lineEdit_5);

        label_6 = new QLabel(verticalLayoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_3->addWidget(label_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        lineEdit_6 = new QLineEdit(verticalLayoutWidget_3);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        horizontalLayout_8->addWidget(lineEdit_6);

        pushButton_12 = new QPushButton(verticalLayoutWidget_3);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        horizontalLayout_8->addWidget(pushButton_12);


        verticalLayout_3->addLayout(horizontalLayout_8);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayoutWidget_2 = new QWidget(tab_5);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 20, 431, 141));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(verticalLayoutWidget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        lineEdit_2 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_6->addWidget(lineEdit_2);

        pushButton_10 = new QPushButton(verticalLayoutWidget_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        horizontalLayout_6->addWidget(pushButton_10);


        verticalLayout_2->addLayout(horizontalLayout_6);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        lineEdit_3 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_7->addWidget(lineEdit_3);

        pushButton_11 = new QPushButton(verticalLayoutWidget_2);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        horizontalLayout_7->addWidget(pushButton_11);


        verticalLayout_2->addLayout(horizontalLayout_7);

        tabWidget->addTab(tab_5, QString());

        verticalLayout->addWidget(tabWidget);

        line_2 = new QFrame(horizontalLayoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_6 = new QPushButton(horizontalLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_5->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(horizontalLayoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        horizontalLayout_5->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(horizontalLayoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        horizontalLayout_5->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(horizontalLayoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        horizontalLayout_5->addWidget(pushButton_9);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout->addLayout(verticalLayout);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(PresentationView);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(PresentationView);
    } // setupUi

    void retranslateUi(QWidget *PresentationView)
    {
        PresentationView->setWindowTitle(QApplication::translate("PresentationView", "Form", nullptr));
        pushButton->setText(QApplication::translate("PresentationView", "<<", nullptr));
        pushButton_3->setText(QApplication::translate("PresentationView", "Nueva Diapositiva", nullptr));
        pushButton_4->setText(QApplication::translate("PresentationView", "Eliminar Diapositiva", nullptr));
        pushButton_5->setText(QApplication::translate("PresentationView", "Guardar Diapositiva", nullptr));
        label_7->setText(QApplication::translate("PresentationView", "T\303\255tulo", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("PresentationView", "Titulo", nullptr));
        label_4->setText(QApplication::translate("PresentationView", "T\303\255tulo", nullptr));
        label_5->setText(QApplication::translate("PresentationView", "P\303\241rrafo", nullptr));
        label_6->setText(QApplication::translate("PresentationView", "Imagen", nullptr));
        pushButton_12->setText(QApplication::translate("PresentationView", "...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("PresentationView", "Completo", nullptr));
        label->setText(QApplication::translate("PresentationView", "T\303\255tulo", nullptr));
        label_2->setText(QApplication::translate("PresentationView", "Imagen 1", nullptr));
        pushButton_10->setText(QApplication::translate("PresentationView", "...", nullptr));
        label_3->setText(QApplication::translate("PresentationView", "Imagen 2", nullptr));
        pushButton_11->setText(QApplication::translate("PresentationView", "....", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("PresentationView", "Doble", nullptr));
        pushButton_6->setText(QApplication::translate("PresentationView", "Guardar", nullptr));
        pushButton_7->setText(QApplication::translate("PresentationView", "Cancelar", nullptr));
        pushButton_8->setText(QApplication::translate("PresentationView", "Gr\303\241fico", nullptr));
        pushButton_9->setText(QApplication::translate("PresentationView", "PDF", nullptr));
        pushButton_2->setText(QApplication::translate("PresentationView", ">>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PresentationView: public Ui_PresentationView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESENTATIONVIEW_H
