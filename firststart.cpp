#include "firststart.h"
#include "ui_firststart.h"

FirstStart::FirstStart(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FirstStart)
{
    ui->setupUi(this);
}

FirstStart::~FirstStart()
{
    delete ui;
}
