// Including Header File
#include <iostream>
#include <conio.h>

// Using Namespace
using namespace std;

/**
 * @brief This is the main function of the program. It demonstrates exception handling in C++.
 *
 * @param argc The number of command-line arguments.
 * @param argv An array of command-line arguments.
 *
 * @return 0 if the program runs successfully, otherwise an error code.
 *
 * @details Inside the main function, we initialize two integer variables, 'a' and 'b', and an integer variable 'd'.
 * We then enter a try block, which is used to activate exception handling.
 * Inside the try block, we check if 'b' is equal to 0. If it is, we throw a custom exception by creating a string variable 'c' and throwing it.
 * If 'b' is not equal to 0, we perform the division 'a / b' and store the result in 'd'.
 * If an exception is thrown, we catch it in the catch block and print the exception message using cout.
 * Finally, we return 0 to indicate that the program runs successfully.
 */
int main()
{
  int a = 10, b = 0, d;
  // try block activates exception handling
  try
  {
    if (b == 0)
    {
      // throw custom exception
      string c = "Division by zero not possible";
      throw c;
    }
    else
    {
      d = a / b;
    }
  }
  catch (string ex) // catches exception
  {
    cout << ex;
  }
  return 0;
}