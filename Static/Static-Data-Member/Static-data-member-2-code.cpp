#include <iostream>
using namespace std;

class Box
{
public:
  static int objectCount;

  // Constructor definition
  /**
   * @brief Constructor for the Box class. Initializes the dimensions of the box.
   *
   * This constructor takes three optional parameters to set the length, breadth, and height of the box.
   * If no parameters are provided, the default dimensions are set to 2.0 for length, breadth, and height.
   *
   * @param l The length of the box. Default value is 2.0.
   * @param b The breadth of the box. Default value is 2.0.
   * @param h The height of the box. Default value is 2.0.
   *
   * @return No return value.
   */
  Box(double l = 2.0, double b = 2.0, double h = 2.0)
  {
    cout << "Constructor called." << endl;
    length = l;
    breadth = b;
    height = h;
    // Increase every time object is created
    objectCount++;
  }

  /**
   * @brief Calculates the volume of the box.
   *
   * This function calculates the volume of the box using the formula:
   * volume = length * breadth * height.
   *
   * @param None.
   *
   * @return The volume of the box as a double value.
   */
  double Volume()
  {
    return length * breadth * height;
  }

private:
  double length;  // Length of a box
  double breadth; // Breadth of a box
  double height;  // Height of a box
};

// Initialize static member of class
int Box::objectCount = 0;

/**
 * @brief The main function of the program.
 *
 * This function demonstrates the usage of the Box class by creating two instances of the Box class, Box1 and Box2.
 * It also prints the total number of Box objects created.
 *
 * @param void No parameters are required.
 *
 * @return int Returns 0 to indicate successful program execution.
 */
int main(void)
{
  Box Box1(3.3, 1.2, 1.5); // Declare box1 with dimensions 3.3, 1.2, and 1.5
  Box Box2(8.5, 6.0, 2.0); // Declare box2 with dimensions 8.5, 6.0, and 2.0

  // Print total number of objects created using the Box class
  cout << "Total objects: " << Box::objectCount << endl;

  return 0;
}
