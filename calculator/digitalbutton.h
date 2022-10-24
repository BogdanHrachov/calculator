#ifndef DIGITALBUTTON_H
#define DIGITALBUTTON_H

#include <QPushButton>

class DigitalButton : public QPushButton {
    Q_OBJECT

public:
    explicit DigitalButton(int x, int y, QString title, QWidget *parent);

signals:

public slots:

private:
    QString title;

};

#endif // DIGITALBUTTON_H
