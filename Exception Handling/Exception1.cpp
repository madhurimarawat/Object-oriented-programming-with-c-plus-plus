/**
 * This program demonstrates exception handling in C++. It initializes two integer variables, a and b,
 * and performs a division operation. If the denominator (b) is zero, it throws an exception.
 * The exception is caught and an error message is displayed.
 */

// Including Header File
#include <iostream>

// Using Namespace
using namespace std;

/*std::cout<<a/b; Abnormally terminate program*/
/**
 * @brief Main function to demonstrate exception handling in C++
 *
 * This function initializes two integer variables, a and b, and then performs a division operation.
 * If the denominator (b) is zero, it throws an exception. The exception is caught and an error message is displayed.
 *
 * @param none
 * @return int - Returns 0 to indicate successful program execution
 */
int main()
{
  // Exception Handling
  int a = 10, b = 0;
  try
  {
    // Dosen't work: int c = a/0; throw c;
    if (b == 0)
    {
      throw b;
    }
    else
    {
      int c = a / b;
      cout << c;
    }
  }
  catch (int)
  {
    cout << "Denominator cannot be zero" << endl;
  }
}