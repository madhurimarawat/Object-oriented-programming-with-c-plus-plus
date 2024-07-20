/**
 * The given C++ program takes input for two matrices, multiplies them, and outputs the result matrix.
 *
 * @return The main function in the C++ program is returning an integer value of 0.
 */

// WAP in C++ to multiply matrix

// Including Header Files
#include <iostream>

// Using namespace
using namespace std;

// Main Function
int main()
{
  int a[10][10], b[10][10], mul[10][10], r, c, i, j, k, p = 1, q = 1;
  cout << "Enter the number of row:" << endl;
  cin >> r;
  cout << "Enter the number of column:" << endl;
  cin >> c;
  cout << "Enter the first matrix element" << endl;
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      cout << "Element" << p << ":" << endl;
      cin >> a[i][j];
      p++;
    }
  }
  cout << "Enter the second matrix element" << endl;
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      cout << "Element" << q << ":" << endl;
      cin >> b[i][j];
      q++;
    }
  }
  cout << "Multiplication of the matrix:" << endl;
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      mul[i][j] = 0;
      for (k = 0; k < c; k++)
      {
        mul[i][j] += a[i][k] * b[k][j];
      }
    }
  }
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      cout << mul[i][j] << "\t";
    }
    cout << "\n";
  }
  return 0;
}