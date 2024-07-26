#include <iostream>
#include <stdio.h>
using namespace std;
class calculation
{
  // wap for multiple inheritance
public:
  int a;
  int b;

private:
  int sum;

public:
  /**
   * @brief Constructor for the calculation class.
   *
   * This constructor initializes the base class for the calculation operations.
   * It prints a message indicating that the calculation Base class constructor has been called.
   */
  calculation()
  {
    cout << "calculation Base class constructor\n";
  }

  /**
   * @brief Adds two integers and prints the result.
   *
   * This function takes two integers as input, adds them together, and prints the result.
   *
   * @param a The first integer to be added.
   * @param b The second integer to be added.
   *
   * @return void - This function does not return a value.
   */
  void add(int a, int b)
  {
    sum = a + b;
    cout << "Sum is:" << sum << endl;
  }
};

// class calculation3
class calculation2
{
  // derived class2
public:
  int c;
  int d;

private:
  int mul1;

public:
  /**
   * @brief Constructor for the calculation2 class.
   *
   * This constructor initializes the derived class for the calculation operations.
   * It prints a message indicating that the calculation2 Derived class constructor has been called.
   */
  calculation2()
  {
    cout << "calculation2 Derived class constructor\n";
  }

  /**
   * @brief Multiplies two integers and prints the result.
   *
   * This function takes an integer 'c' from the base class and multiplies it with the second parameter 'd'.
   * The result is stored in the 'mul1' private member variable and then printed to the console.
   *
   * @param c The integer from the base class to be multiplied. This parameter is inherited from the calculation class.
   * @param d The second integer to be multiplied.
   *
   * @return void - This function does not return a value.
   */

  void mul(int, int d)
  {
    mul1 = c * d;
    cout << "Multiplication is:" << mul1 << endl;
  }
};

// derived class solve
class solve : public calculation, calculation2
{
public:
  int u, v;

  /**
   * @brief Initializes the solve class with two integers and calls the add function.
   *
   * This function takes two integers as input, assigns them to the 'u' and 'v' member variables,
   * and then calls the 'add' function of the calculation base class with the 'u' and 'v' values.
   *
   * @param u1 The first integer to be used for the calculation. This value is assigned to the 'u' member variable.
   * @param v1 The second integer to be used for the calculation. This value is assigned to the 'v' member variable.
   *
   * @return void - This function does not return a value.
   */

  void start(int u1, int v1)
  {
    u = u1;
    v = v1;
    add(u, v);
  }

private:
  int w, x;

public:
  /**
   * @brief Default constructor for the solve class.
   *
   * This constructor initializes the solve class and prints a message indicating that the Solve Derived class constructor has been called.
   * It does not take any parameters and does not return a value.
   */
  solve()
  {
    cout << "Solve Derived  class constructor\n";
  }

  /**
   * @brief Initializes the solve class with two integers and calls the mul function.
   *
   * This function takes two integers as input, assigns them to the 'w' and 'x' member variables,
   * and then calls the 'mul' function of the calculation2 derived class with the 'w' and 'x' values.
   *
   * @param w1 The first integer to be used for the calculation. This value is assigned to the 'w' member variable.
   * @param x1 The second integer to be used for the calculation. This value is assigned to the 'x' member variable.
   *
   * @return void - This function does not return a value. It only performs calculations and function calls.
   */
  void init(int w1, int x1)
  {
    w = w1;
    x = x1;
    mul(w, x);
  }
};

/**
 * @brief The main function of the program.
 *
 * This function prompts the user to enter two numbers, creates two instances of the 'solve' class,
 * and calls the 'start' and 'init' methods of these instances with the entered numbers.
 *
 * @return 0 - Indicates successful program execution.
 */
int main()
{
  int x, y;
  cout << "Enter first number:";
  cin >> x;
  cout << "Enter second number:";
  cin >> y;
  solve s1;
  s1.start(x, y);
  solve s2;
  s2.init(x, y);
  return 0;
}
