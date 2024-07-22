/**
 * @brief This file contains the implementation of a simple class 'demo' that demonstrates
 * the usage of input and output operations on private member variables.
 *
 * The 'demo' class has two private integer member variables 'a' and 'b'. It provides
 * two public member functions: 'input' to accept user input and store it in the private
 * member variables, and 'show' to display the values of the private member variables.
 *
 * The main function creates an instance of the 'demo' class, calls the 'input' and 'show'
 * methods, and then returns 0 to indicate successful program termination.
 */

// Including Header File
#include <iostream>

// Using Namespace
using namespace std;

/// @brief Class for demo
class demo
{
private:
  int a, b;

public:
  /**
   * @brief This function is used to input two integer values into the class object.
   *
   * This function prompts the user to enter two integer values and stores them in the
   * private member variables 'a' and 'b' of the class.
   *
   * @return This function does not return any value.
   */

  void input()
  {
    cout << "Enter value: ";
    cin >> a >> b;
  }

  /**
   * @brief This function is used to display the values of the private member variables 'a' and 'b'.
   *
   * This function outputs the values of the private member variables 'a' and 'b' to the standard output stream.
   * The values are separated by a tab character.
   *
   * @return This function does not return any value.
   */

  void show()
  {
    cout << a << "\t" << b;
  }
};

/**
 * @brief The main function of the program.
 *
 * This function creates an instance of the 'demo' class, calls the 'input' and 'show' methods,
 * and then returns 0 to indicate successful program termination.
 *
 * @return 0 - Indicates successful program termination.
 */

int main()
{
  demo ob;
  ob.input();
  ob.show();
  return 0;
}
