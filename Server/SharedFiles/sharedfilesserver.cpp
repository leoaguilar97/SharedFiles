#include "sharedfilesserver.h"
#include "ui_sharedfilesserver.h"

SharedFilesServer::SharedFilesServer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SharedFilesServer)
{
    ui->setupUi(this);
}

SharedFilesServer::~SharedFilesServer()
{
    delete ui;
}
