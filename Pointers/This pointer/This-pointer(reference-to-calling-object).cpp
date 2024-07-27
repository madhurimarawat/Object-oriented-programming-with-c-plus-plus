#include <iostream>
using namespace std;

/*When local variable is same as data member */

class thischeck
{
private:
  int x = 89, y = 90;

public:
  /**
   * @brief Constructor for the thischeck class.
   *
   * Initializes the data members x and y with the provided values.
   *
   * @param x The initial value for the x data member.
   * @param y The initial value for the y data member.
   */
  thischeck(int x, int y)
  {
    this->x = x;
    this->y = y;
  }

  /**
   * @brief Sets the value of the x data member.
   *
   * This function allows setting the value of the x data member using the 'this' pointer.
   * It returns a reference to the current object to enable method chaining.
   *
   * @param x The new value for the x data member.
   * @return A reference to the current object.
   */
  thischeck &setx(int x)
  {
    this->x = x;
    return *this;
  }

  /**
   * @brief Sets the value of the y data member.
   *
   * This function allows setting the value of the y data member using the 'this' pointer.
   * It returns a reference to the current object to enable method chaining.
   *
   * @param y The new value for the y data member.
   * @return A reference to the current object.
   */
  thischeck &sety(int y)
  {
    this->y = y;
    return *this;
  }

  /**
   * @brief Prints the values of the x and y data members.
   *
   * This function outputs the values of the x and y data members to the standard output stream.
   * It is used to display the current state of the object.
   *
   * @return void
   */
  void print() { cout << "x =  " << x << "y =  " << y << endl; }
};

/**
 * @brief The main function of the program.
 *
 * This function demonstrates the usage of the 'thischeck' class by creating an object 't1',
 * setting its data members using the 'setx' and 'sety' methods, and then printing their values.
 *
 * @return 0 to indicate successful program execution.
 */
int main()
{
  thischeck t1(12, 34); // Create an object 't1' of 'thischeck' class with initial values 12 and 34.
  int x = 67;           // Declare and initialize a local variable 'x' with value 67.
  t1.setx(x).sety(98);  // Use the 'setx' and 'sety' methods of 't1' to set its data members with 'x' and 98 respectively.
  t1.print();           // Print the values of 'x' and 'y' data members of 't1'.
  return 0;             // Return 0 to indicate successful program execution.
}