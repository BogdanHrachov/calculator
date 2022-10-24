#include "mainwindow.h"
#include "digitalbutton.h"
#include "signumbutton.h"
#include "clearbutton.h"
#include "display.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    resize(410, 350);
    move(300, 100);
    display = new Display(this);
    buildDigitalButton();
    buildSignumButton();
    new ClearButton(0, 0, "C", this);
    show();
}

MainWindow::~MainWindow() {

}

void MainWindow::buildDigitalButton() {
    QString t[] = {"7", "8", "9", "4", "5", "6", "1", "2", "3", "0", ".", "%"};
    for (int y = 1; y < 5; ++y) {
        for (int x = 0; x < 3; ++x) {
            new DigitalButton(x, y, t[(y - 1) * 3 + x], this);
        }
    }
}

void MainWindow::buildSignumButton() {
    QString t[] = {"/", "*", "-", "+", "="};
    for (int y = 0; y < 5; ++y) {
        new SignumButton(3, y, t[y], this);
    }
}

QWidget* MainWindow::getDisplay() {
    return display;
}
