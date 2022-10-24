#include "display.h"

Display::Display(QWidget *parent) : QLineEdit("0", parent) {
    setAlignment(Qt::AlignRight);
    setFont(QFont("Arial", 18));
    resize(400, 40);
    move(5, 5);
    show();
}

void Display::actionDigital() {
    QPushButton* b = (QPushButton*) sender();
    if (flag == false)
        setText(b -> text());
    else setText(text() + b -> text());
    flag = true;
}

void Display::actionClear() {
    setText("0");
}

void Display::actionOperation() {
    if (signum != "=") {
        // Вычислить x <signum> y -> x
        long x = text().toLong();
        long y = Y.toLong();
        if (signum == "+")
            x = y + x;
        if (signum == "-")
            x = y - x;
        if (signum == "*")
            x = y * x;
        if (signum == "/")
            x = y / x;
        QString s;
        setText(s.setNum(x));
    }
    Y = text();
    flag = false;
    QPushButton* b = (QPushButton*) sender();
    signum = b -> text();
}
