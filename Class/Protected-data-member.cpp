/**
 * @brief This program demonstrates the usage of a Circle class and its inherited class.
 *
 * The Circle class contains a protected member variable 'radius' and a public member function 'compute_area'
 * to calculate and print the area of a circle. The 'in' class inherits from the Circle class and contains
 * a public member function 'p' to print the radius of the circle.
 *
 * The main function creates instances of the Circle and 'in' classes, calls their member functions,
 * and demonstrates the usage of the Circle class's 'compute_area' function.
 */

// Including Header File
#include <iostream>

// Using Namespace
using namespace std;

/// @brief Class for Circle calculations
class Circle
{
protected:
  double radius = 90;

public:
  /**
   * @brief Computes the area of a circle given its radius.
   *
   * This function takes a double precision floating-point number representing the radius of a circle,
   * calculates the area using the formula 3.14 * radius * radius, and prints the radius and area.
   *
   * @param r The radius of the circle.
   * @return The area of the circle.
   */

  double compute_area(double r)
  {
    radius = r;
    double area = 3.14 * radius * radius;
    cout << "Radius is: " << radius << endl;
    cout << "Area is: " << area << endl;
  }
};
class in : public Circle
{
public:
  /**
   * @brief Prints the radius of the circle.
   *
   * This function prints the value of the radius member variable of the Circle class.
   * It is a public member function of the in class, which inherits from the Circle class.
   *
   * @return void. This function does not return any value.
   */

  void p()
  {
    cout << "Radius is: " << radius << endl;
  }
};

/**
 * @brief The main function of the program.
 *
 * This function creates instances of the Circle and in classes, calls their member functions,
 * and demonstrates the usage of the Circle class's compute_area function.
 *
 * @return 0 to indicate successful program execution.
 */

int main()
{
  Circle obj;
  // trying to access protected data member
  // obj.radius = 1.5;
  obj.compute_area(1.5);
  in i;
  i.p();
  return 0;
}
