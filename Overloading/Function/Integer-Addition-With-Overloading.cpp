#include <iostream>
using namespace std;
class calc
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
  float add(int a, int b, int c)
  {
    return a + b + c;
  }
};

/**
 * @brief Main function to demonstrate the usage of the calc class.
 *
 * This function creates an instance of the calc class, calls its add() method with two and three parameters,
 * and prints the results to the console.
 *
 * @return 0 to indicate successful program execution.
 */
int main()
{
  calc c;
  cout << c.add(12, 34) << endl;     // Calls the add() method with two parameters.
  cout << c.add(10, 20, 90) << endl; // Calls the add() method with three parameters.
  return 0;
}