#include "signumbutton.h"
#include "mainwindow.h"

SignumButton::SignumButton(int x, int y, QString title, QWidget *parent) : QPushButton(title, parent), title(title) {
    connect(this, SIGNAL(clicked()), ((MainWindow*) parent) -> getDisplay(), SLOT(actionOperation()));
    resize(100, 60);
    move(x * 100 + 5, y * 60 + 45);
    show();
}
