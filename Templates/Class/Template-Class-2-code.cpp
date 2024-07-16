#include <iostream>
using namespace std;
template <class C> class A
{
private:
  C a, b;
public:
  A(C x, C y)
  {
    a = x;
    b = y;
  }
  C show()
  {
    cout << "The Addition of " << a << " and  " << b << " is: " << add() << endl;
  }
  C add()
  {
    C c = a + b;
    return c;
  }
};
int main()
{
  A<int> intadd(8, 6);
  intadd.show();
//A addfloat(3.5,2.6);
//A adddouble(2.156,5.234);
//addint.show();
//adddouble.show();
//cout<<endl;
  return 0;
}