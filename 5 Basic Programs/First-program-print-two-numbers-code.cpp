/**
 * This C++ program prompts the user to enter two numbers and then displays the entered numbers.
 *
 * @return The main function is returning an integer value of 0.
 */

// Including Header Files
#include <iostream>

// Using namespace
using namespace std;

// Main Function
int main()
{
  int a, b;
  cout << "Enter two numbers:\n";
  cin >> a >> b;
  cout << "Entered numbers are:" << a << "\n"
       << "" << b;
  return 0;
}
