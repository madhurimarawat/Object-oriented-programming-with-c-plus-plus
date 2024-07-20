/**
 * This C++ program finds the largest number in an array entered by the user.
 *
 * @return The program returns 0, which indicates that the program executed successfully without any
 * errors.
 */

// WAP in C++ to find largest number of array

// Including Header Files
#include <iostream>

// Using namespace
using namespace std;

// Main Function
int main()
{
  int n, a[15], l = 0;
  cout << "Enter the number of element:";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cout << "Enter element " << i + 1 << ":";
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (a[0] < a[i])
    {
      a[0] = a[i];
    }
  }
  l = a[0];
  cout << "Largest number of the array is:" << l << endl;
  return 0;
}