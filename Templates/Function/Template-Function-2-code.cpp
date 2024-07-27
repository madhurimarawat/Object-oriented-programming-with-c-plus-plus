#include <iostream>
using namespace std;

/**
 * @brief This function returns the first parameter passed to it.
 *
 * This template function accepts two parameters of any type and returns the first one.
 * It is designed to demonstrate the concept of function overloading and template specialization.
 *
 * @tparam t The type of the parameters.
 * @param a The first parameter.
 * @param b The second parameter.
 *
 * @return The first parameter (a).
 *
 * @note This function does not use the second parameter (b) in its implementation.
 *
 * @example
 * \code
 *   cout << func(12, 90) << endl;       // Outputs: 12
 *   cout << func(12.23, 90.32) << endl; // Outputs: 12.23
 *   cout << func('H', 'W') << endl;     // Outputs: H
 * \endcode
 */
template <typename t>
t func(t a, t b)
{
  return a;
  return b;
}

// Driver code to test the function
int main()
{
  cout << func(12, 90) << endl;
  cout << func(12.23, 90.32) << endl;
  cout << func('H', 'W') << endl;
}
