#include <iostream>
using namespace std;
class Cal
{
public:
  /**
   * @brief Adds two integers together.
   *
   * This function takes two integers as input and returns their sum.
   *
   * @param a The first integer to add.
   * @param b The second integer to add.
   *
   * @return The sum of the two input integers.
   */
  int add(int a, int b)
  {
    return a + b;
  }
  /**
   * @brief Adds three integers together.
   *
   * This function takes three integers as input and returns their sum.
   *
   * @param a The first integer to add.
   * @param b The second integer to add.
   * @param c The third integer to add.
   *
   * @return The sum of the three input integers.
   */
  int add(int a, int b, int c)
  {
    return a + b + c;
  }
};

/**
 * @brief Main function to demonstrate the usage of the Cal class.
 *
 * This function creates an instance of the Cal class, calls its add() method with two and three arguments,
 * and prints the results to the console.
 *
 * @return 0 to indicate successful program execution.
 */
int main()
{
  Cal C;
  cout << C.add(10, 20) << endl; // Prints the sum of 10 and 20.
  cout << C.add(12, 20, 23);     // Prints the sum of 12, 20, and 23.
  return 0;
}
