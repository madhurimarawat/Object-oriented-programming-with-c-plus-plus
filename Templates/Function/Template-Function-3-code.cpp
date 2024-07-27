#include <iostream>
using namespace std;

/**
 * @brief This function is a template function that takes two parameters of the same type and prints them.
 *
 * @tparam p The type of the parameters.
 * @param a The first parameter to be printed.
 * @param b The second parameter to be printed.
 *
 * @return The function does not return a value. It prints the input parameters.
 *
 * @note This function is useful for debugging purposes to print the values of variables.
 *
 * @example
 * @code
 * func(12, 90);
 * func(12.23, 90.32);
 * func('H', 'W');
 * @endcode
 */
template <typename p>
p func(p a, p b)
{
  cout << a << '\t' << b << endl;
}

/**
 * @brief The main function that demonstrates the usage of the templated function 'func'.
 *
 * This function calls the 'func' function with different types of parameters (int, double, char)
 * to showcase its functionality.
 *
 * @return 0 upon successful execution.
 *
 * @see func
 *
 * @example
 * @code
 * main();
 * @endcode
 */
int main()
{
  func(12, 90);
  func(12.23, 90.32);
  func('H', 'W');
  return 0;
}
