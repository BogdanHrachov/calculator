#include "digitalbutton.h"
#include "mainwindow.h"

DigitalButton::DigitalButton(int x, int y, QString title, QWidget *parent) : QPushButton(title, parent), title(title) {
    connect(this, SIGNAL(clicked()), ((MainWindow*) parent) -> getDisplay(), SLOT(actionDigital()));
    move(x * 100 + 5, y * 60 + 45);
    resize(100, 60);
    show();
}
