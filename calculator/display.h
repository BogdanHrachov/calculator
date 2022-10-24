#ifndef DISPLAY_H
#define DISPLAY_H

#include <QLineEdit>
#include <QPushButton>

class Display : public QLineEdit {
    Q_OBJECT

public:
    explicit Display(QWidget *parent = 0);

signals:

public slots:
    void actionDigital();
    void actionClear();
    void actionOperation();

private:
    QString signum = "=";
    QString Y;
    bool flag = false;

};

#endif // DISPLAY_H
