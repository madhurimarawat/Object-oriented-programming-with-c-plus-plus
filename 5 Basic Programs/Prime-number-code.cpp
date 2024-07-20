/**
 * The C++ program prints prime numbers up to 20.
 *
 * @return The main function in the C++ program is returning an integer value of 0.
 */

// Including Header Files
#include <iostream>

// Using namespace
using namespace std;

// Main Function
int main()
{
  // WAP in C++ to find print prime numbers upto 20
  int i;
  cout << "Prime numbers are:\n2" << endl;
  for (int i = 2; i <= 20; i++)
  {
    for (int j = 2; j < i; j++)
    {
      if (i % j == 0)
      {
        break;
      }
      else
      {
        if (i == j + 1)
          cout << i << endl;
      }
    }
  }

  return 0;
}