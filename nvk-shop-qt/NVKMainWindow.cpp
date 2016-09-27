#include "NVKMainWindow.h"
#include "ui_nvkmainwindow.h"

NVKMainWindow::NVKMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NVKMainWindow)
{
    ui->setupUi(this);
}

NVKMainWindow::~NVKMainWindow()
{
    delete ui;
}
