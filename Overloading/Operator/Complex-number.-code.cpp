#include <iostream>
using namespace std;
class complex
{
public:
  int x, y;
public:
  void input()
  {
    int x1, y1;
    cout << "Enter complex number in the form a+ib\n";
    cout << "Enter real and imaginary part of complex number:";
    cin >> x1 >> y1;
    x = x1;
    y = y1;
  }
  void print()
  {
    cout << x << " + " << y << "i";
  }
  complex operator+(complex &y1)
  {
    complex A;
    A.x = x + y1.x;
    A.y = y + y1.y;
    cout << "ANSWER IS: ";
    cout << abs(A.x) << " + " << abs(A.y) << "i" << endl;
    return A;
  }
  complex operator-(complex &y1)
  {
    complex A;
    A.x = x - y1.x;
    A.y = y - y1.y;
    cout << "ANSWER IS: ";
    cout << abs(A.x) << " + " << abs(A.y) << "i" << endl;
    return A;
  }
  complex operator*(complex &y1)
  {
    complex A;
    A.x = x *y1.x;
    A.y = y *y1.y;
    cout << "ANSWER IS: ";
    cout << abs(A.x) << " + " << abs(A.y) << "i" << endl;
    return A;
  }
  complex operator/(complex &y1)
  {
    complex A;
    A.x = x / y1.x;
    A.y = y / y1.y;
    cout << "ANSWER IS: ";
    cout << abs(A.x) << " + " << abs(A.y) << "i" << endl;
    return A;
  }
};
int main()
{
  complex x1, y1, sum, sub, mul, div;
  int c;
  x1.input();
  y1.input();
  cout << "Enter 1 for Addition, 2 for subtraction, 3 for Multiplication or 4 for Division: ";
  cin >> c;
  switch (c)
  {
    case 1:
      cout << "Addition of ";
      x1.print();
      cout << " and ";
      y1.print();
      cout << " is :" << endl;
      sum = x1 + y1;
      break;
    case 2:
      cout << "Subtraction of ";
      x1.print();
      cout << " and ";
      y1.print();
      cout << " is :" << endl;
      sub = x1 - y1;
      break;
    case 3:
      cout << "Multiplication of ";
      x1.print();
      cout << " and ";
      y1.print();
      cout << " is :" << endl;
      mul = x1 *y1;
      break;
    case 4:
      cout << "Division of ";
      x1.print();
      cout << " and ";
      y1.print();
      cout << " is :" << endl;
      div = x1 / y1;
      break;
    default:
      cout << "Invalid case!!";
  }
  return 0;
}