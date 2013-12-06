#include "vinbutton.h"
#include "handleclick.h"
#include <QMessageBox>

vinButton::vinButton(QWidget *parent) :
    QPushButton(parent)
{
}

void vinButton::mousePressEvent ( QMouseEvent * event )
{
    QString  s = "ff";
   handleClick *h = new handleClick;
   h->whichPress(this->text());

    //emit xclicked(this->text());
   QMessageBox *m = new QMessageBox;
//    m->setText(this->text());
//    m->setText(s);
//    m->show();
}
