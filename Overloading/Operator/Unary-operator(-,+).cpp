#include <iostream>
using namespace std;
class Count
{
private:
  int a, b;

public:
  // Constructor to initialize count to 5

  /**
   * @brief Constructor to initialize count to specific values.
   *
   * This constructor initializes the private member variables 'a' and 'b' with the provided values.
   * If no values are provided, it initializes 'a' with -23 and 'b' with 13.
   *
   * @param a The initial value for 'a'. Default value is -23.
   * @param b The initial value for 'b'. Default value is 13.
   */

  Count() : a(-23), b(13) {}
  // Count() : b(13){}
  //  Overload + when used as prefix
  void operator+()
  {
    +a;
    +b;
  }
  void operator-()
  {
    a = -a;
    b = -b;
  }

  /**
   * @brief Displays the current values of 'a' and 'b' in the Count object.
   *
   * This function prints the current values of 'a' and 'b' to the standard output stream (cout).
   * It is used to visualize the state of the Count object.
   *
   * @return void: This function does not return any value.
   */
  void display()
  {
    cout << "Count: " << a << endl;
    cout << "Count: " << b << endl;
  }
};

/**
 * @brief The main function of the program.
 *
 * This function demonstrates the usage of the Count class by creating two instances,
 * applying unary operators to them, and displaying their current values.
 *
 * @return int: The function returns 0 to indicate successful program execution.
 */
int main()
{
  Count count1, count2;

  // Call the "void operator + ()" function
  +count1;
  count1.display();

  // Call the "void operator - ()" function
  -count2;
  count2.display();

  return 0;
}