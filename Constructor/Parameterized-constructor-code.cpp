/**
 * This program demonstrates the usage of a class named calc, which includes a parameterized constructor and a member function.
 * The parameterized constructor initializes two integer member variables, a and b, and prints their values.
 * The member function add() calculates the sum of a and b, stores the result in a private member variable, and prints the result.
 * The main function prompts the user to enter two integers, creates an instance of the calc class using the entered values,
 * and calls the add() function of the calc object to calculate and print the sum of the entered numbers.
 */

// Including Header File
#include <iostream>

// Using Namespace
using namespace std;

// Definition of calc Class
class calc
{
  // wap for  parameterized constructor
public:
  int a;
  int b;

private:
  int sum;

public:
  /**
   * @brief Constructor for the calc class that initializes two integer values.
   *
   * This constructor takes two integer parameters, n1 and n2, and assigns them to the
   * member variables a and b, respectively. It then prints a message indicating that
   * the parameterized constructor is being called, along with the values of a and b.
   *
   * @param n1 The first integer value to be assigned to the member variable a.
   * @param n2 The second integer value to be assigned to the member variable b.
   */

  calc(int n1, int n2)
  {
    a = n1;
    b = n2;
    cout << " Parameterized Constructor is getting called:" << endl;
    cout << "Value of a is:" << a << endl;
    cout << "Value of b is:" << b << endl;
  }

  /**
   * @brief Adds the values of member variables a and b and prints the result.
   *
   * This function calculates the sum of the member variables a and b, stores the result in the
   * private member variable sum, and then prints the result to the standard output stream.
   *
   * @return void
   *
   * @note This function does not return any value. It only performs an operation and prints the result.
   */
  void add()
  {
    sum = a + b;
    cout << "Sum is:" << sum << endl;
  }
};

/**
 * @brief The main function of the program.
 *
 * This function prompts the user to enter two integers, creates an instance of the calc class using the entered values,
 * and calls the add() function of the calc object to calculate and print the sum of the entered numbers.
 *
 * @return 0 to indicate successful program execution.
 */
int main()
{
  int x, y;
  cout << "Enter first number:";
  cin >> x;
  cout << "Enter second number:";
  cin >> y;
  calc c1(x, y);
  c1.add();
  return 0;
}
