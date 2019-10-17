#include "ListItem.h"
#include "ui_listitem.h"

ListItem::ListItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListItem)
{
    ui->setupUi(this);
}

ListItem::~ListItem()
{
    delete ui;
}

void ListItem::setName(string name) {
    ui->lb_name->setText(name.c_str());
}

void ListItem::setId(int id) {
    ui->lb_id->setText(QString::number(id));
}

void ListItem::setImage(string image) {
    ui->lb_image->setStyleSheet(QString::fromStdString(image));
//    ui->lb_image->setStyleSheet();
}
