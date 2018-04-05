#ifndef SHAREDFILESSERVER_H
#define SHAREDFILESSERVER_H

#include <QMainWindow>

namespace Ui {
class SharedFilesServer;
}

class SharedFilesServer : public QMainWindow
{
    Q_OBJECT

public:
    explicit SharedFilesServer(QWidget *parent = 0);
    ~SharedFilesServer();

private:
    Ui::SharedFilesServer *ui;
};

#endif // SHAREDFILESSERVER_H
