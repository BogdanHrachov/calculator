#include "clearbutton.h"
#include "mainwindow.h"

ClearButton::ClearButton(int x, int y, const QString title, QWidget *parent) : QPushButton(title, parent) {
    connect(this, SIGNAL(clicked()), ((MainWindow*) parent) -> getDisplay(), SLOT(actionClear()));
    resize(300, 60);
    move(x * 100 + 5, y * 60 + 45);
    show();
}
