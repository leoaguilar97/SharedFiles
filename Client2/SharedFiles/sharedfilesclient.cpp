#include "sharedfilesclient.h"
#include "ui_sharedfilesclient.h"

SharedFilesClient::SharedFilesClient(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SharedFilesClient)
{
    ui->setupUi(this);
}

SharedFilesClient::~SharedFilesClient()
{
    delete ui;
}
