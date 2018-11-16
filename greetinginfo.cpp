#include <QScroller>

#include "greetinginfo.h"
#include "ui_greetinginfo.h"

GreetingInfo::GreetingInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GreetingInfo)
{
    ui->setupUi(this);
    QScroller::grabGesture(ui->scrollArea, QScroller::LeftMouseButtonGesture);
    ui->scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->label->setText("HI\nHI\nHI\nHI\nHI\nHI\nHI\nHI\nHI\nHI\nHI\nHI\nHI\nHI\nHI\nHI\nHI\nHI\nHI\nHI\nHI\nHI\nHI\nHI\nHI\nHI\nHI\nHI\nHI\n");
}

GreetingInfo::~GreetingInfo()
{
    delete ui;
}
