#include "pictureview.h"
#include "ui_pictureview.h"

PictureView::PictureView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PictureView)
{
    ui->setupUi(this);
}

PictureView::~PictureView()
{
    delete ui;
}
