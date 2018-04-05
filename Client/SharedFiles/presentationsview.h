#ifndef PRESENTATIONSVIEW_H
#define PRESENTATIONSVIEW_H

#include <QMainWindow>

namespace Ui {
class presentationsview;
}

class presentationsview : public QMainWindow
{
    Q_OBJECT

public:
    explicit presentationsview(QWidget *parent = 0);
    ~presentationsview();

private:
    Ui::presentationsview *ui;
};

#endif // PRESENTATIONSVIEW_H
