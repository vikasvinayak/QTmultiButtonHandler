#include "vinbutton.h"
#include "handleclick.h"

vinButton::vinButton(QWidget *parent) :
    QPushButton(parent)
{
}

void vinButton::mousePressEvent ( QMouseEvent * event )
{
   handleClick *h = new handleClick;
   h->whichPress(this->text());

  //  emit xclicked(this->text());
  //  not needed in this release
}
