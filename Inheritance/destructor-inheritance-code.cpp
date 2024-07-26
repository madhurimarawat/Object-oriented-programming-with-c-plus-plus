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
   * It prints a message indicating the execution of the constructor.
   */
  calculation()
  {
    cout << "Calculation Base class constructor\n";
  }
  /**
   * @brief Destructor for the calculation class.
   *
   * This destructor is responsible for cleaning up resources and releasing memory allocated by the calculation class.
   * It prints a message indicating the execution of the destructor.
   */
  ~calculation()
  {
    cout << "Calculation Base class Destructor\n";
  }

  /**
   * @brief Adds two integers and prints the result.
   *
   * This function takes two integer parameters, adds them together, and prints the result.
   *
   * @param a The first integer to be added.
   * @param b The second integer to be added.
   *
   * @return void. This function does not return a value.
   */
  void add(int a, int b)
  {
    sum = a + b;
    cout << "Sum is:" << sum << endl;
  }
};

// class calculation2
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
   * This constructor is responsible for initializing the calculation2 class, which is a derived class.
   * It prints a message indicating the execution of the constructor.
   *
   * @return void. This function does not return a value.
   */
  calculation2()
  {
    cout << "Calculation2 Derived class constructor\n";
  }
  /**
   * @brief Destructor for the calculation2 class.
   *
   * This destructor is responsible for cleaning up resources and releasing memory allocated by the calculation2 class,
   * which is a derived class. It prints a message indicating the execution of the destructor.
   *
   * @return void. This function does not return a value.
   */
  ~calculation2()
  {
    cout << "Calculation2 Derived class Destructor\n";
  }

  /**
   * @brief Multiplies two integers and prints the result.
   *
   * This function takes an integer parameter, multiplies it with the member variable 'c' of the class,
   * and prints the result.
   *
   * @param d The integer to be multiplied with the member variable 'c'.
   *
   * @return void. This function does not return a value.
   *
   * @note This function assumes that the member variable 'c' has been properly initialized before calling this function.
   */
  void mul(int, int d)
  {
    mul1 = c * d;
    cout << "Multiplication is:" << mul1 << endl;
  }
};

/// @brief class solve
class solve : public calculation, calculation2
{
public:
  int u, v;
  /**
   * @brief This function initializes the member variables 'u' and 'v' with the provided parameters,
   *        and then calls the 'add' function from the 'calculation' base class.
   *
   * @param u1 The value to be assigned to the member variable 'u'.
   * @param v1 The value to be assigned to the member variable 'v'.
   *
   * @return void. This function does not return a value.
   *
   * @note This function assumes that the 'calculation' base class has been properly initialized before calling this function.
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
   * @brief Constructor for the solve class.
   *
   * This constructor is responsible for initializing the solve class, which is a derived class from the 'calculation' and 'calculation2' base classes.
   * It prints a message indicating the execution of the constructor.
   *
   * @return void. This function does not return a value.
   *
   * @note This function assumes that the 'calculation' and 'calculation2' base classes have been properly initialized before calling this constructor.
   */
  solve()
  {
    cout << "Solve Derived  class constructor\n";
  }
  /**
   * @brief Destructor for the solve class.
   *
   * This destructor is responsible for cleaning up resources and releasing memory allocated by the solve class,
   * which is a derived class from the 'calculation' and 'calculation2' base classes.
   * It prints a message indicating the execution of the destructor.
   *
   * @return void. This function does not return a value.
   *
   * @note This function assumes that the 'calculation' and 'calculation2' base classes have been properly initialized before calling this destructor.
   */
  ~solve()
  {
    cout << "Solve Derived class Destructor\n";
  }

  /**
   * @brief Initializes the member variables 'w' and 'x' with the provided parameters,
   *        and then calls the 'mul' function from the 'calculation2' base class.
   *
   * This function takes two integer parameters, assigns them to the member variables 'w' and 'x',
   * and then calls the 'mul' function from the 'calculation2' base class with the values of 'w' and 'x'.
   *
   * @param w1 The value to be assigned to the member variable 'w'.
   * @param x1 The value to be assigned to the member variable 'x'.
   *
   * @return void. This function does not return a value.
   *
   * @note This function assumes that the 'calculation2' base class has been properly initialized before calling this function.
   *
   * @see calculation2::mul(int, int)
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
 * and calls the 'start' and 'init' functions of the 'solve' class with the entered numbers.
 *
 * @return 0. The function returns 0 to indicate successful program execution.
 *
 * @note This function assumes that the 'solve' class has been properly implemented and initialized.
 *
 * @see solve::start(int, int)
 * @see solve::init(int, int)
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
