#include <iostream>
using namespace std;
/*When local variable is same as data member */
class thischeck
{
private:
  int x = 89;
public:
  void setx(int x)
  {
    this->x = x; //if we skip this x willbe 89
  }
  void print() {cout << "x =  " << x << endl;}
};
int main()
{
  thischeck t1;
  int x = 67;
  t1.setx(x);
  t1.print();
  return 0;
}
