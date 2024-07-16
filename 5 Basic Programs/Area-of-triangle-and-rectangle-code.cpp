#include <iostream>
using namespace std;
int tarea(int b, int h)
{
  return 0.5 * b *h;
}
int rarea(int l, int b)
{
  return l *b;
}
int main()
{
  int ba, h;
  cout << "Enter Base of triangle:\n";
  cin >> ba;
  cout << "Enter Height of triangle:\n";
  cin >> h;
  cout << "Area of triangle is:" << tarea(ba, h) << endl;
  int a, b;
  cout << "Enter Length of rectangle:\n";
  cin >> a;
  cout << "Enter Breadth of rectangle:\n";
  cin >> b;
  cout << "Area of rectangle is:" << rarea(a, b) << endl;
  return 0;
}
