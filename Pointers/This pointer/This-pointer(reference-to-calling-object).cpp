#include <iostream>
using namespace std;
/*When local variable is same as data member */
class thischeck
{
private:
  int x = 89, y = 90;
public:
  thischeck(int x, int y) {this->x = x; this->y = y;}
  thischeck &setx(int x) {this->x = x; return *this;}
  thischeck &sety(int y) {this->y = y; return *this;}
  void print() {cout << "x =  " << x << "y =  " << y << endl;}
};
int main()
{
  thischeck t1(12, 34);
  int x = 67;
  t1.setx(x).sety(98);
  t1.print();
  return 0;
}