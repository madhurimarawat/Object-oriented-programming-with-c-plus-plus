#include <iostream>
#include <stdio.h>
using namespace std;
class calculation
{
//wap for friend class
  int a;
  int b;
private:
  int sum = 0;
public:
  void set(int c, int d)
  {
    a = c;
    b = d;
  }
  friend class add;
  friend class sub;
};
class add
{
public:
  void add1(calculation &c1)
  {
    int sum = c1.a + c1.b;
    cout << "Friend class 1 called \n";
    cout << "Sum is:" << sum << endl;
  }
};
class sub
{
public:
  void sub1(calculation &c1)
  {
    int sub = c1.a - c1.b;
    cout << "Friend class 2 called \n";
    cout << "Sub is:" << sub << endl;
  }
};
int main()
{
  int x, y;
  cout << "Enter first number:";
  cin >> x;
  cout << "Enter second number:";
  cin >> y;
  calculation c;
  c.set(x, y);
  add a;
  sub s;
  a.add1(c);
  s.sub1(c);
  return 0;
}
