#include <iostream>
using namespace std;
class complex
{
public:
  int x, y;

public:
  /**
   * @brief This function is used to input a complex number from the user.
   *
   * The function prompts the user to enter a complex number in the form a+ib.
   * It then takes the real and imaginary parts as input and stores them in the
   * corresponding data members of the complex class.
   *
   * @return void
   *
   * @note This function does not return any value, but it modifies the data members
   *       of the complex class.
   */
  void input()
  {
    int x1, y1;
    cout << "Enter complex number in the form a+ib\n";
    cout << "Enter real and imaginary part of complex number:";
    cin >> x1 >> y1;
    x = x1;
    y = y1;
  }

  /**
   * @brief Prints the complex number in the form a+ib.
   *
   * This function prints the complex number represented by the current object
   * in the form a+ib, where 'a' is the real part and 'b' is the imaginary part.
   *
   * @return void
   *
   * @note This function does not return any value, but it prints the complex number
   *       to the standard output stream (cout).
   */
  void print()
  {
    cout << x << " + " << y << "i";
  }
  complex operator+(complex &y1)
  {
    complex A;
    A.x = x + y1.x;
    A.y = y + y1.y;
    cout << "ANSWER IS: ";
    cout << abs(A.x) << " + " << abs(A.y) << "i" << endl;
    return A;
  }
  complex operator-(complex &y1)
  {
    complex A;
    A.x = x - y1.x;
    A.y = y - y1.y;
    cout << "ANSWER IS: ";
    cout << abs(A.x) << " + " << abs(A.y) << "i" << endl;
    return A;
  }
  complex operator*(complex &y1)
  {
    complex A;
    A.x = x * y1.x;
    A.y = y * y1.y;
    cout << "ANSWER IS: ";
    cout << abs(A.x) << " + " << abs(A.y) << "i" << endl;
    return A;
  }
  complex operator/(complex &y1)
  {
    complex A;
    A.x = x / y1.x;
    A.y = y / y1.y;
    cout << "ANSWER IS: ";
    cout << abs(A.x) << " + " << abs(A.y) << "i" << endl;
    return A;
  }
};

/**
 * @brief The main function of the program.
 *
 * This function serves as the entry point for the program. It creates two complex numbers,
 * prompts the user to enter their values, and then performs addition, subtraction, multiplication,
 * or division based on user input. The results are printed to the console.
 *
 * @return 0 - Indicates successful program execution.
 *
 * @note The program assumes that the user will enter valid input for complex numbers and
 *       the operation choice.
 */
int main()
{
  complex x1, y1, sum, sub, mul, div;
  int c;

  // Input complex numbers from the user
  x1.input();
  y1.input();

  // Prompt the user to choose an operation
  cout << "Enter 1 for Addition, 2 for subtraction, 3 for Multiplication or 4 for Division: ";
  cin >> c;

  // Perform the chosen operation and print the result
  switch (c)
  {
  case 1:
    cout << "Addition of ";
    x1.print();
    cout << " and ";
    y1.print();
    cout << " is :" << endl;
    sum = x1 + y1;
    break;
  case 2:
    cout << "Subtraction of ";
    x1.print();
    cout << " and ";
    y1.print();
    cout << " is :" << endl;
    sub = x1 - y1;
    break;
  case 3:
    cout << "Multiplication of ";
    x1.print();
    cout << " and ";
    y1.print();
    cout << " is :" << endl;
    mul = x1 * y1;
    break;
  case 4:
    cout << "Division of ";
    x1.print();
    cout << " and ";
    y1.print();
    cout << " is :" << endl;
    div = x1 / y1;
    break;
  default:
    cout << "Invalid case!!";
  }

  return 0;
}