#ifndef SHAREDFILESCLIENT_H
#define SHAREDFILESCLIENT_H

#include <QMainWindow>

namespace Ui {
class SharedFilesClient;
}

class SharedFilesClient : public QMainWindow
{
    Q_OBJECT

public:
    explicit SharedFilesClient(QWidget *parent = 0);
    ~SharedFilesClient();

private:
    Ui::SharedFilesClient *ui;
};

#endif // SHAREDFILESCLIENT_H
