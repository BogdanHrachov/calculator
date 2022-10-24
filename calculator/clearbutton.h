#ifndef CLEARBUTTON_H
#define CLEARBUTTON_H

#include <QPushButton>

class ClearButton : public QPushButton {
    Q_OBJECT
public:
    explicit ClearButton(int x, int y, const QString title, QWidget *parent = 0);

signals:

public slots:

};

#endif // CLEARBUTTON_H
