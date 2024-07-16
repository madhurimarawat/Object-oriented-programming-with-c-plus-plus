#include <iostream>
using namespace std;
//WAP in C++ to find out the area of circle,square, rectangle & triangle using function overloading.
void area(float r)
{
  float c = 3.14 * r *r;
  cout << "Area of circle is:" << c << endl;
}
void area(int s)
{
  int sq = s *s;
  cout << "Area of square is:" << sq << endl;
}
void  area(int l, int b)
{
  int r = l *b;
  cout << "Area of rectangle is:" << r << endl;
}
void area(float b, float h)
{
  float t = 0.5 * b *h;
  cout << "Area of triangle is:" << t << endl;
}
int main()
{
  int s, l, b;
  float r, bs, ht;
  cout << "Enter side of a square:";
  cin >> s;
  cout << "Enter length and breadth of rectangle:";
  cin >> l >> b;
  cout << "Enter radius of circle:";
  cin >> r;
  cout << "Enter base and height of triangle:";
  cin >> bs >> ht;
  area(r);
  area(s);
  area(l, b);
  area(bs, ht);
  /*Enter side of a square:10
  Enter length and breadth of rectangle:12 13
  Enter radius of circle:2.33
  Enter base and height of triangle:15 67
  Area of circle is:17.0467
  Area of square is:100
  Area of rectangle is:156
  Area of triangle is:502.5 */
  return 0;
}
