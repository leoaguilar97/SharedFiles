#ifndef DOCUMENTSVIEW_H
#define DOCUMENTSVIEW_H

#include <QMainWindow>

namespace Ui {
class DocumentsView;
}

class DocumentsView : public QMainWindow
{
    Q_OBJECT

public:
    explicit DocumentsView(QWidget *parent = 0);
    ~DocumentsView();

private:
    Ui::DocumentsView *ui;
};

#endif // DOCUMENTSVIEW_H
