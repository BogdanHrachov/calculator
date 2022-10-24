#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void buildDigitalButton();
    void buildSignumButton();
    QWidget* getDisplay();

private:
    QWidget* display;
};

#endif // MAINWINDOW_H
