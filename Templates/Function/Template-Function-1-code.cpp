#include <iostream>
using namespace std;
template<class X>
X func(X a, X b)
{
  return a;
}
int main()
{
  cout << func(12, 90) << endl;
  cout << func(12.23, 90.32) << endl;
  cout << func('H', 'W') << endl;
}

