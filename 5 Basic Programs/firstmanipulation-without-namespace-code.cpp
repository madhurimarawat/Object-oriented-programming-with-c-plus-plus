/**
 * This C++ program prompts the user to enter two numbers and then displays the entered numbers.
 *
 * @return The `main` function is returning an integer value of 0.
 */

// Including Header Files
#include <iostream>

// Main Function
int main()
{
  int a, b;
  std::cout << "Enter two numbers:\n";
  std::cin >> a >> b;
  std::cout << "Entered numbers are:" << a << " \n"
            << b;
  return 0;
}