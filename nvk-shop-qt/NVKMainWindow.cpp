#include "NVKMainWindow.h"
#include "ui_nvkmainwindow.h"

NVKMainWindow::NVKMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NVKMainWindow),
    m_NetworkHandler(new NetworkHandler)
{
    ui->setupUi(this);
#ifdef Q_OS_ANDROID
    //Set sizes for Android
#else
    //Desktop sizes
#endif
    connect(ui->requestThingsButton, &QPushButton::clicked, m_NetworkHandler, &NetworkHandler::sendRequest);
}

NVKMainWindow::~NVKMainWindow()
{
    delete ui;
}
