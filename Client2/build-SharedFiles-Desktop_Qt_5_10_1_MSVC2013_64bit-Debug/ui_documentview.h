/********************************************************************************
** Form generated from reading UI file 'documentview.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCUMENTVIEW_H
#define UI_DOCUMENTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DocumentView
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QFormLayout *formLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QTextEdit *textEdit;
    QWidget *tab_2;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QTextEdit *textEdit_2;
    QWidget *tab_3;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_9;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;

    void setupUi(QWidget *DocumentView)
    {
        if (DocumentView->objectName().isEmpty())
            DocumentView->setObjectName(QStringLiteral("DocumentView"));
        DocumentView->resize(640, 400);
        verticalLayoutWidget = new QWidget(DocumentView);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 160, 371));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        treeWidget = new QTreeWidget(verticalLayoutWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        verticalLayout->addWidget(treeWidget);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, pushButton_2);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, pushButton_3);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, pushButton_4);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, pushButton_5);

        pushButton_6 = new QPushButton(verticalLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, pushButton_6);


        verticalLayout->addLayout(formLayout_2);

        tabWidget = new QTabWidget(DocumentView);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(180, 10, 431, 341));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayoutWidget_2 = new QWidget(tab);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 10, 401, 291));
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

        textEdit = new QTextEdit(verticalLayoutWidget_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout_2->addWidget(textEdit);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayoutWidget_3 = new QWidget(tab_2);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 10, 401, 291));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_3->addWidget(lineEdit_2);

        label_4 = new QLabel(verticalLayoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);

        textEdit_2 = new QTextEdit(verticalLayoutWidget_3);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        verticalLayout_3->addWidget(textEdit_2);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayoutWidget_4 = new QWidget(tab_3);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(10, 10, 401, 111));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(verticalLayoutWidget_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_4->addWidget(label_5);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget_4);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout_4->addWidget(lineEdit_3);

        label_6 = new QLabel(verticalLayoutWidget_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_4->addWidget(label_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit_4 = new QLineEdit(verticalLayoutWidget_4);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout->addWidget(lineEdit_4);

        pushButton_9 = new QPushButton(verticalLayoutWidget_4);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        horizontalLayout->addWidget(pushButton_9);


        verticalLayout_4->addLayout(horizontalLayout);

        tabWidget->addTab(tab_3, QString());
        formLayoutWidget_2 = new QWidget(DocumentView);
        formLayoutWidget_2->setObjectName(QStringLiteral("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(410, 360, 191, 25));
        formLayout_3 = new QFormLayout(formLayoutWidget_2);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(formLayoutWidget_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, pushButton_7);

        pushButton_8 = new QPushButton(formLayoutWidget_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, pushButton_8);


        retranslateUi(DocumentView);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(DocumentView);
    } // setupUi

    void retranslateUi(QWidget *DocumentView)
    {
        DocumentView->setWindowTitle(QApplication::translate("DocumentView", "Form", nullptr));
        pushButton->setText(QApplication::translate("DocumentView", "Guardar", nullptr));
        pushButton_2->setText(QApplication::translate("DocumentView", "Cancelar", nullptr));
        pushButton_3->setText(QApplication::translate("DocumentView", "Crear nodo", nullptr));
        pushButton_4->setText(QApplication::translate("DocumentView", "Editar nodo", nullptr));
        pushButton_5->setText(QApplication::translate("DocumentView", "PDF", nullptr));
        pushButton_6->setText(QApplication::translate("DocumentView", "Grafica", nullptr));
        label->setText(QApplication::translate("DocumentView", "T\303\255tulo (Opcional)", nullptr));
        label_2->setText(QApplication::translate("DocumentView", "P\303\241rrafo", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("DocumentView", "P\303\241rrafo", nullptr));
        label_3->setText(QApplication::translate("DocumentView", "Descripci\303\263n", nullptr));
        label_4->setText(QApplication::translate("DocumentView", "Items (Separados por cada l\303\255nea)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("DocumentView", "Vi\303\261eta", nullptr));
        label_5->setText(QApplication::translate("DocumentView", "Pie de imagen", nullptr));
        label_6->setText(QApplication::translate("DocumentView", "URL de imagen", nullptr));
        pushButton_9->setText(QApplication::translate("DocumentView", "...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("DocumentView", "Imagen", nullptr));
        pushButton_7->setText(QApplication::translate("DocumentView", "Eliminar Nodo", nullptr));
        pushButton_8->setText(QApplication::translate("DocumentView", "Guardar Nodo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DocumentView: public Ui_DocumentView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCUMENTVIEW_H
