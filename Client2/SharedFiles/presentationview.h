#ifndef PRESENTATIONVIEW_H
#define PRESENTATIONVIEW_H

#include <QWidget>

namespace Ui {
class PresentationView;
}

class PresentationView : public QWidget
{
    Q_OBJECT

public:
    explicit PresentationView(QWidget *parent = 0);
    ~PresentationView();

private:
    Ui::PresentationView *ui;
};

#endif // PRESENTATIONVIEW_H
