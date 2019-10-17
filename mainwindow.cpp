#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ListItem.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for(int i=0; i<20; i++) {
        initListItem();
    }

    for(int i=2; i<18; i++) {
        setListItem(i, "newName", i);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initListItem() {
    ListItem *listItem = new ListItem();
    QListWidgetItem *widgetItem = new QListWidgetItem();
    widgetItem->setSizeHint(QSize(120, 40));
    ui->listWidget->addItem(widgetItem);
    ui->listWidget->setItemWidget(widgetItem, listItem);
}

void MainWindow::setListItem(int i, string name, int id) {
    QListWidgetItem *widgetItem = ui->listWidget->item(i);
    QWidget *item = ui->listWidget->itemWidget(widgetItem);
    ListItem *listItem = (ListItem*) item;
    listItem->setName(name);
    listItem->setId(id);
    if(i%2 == 0) {
        listItem->setImage("border-image: url(:/icon/menu_3dots.png);");
    } else {
        listItem->setImage("border-image: url(:/icon/menu_icon.png);");
    }

}
