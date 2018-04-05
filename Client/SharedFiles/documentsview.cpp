#include "documentsview.h"
#include "ui_documentsview.h"

DocumentsView::DocumentsView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DocumentsView)
{
    ui->setupUi(this);
}

DocumentsView::~DocumentsView()
{
    delete ui;
}
