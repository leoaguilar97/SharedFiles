#include "presentationsview.h"
#include "ui_presentationsview.h"

presentationsview::presentationsview(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::presentationsview)
{
    ui->setupUi(this);
}

presentationsview::~presentationsview()
{
    delete ui;
}
