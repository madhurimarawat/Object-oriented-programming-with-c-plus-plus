#include <iostream>
using namespace std;
template<typename t>
t func(t a, t b)
{
  return a;
  return b;
}
int main()
{
  cout << func(12, 90) << endl;
  cout << func(12.23, 90.32) << endl;
  cout << func('H', 'W') << endl;
}

