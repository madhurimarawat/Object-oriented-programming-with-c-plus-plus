#include <iostream>
using namespace std;
int main()
{
  int a, b, sum, mul;
  cout << "Enter two numbers:\n";
  cin >> a >> b;
  sum = a + b;
  mul = a *b;
  cout << "Sum of number " << a << " and " << b << " is  " << sum << endl;
  cout << "Multiplication of number  " << a << " and " << b << " is  " << mul << endl;
  return 0;
}