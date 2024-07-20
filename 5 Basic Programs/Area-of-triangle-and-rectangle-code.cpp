/**
 * The given C++ program calculates and displays the area of a triangle and a rectangle based on user
 * input for their respective dimensions.
 *
 * @param b Base of the triangle
 * @param h The parameter `h` in the code represents the height of the triangle. It is used in the
 * calculation of the area of the triangle using the formula for the area of a triangle: 0.5 * base *
 * height.
 *
 * @return The code defines two functions `tarea` and `rarea` to calculate the area of a triangle and
 * rectangle respectively. In the `main` function, it prompts the user to enter the base and height of
 * a triangle, calculates the area of the triangle using the `tarea` function, and then prompts the
 * user to enter the length and breadth of a rectangle, calculates the area of the
 */

#include <iostream>
using namespace std;

int tarea(int b, int h)
{
  return 0.5 * b * h;
}

int rarea(int l, int b)
{
  return l * b;
}

// Main Function
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