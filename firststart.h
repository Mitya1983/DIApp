#ifndef FIRSTSTART_H
#define FIRSTSTART_H

#include <QWidget>

#include "greetinginfo.h"

namespace Ui {
class FirstStart;
}

class FirstStart : public QWidget
{
    Q_OBJECT

public:
    explicit FirstStart(QWidget *parent = nullptr);
    ~FirstStart();

private:
    Ui::FirstStart *ui;
    GreetingInfo *greetingInfo;
};

#endif // FIRSTSTART_H
