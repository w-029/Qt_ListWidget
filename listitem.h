#ifndef LISTITEM_H
#define LISTITEM_H

#include <QWidget>

using namespace std;
namespace Ui {
class ListItem;
}

class ListItem : public QWidget
{
    Q_OBJECT

public:
    explicit ListItem(QWidget *parent = nullptr);
    ~ListItem();

private:
    Ui::ListItem *ui;

public:
    void setName(string name);
    void setId(int id);
    void setImage(string image);
};

#endif // LISTITEM_H
