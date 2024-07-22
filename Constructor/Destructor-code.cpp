/**
 * @brief This program demonstrates the usage of a simple point class in C++.
 *
 * The point class has attributes for length and provides methods to set and retrieve the length value.
 * The main function creates two point objects, sets their lengths, and prints their lengths.
 */

// Including Header File
#include <iostream>

// Using Namespace
using namespace std;

// Definition of Point Class
class point
{
public:
  /**
   * @brief Sets the length of the point object.
   *
   * This function updates the Length attribute of the point object with the provided length value.
   *
   * @param len The new length value to be assigned to the point object.
   *
   * @return void
   */
  void setLength(int len);

  /**
   * @brief Retrieves the length of the point object.
   *
   * This function retrieves the current length value of the point object.
   *
   * @return An integer representing the length of the point object.
   */

  int getLength(void);

  /**
   * @brief Default constructor for the point class.
   *
   * This constructor initializes a new point object with default values.
   * The Length attribute is set to 0.
   *
   * @return void
   */
  point();

  /**
   * @brief Destructor for the point class.
   *
   * This destructor is responsible for cleaning up the resources allocated by the point object.
   * It prints a message indicating that the object is being deleted and displays its current length.
   *
   * @return void
   */
  ~point();

private:
  double Length;
};

/**
 * @brief Default constructor for the point class.
 *
 * This constructor initializes a new point object with default values.
 * The Length attribute is set to 0.
 *
 * @return void
 */
point::point(void)
{
  cout << "object is being created" << endl;
}

/**
 * @brief Destructor for the point class.
 *
 * This destructor is responsible for cleaning up the resources allocated by the point object.
 * It prints a message indicating that the object is being deleted and displays its current length.
 *
 * @return void
 */
point::~point(void)
{
  cout << "object is being deleted:" << getLength() << endl;
}

/**
 * @brief Sets the length of the point object.
 *
 * This function updates the Length attribute of the point object with the provided length value.
 *
 * @param len The new length value to be assigned to the point object. It should be a non-negative integer.
 *
 * @return void
 */
void point::setLength(int len)
{
  Length = len;
}

/**
 * @brief Retrieves the length of the point object.
 *
 * This function retrieves the current length value of the point object.
 *
 * @return An integer representing the length of the point object.
 *         The length value is a non-negative integer.
 */
int point::getLength(void)
{
  return Length;
}

/**
 * @brief The main function of the program.
 *
 * This function demonstrates the usage of the point class by creating two point objects,
 * setting their lengths, and printing their lengths.
 *
 * @return An integer representing the exit status of the program.
 *         A return value of 0 indicates successful execution.
 */
int main()
{
  point l;
  l.setLength(90);
  cout << "Length of object is:" << l.getLength() << endl;
  point l1;
  l1.setLength(60);
  cout << "Length of object is:" << l1.getLength() << endl;
  return 0;
}