#ifndef SIGNUMBUTTON_H
#define SIGNUMBUTTON_H

#include <QPushButton>

class SignumButton : public QPushButton {
    Q_OBJECT
public:
    explicit SignumButton(int x, int y, QString title, QWidget *parent = 0);

signals:

public slots:

private:
    QString title;

};

#endif // SIGNUMBUTTON_H
