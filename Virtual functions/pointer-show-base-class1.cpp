#include <iostream>
using namespace std;
class base
{
public:
  virtual void print()
  {
    cout << "print base class\n";
  }
  void show()
  {
    cout << "show base class\n";
  }
};
class derived : public base
{
public:
  void print()
  {
    cout << "print derived class\n";
  }
  void show()
  {
    cout << "show derived class\n";
  }
};
int main()
{
  base *bptr;
  derived d;
  bptr = &d;
  bptr->print();
  bptr->show();
//if we create object of derived class and pointer of derived class
  derived *dptr;
  dptr = &d;
  dptr->print();
  dptr->show();
//if we create object of base class and pointer of derived class
  /*it shows this error
  pointer-show-base-class1.cpp:33:7: error: invalid conversion from 'base*' to 'derived*' [-fpermissive]
   dpt = &b;
         ^~
  base b;
  derived *dpt;
  dpt = &b;
  dpt->print();
  dpt->show();*/
  return 0;
}
