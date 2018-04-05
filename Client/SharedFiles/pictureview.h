#ifndef PICTUREVIEW_H
#define PICTUREVIEW_H

#include <QMainWindow>

namespace Ui {
class PictureView;
}

class PictureView : public QMainWindow
{
    Q_OBJECT

public:
    explicit PictureView(QWidget *parent = 0);
    ~PictureView();

private:
    Ui::PictureView *ui;
};

#endif // PICTUREVIEW_H
