#include <iostream>
using namespace std;

/**
 * @brief This function returns the first parameter passed to it.
 *
 * This template function accepts two parameters of any type and returns the first one.
 * It is useful for demonstrating type deduction and function overloading in C++.
 *
 * @tparam X The type of the parameters.
 * @param a The first parameter.
 * @param b The second parameter.
 * @return The first parameter, of type X.
 */
template <class X>
X func(X a, X b)
{
  return a;
}

// Example usage
int main()
{
  cout << func(12, 90) << endl;
  cout << func(12.23, 90.32) << endl;
  cout << func('H', 'W') << endl;
}
