/**
 * The function finds the largest of three numbers entered by the user.
 *
 * @param a The parameter `a` in the `large` function represents the first number entered by the user
 * (`n1`). It is compared with the other two numbers (`b` and `c`) to determine if it is the largest
 * among the three.
 * @param b In the code provided, the parameter `b` represents the second integer input by the user. It
 * is one of the three numbers for which the program will determine the largest number among them.
 * @param c c: The third number entered by the user
 */

// Including Header Files
#include <iostream>

// Using namespace
using namespace std;

// Function to find largest of 3 Numbers
void large(int a, int b, int c)
{
  if (a > b)
  {
    if (a > c)
    {
      cout << "The largest number is:" << a;
    }
    else
    {
      cout << "The largest number is:" << c;
    }
  }
  else if (b > c)
  {
    cout << "The largest number is:" << b;
  }
  else
  {
    cout << "The largest number is:" << c;
  }
}

// Main Function
int main()
{
  int n1, n2, n3;
  cout << "Enter number 1:" << endl;
  cin >> n1;
  cout << "Enter number 2:" << endl;
  cin >> n2;
  cout << "Enter number 3:" << endl;
  cin >> n3;
  large(n1, n2, n3);
  return 0;
}