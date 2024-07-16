#include <iostream>
using namespace std;
class A
{
public:
  void showa()
  {
    cout << "A" << endl;
  }
};
class B: public A
{
public:
  void showb()
  {
    cout << "B" << endl;
  }
};
class C
{
public:
  void showc()
  {
    cout << "C" << endl;
  }
};
class D: public B
{
public:
  void showd()
  {
    cout << "D" << endl;
  }
};
int main()
{
  D d;
  d.B::showa();
  return 0;
}