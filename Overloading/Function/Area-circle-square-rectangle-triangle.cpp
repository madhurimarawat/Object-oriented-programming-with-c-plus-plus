#include <iostream>
using namespace std;

// WAP in C++ to find out the area of circle,square, rectangle & triangle using function overloading.

/**
 * @brief Calculates and prints the area of a circle.
 *
 * This function takes a float value representing the radius of a circle,
 * calculates the area using the formula π*r^2, and prints the result.
 *
 * @param r The radius of the circle. It must be a positive value.
 *
 * @return void. The function does not return a value.
 */
void area(float r)
{
  float c = 3.14 * r * r;
  cout << "Area of circle is:" << c << endl;
}

/**
 * @brief Calculates and prints the area of a square.
 *
 * This function takes an integer value representing the side of a square,
 * calculates the area using the formula s^2, and prints the result.
 *
 * @param s The side of the square. It must be a positive value.
 *
 * @return void. The function does not return a value.
 */
void area(int s)
{
  int sq = s * s;
  cout << "Area of square is:" << sq << endl;
}

/**
 * @brief Calculates and prints the area of a rectangle.
 *
 * This function takes two integer values representing the length and breadth of a rectangle,
 * calculates the area using the formula length*breadth, and prints the result.
 *
 * @param l The length of the rectangle. It must be a positive value.
 * @param b The breadth of the rectangle. It must be a positive value.
 *
 * @return void. The function does not return a value.
 */
void area(int l, int b)
{
  int r = l * b;
  cout << "Area of rectangle is:" << r << endl;
}
/**
 * @brief Calculates and prints the area of a triangle.
 *
 * This function takes two float values representing the base and height of a triangle,
 * calculates the area using the formula 0.5*base*height, and prints the result.
 *
 * @param b The base of the triangle. It must be a positive value.
 * @param h The height of the triangle. It must be a positive value.
 *
 * @return void. The function does not return a value. It only prints the calculated area.
 */
void area(float b, float h)
{
  float t = 0.5 * b * h;
  cout << "Area of triangle is:" << t << endl;
}

/**
 * @brief The main function of the program.
 *
 * This function prompts the user to enter the dimensions of a square, rectangle, circle, and triangle,
 * then calls the appropriate area function to calculate and print the area of each shape.
 *
 * @return 0. The function does not return a value.
 */
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
