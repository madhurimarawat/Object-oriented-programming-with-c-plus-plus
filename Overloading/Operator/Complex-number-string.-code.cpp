#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;
class Complex
{
private:
  int real, imag;

public:
  /**
   * @brief Default constructor for the Complex class.
   *
   * Initializes the real and imaginary parts of the complex number to 0.
   */
  Complex()
  {
    real = imag = 0;
  }

  /**
   * @brief Constructor for the Complex class.
   *
   * Initializes a complex number with given real and imaginary parts.
   *
   * @param r The real part of the complex number.
   * @param i The imaginary part of the complex number.
   */
  Complex(int r, int i)
  {
    real = r;
    imag = i;
  }

  /**
   * @brief Converts the complex number to a string representation.
   *
   * This function generates a string representation of the complex number in the format "(real+imaginaryi)".
   * If the imaginary part is zero, it is omitted from the string.
   * If the imaginary part is negative, its absolute value is used and a minus sign is added before it.
   *
   * @return A string representation of the complex number.
   */
  string to_string()
  {
    stringstream ss;
    if (imag >= 0)
      ss << "(" << real << "+" << imag << "i" << ")";
    else
      ss << "(" << real << "+" << abs(imag) << "i" << ")";
    return ss.str();
  }
  Complex operator+(Complex c2)
  {
    Complex ret;
    ret.real = real + c2.real;
    ret.imag = imag + c2.imag;
    return ret;
  }
};

/**
 * @brief Main function to demonstrate the usage of the Complex class.
 *
 * This function creates two Complex objects, c1 and c2, with given real and imaginary parts.
 * It then adds these two complex numbers using the overloaded '+' operator and stores the result in the 'res' variable.
 * Finally, it prints the string representation of the result using the 'to_string' method of the Complex class.
 *
 * @return 0 to indicate successful program execution.
 */
int main()
{
  Complex c1(8, -5), c2(2, 3); ///< Initialize two Complex objects with given real and imaginary parts.
  Complex res = c1 + c2;       ///< Add the two complex numbers using the overloaded '+' operator.
  cout << res.to_string();     ///< Print the string representation of the result.
  return 0;
}
