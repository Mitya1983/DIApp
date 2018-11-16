#include "firststart.h"
#include "ui_firststart.h"

FirstStart::FirstStart(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FirstStart)
{
    ui->setupUi(this);
    greetingInfo = new GreetingInfo(this);
    ui->stackedWidget->addWidget(greetingInfo);
    ui->stackedWidget->setCurrentWidget(greetingInfo);
}

FirstStart::~FirstStart()
{
    delete ui;
}
