#ifndef REGISTERVIEW_H
#define REGISTERVIEW_H

#include <QWidget>

namespace Ui {
class RegisterView;
}

class RegisterView : public QWidget
{
    Q_OBJECT

public:
    explicit RegisterView(QWidget *parent = 0);
    ~RegisterView();

private:
    Ui::RegisterView *ui;
};

#endif // REGISTERVIEW_H
