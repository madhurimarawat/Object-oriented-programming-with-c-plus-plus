/**
 * This C++ program calculates the price based on the number of units entered by the user, applying
 * different rates for different ranges of units.
 *
 * @return The program returns 0 at the end of the main function, which indicates that the program
 * executed successfully.
 */

// Including Header Files
#include <iostream>

// Using namespace
using namespace std;

// Main Function
int main()
{
  int u, p;
  cout << "Enter numbers of units:\n";
  cin >> u;
  if ((u > 0) && (u <= 100))
  {
    p = u * 4;
  }
  else if ((u > 100) && (u <= 300))
  {
    p = u * 5;
  }
  else
  {
    p = u * 7;
  }
  cout << "Price is :" << p << "";
  return 0;
}
