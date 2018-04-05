#include "presentationview.h"
#include "ui_presentationview.h"

PresentationView::PresentationView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PresentationView)
{
    ui->setupUi(this);
}

PresentationView::~PresentationView()
{
    delete ui;
}
