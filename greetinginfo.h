#ifndef GREETINGINFO_H
#define GREETINGINFO_H

#include <QWidget>

namespace Ui {
class GreetingInfo;
}

class GreetingInfo : public QWidget
{
    Q_OBJECT

public:
    explicit GreetingInfo(QWidget *parent = nullptr);
    ~GreetingInfo();

private:
    Ui::GreetingInfo *ui;
};

#endif // GREETINGINFO_H
