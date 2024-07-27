#include <iostream>
using namespace std;
class Count
{
private:
  int a, b;

public:
  // Constructor to initialize count to 5

  /**
   * @brief Constructor to initialize count to 5 with specific values for 'a' and 'b'.
   *
   * This constructor initializes the private member variables 'a' and 'b' with the provided values.
   * If no values are provided, it defaults to 23 for 'a' and 13 for 'b'.
   *
   * @param a The initial value for 'a'. Default value is 23.
   * @param b The initial value for 'b'. Default value is 13.
   */

  Count() : a(23), b(13) {}
  // Count() : b(13){}
  //  Overload ++ when used as prefix

  // Overload ++ when used as postfix
  void operator++()
  {
    ++a;
    ++b;
  }
  //  Overload -- when used as prefix
  void operator--()
  {
    --a;
    --b;
  }
  /**
   * @brief Displays the current values of 'a' and 'b' in the Count object.
   *
   * This function prints the current values of 'a' and 'b' to the standard output stream (cout).
   * It is used to visualize the state of the Count object.
   *
   * @return void
   *
   * @note This function does not modify the Count object.
   */
  void display()
  {
    cout << "Count: " << a << endl;
    cout << "Count: " << b << endl;
  }
};

/**
 * @brief The entry point of the program.
 *
 * This function initializes two Count objects, count1 and count2.
 * It then calls the overloaded prefix increment operator (++count1) and the display function for count1.
 * After that, it calls the overloaded prefix decrement operator (--count2) and the display function for count2.
 * Finally, it returns 0 to indicate successful program execution.
 *
 * @return 0 to indicate successful program execution.
 */

int main()
{
  Count count1, count2;
  // Call the "void operator ++ ()" function
  ++count1;
  count1.display();
  --count2;
  count2.display();
  return 0;
}