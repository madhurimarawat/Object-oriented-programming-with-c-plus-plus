// Including Header File
#include <iostream>

// Using Namespace
using namespace std;

/**
 * @brief This is the main function of the program. It demonstrates exception handling in C++.
 *
 * The function prompts the user to enter two numbers, then performs division.
 * If the second number is zero, it throws an exception. The exception is caught and an error message is displayed.
 *
 * @return The function does not return any value.
 */
int main()
{
  // Exception Handling
  int a, b;
  cout << "Enter first number;\n";
  cin >> a;
  cout << "Enter second number;\n";
  cin >> b;
  try
  {
    if (b == 0)
    {
      throw b;
    }
    int c = a / b;
    cout << c;
  }
  catch (int)
  {
    cout << "Denominator cannot be zero" << endl;
  }
}