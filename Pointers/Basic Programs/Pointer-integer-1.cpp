#include <iostream>
using namespace std;

/**
 * @brief This is the main function of the program. It demonstrates the usage of pointers in C++.
 *
 * @return 0 on successful execution.
 *
 * @details This function initializes an integer variable 'x' with the value 90. It then declares a pointer 'point'
 *          and assigns the address of 'x' to 'point'. The function then prints the address and value of 'x',
 *          as well as the address and dereferenced value of 'point'.
 */
int main()
{
  int *point, x = 90;
  point = &x;
  cout << "X address is:" << &x;
  cout << "\nX value is:" << x;
  cout << "\nPointer is:" << point;
  cout << "\nPointer value is:" << *point;
  return 0;
}