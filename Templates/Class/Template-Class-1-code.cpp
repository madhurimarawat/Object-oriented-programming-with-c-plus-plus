#include <iostream>
using namespace std;
template<class t> class tempc
{
public:
  t a, b;
  tempc(t x, t y)
  {
    a = x;
    b = y;
  }
  void show()
  {
    cout << "Addition of " << a << " and " << b << " is: " << add() << endl;
  }
  t add()
  {
    return a + b;
  }
};
int main()
{
  tempc<int> ob1(12, 90);
  ob1.show();
  tempc<float> ob2(12.23, 90);
  ob2.show();
  tempc<char> ob3('H', 'W');
  ob3.show();
  return 0;
}

