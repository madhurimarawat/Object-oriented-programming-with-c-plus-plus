/**
 * This program demonstrates exception handling in C++ by dividing two numbers.
 * The main function prompts the user to enter two numbers. It then attempts to divide the first number by the second.
 * If the second number is zero, it throws an exception. The exception is caught and an error message is displayed.
 * If the second number is not zero, the division result is displayed.
 */

// Including Header File
#include <iostream>

// Using Namespace
using namespace std;

/**
 * @brief This is the main function of the program. It demonstrates exception handling in C++ by dividing two numbers.
 *
 * @return 0 upon successful execution.
 *
 * @details The function prompts the user to enter two numbers. It then attempts to divide the first number by the second.
 * If the second number is zero, it throws an exception. The exception is caught and an error message is displayed.
 * If the second number is not zero, the division result is displayed.
 */
int main()
{
  // Exception Handling
  int a, b;
  cout << "Enter first number:";
  cin >> a;
  cout << "Enter second number:";
  cin >> b;
  try
  {
    if (b == 0)
    {
      throw b;
    }
    else
    {
      float c = float(a) / float(b);
      cout << c;
    }
  }
  catch (int i)
  {
    cout << "Denominator cannot be zero";
  }
}