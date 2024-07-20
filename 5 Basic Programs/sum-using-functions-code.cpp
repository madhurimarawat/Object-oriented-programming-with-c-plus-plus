/**
 * This C++ program takes two numbers as input, calculates their sum and multiplication, and then
 * displays the results.
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
  int a, b, sum, mul;
  cout << "Enter two numbers:\n";
  cin >> a >> b;
  sum = a + b;
  mul = a * b;
  cout << "Sum of number " << a << " and " << b << " is  " << sum << endl;
  cout << "Multiplication of number  " << a << " and " << b << " is  " << mul << endl;
  return 0;
}