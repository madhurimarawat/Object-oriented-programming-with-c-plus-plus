/**
 * @brief This program demonstrates the usage of a Circle class to compute the area of a circle.
 *
 * The Circle class has a private data member 'radius' and a public method 'compute_area' to calculate the area of the circle.
 * The 'compute_area' method takes a radius as a parameter, calculates the area using the formula: area = π * r^2, and prints the radius and the computed area to the standard output.
 *
 * The main function creates an instance of the Circle class, calls the 'compute_area' method with a radius of 1.5, and handles any potential errors.
 *
 * @note The program does not validate the input radius. It assumes that the caller has already checked the validity of the input.
 *
 * @note The program prints the radius and the computed area to the standard output.
 */

// Including Header File
#include <iostream>

// Using Namespace
using namespace std;

/// @brief Class for Circle calculations
class Circle
{
private:
  double radius;

public:
  /**
   * @brief This function computes the area of a circle given its radius.
   *
   * @param r The radius of the circle. It should be a positive value.
   *
   * @return The area of the circle. The result is calculated using the formula: area = π * r^2.
   *
   * @note This function does not validate the input radius. It assumes that the caller has already checked the validity of the input.
   *
   * @note The function prints the radius and the computed area to the standard output.
   */

  double compute_area(double r)
  {
    radius = r;
    double area = 3.14 * radius * radius;
    cout << "Radius is: " << radius << endl;
    cout << "Area is: " << area;
  }
};

/**
 * @brief The entry point of the program.
 *
 * @return An integer representing the exit status of the program. A return value of 0 indicates successful execution.
 *
 * @note This function demonstrates the usage of a Circle object by creating an instance, calling the compute_area method, and handling any potential errors.
 */

int main()
{
  Circle obj;

  // trying to access private data member
  // obj.radius = 1.5;
  obj.compute_area(1.5);

  return 0;
}
