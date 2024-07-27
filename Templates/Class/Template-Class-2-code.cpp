#include <iostream>
using namespace std;
template <class C>
class A
{
private:
  C a, b;

public:
  /**
   * @brief Constructor for the class A.
   *
   * This constructor initializes the private member variables 'a' and 'b' with the provided values.
   *
   * @param x The first value of type C to initialize 'a'.
   * @param y The second value of type C to initialize 'b'.
   */
  A(C x, C y)
  {
    a = x;
    b = y;
  }

  /**
   * @brief Displays the addition of private member variables 'a' and 'b'.
   *
   * This function prints the result of the addition of 'a' and 'b' to the console.
   * It also calls the 'add' function to perform the addition operation.
   *
   * @return void
   */
  C show()
  {
    cout << "The Addition of " << a << " and  " << b << " is: " << add() << endl;
  }

  /**
   * @brief Performs addition of private member variables 'a' and 'b'.
   *
   * This function adds the values of 'a' and 'b' and returns the result.
   *
   * @param none
   *
   * @return C The result of the addition of 'a' and 'b'.
   */
  C add()
  {
    C c = a + b;
    return c;
  }
};

/**
 * @brief The main function of the program.
 *
 * This function demonstrates the usage of the class A with different data types.
 * It creates instances of the class A with integer, float, and double data types,
 * initializes them with specific values, and calls the 'show' function to display the results.
 *
 * @return int 0, indicating successful program execution.
 */

int main()
{
  A<int> intadd(8, 6); // Create an instance of A with integer data type
  intadd.show();       // Display the result of the addition

  // Uncomment the following lines to test with float and double data types
  // A<float> addfloat(3.5, 2.6);
  // A<double> adddouble(2.156, 5.234);

  // Uncomment the following lines to display the results for float and double data types
  // addfloat.show();
  // adddouble.show();

  // Uncomment the following line to add a newline character
  // cout << endl;

  return 0; // Indicate successful program execution
}