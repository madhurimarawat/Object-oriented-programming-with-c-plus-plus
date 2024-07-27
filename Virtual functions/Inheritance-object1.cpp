#include <iostream>
#include <stdio.h>

using namespace std;

// Base class A
class A
{
  // wap for virtual functions
private:
  int sum;

public:
  int a, b;

  /**
   * @brief Constructor for the base class A.
   *
   * This constructor initializes the base class A and prints a message indicating
   * that the A Base class constructor has been called.
   *
   * @return No return value.
   */
  A()
  {
    cout << "A Base class constructor\n";
  }

  /**
   * @brief Adds two integers and prints the result.
   *
   * This function takes two integer parameters, adds them together, and prints the result.
   *
   * @param a The first integer to be added.
   * @param b The second integer to be added.
   *
   * @return No return value. The function prints the sum of the two input integers.
   */
  void add(int a, int b)
  {
    sum = a + b;
    cout << "Sum is:" << sum << endl;
  }

  /**
   * @brief Prints a message indicating the base class A.
   *
   * This function is a member of the base class A and prints a message to the console
   * indicating that the base class A is being displayed.
   *
   * @return No return value. The function only prints a message to the console.
   */
  void show()
  {
    cout << "A Base class \n";
  }
};

// Derived class B
class B : public A
{
  // derived class2
public:
  int c, d;

private:
  int mul1;

public:
  /**
   * @brief Constructor for the derived class B.
   *
   * This constructor initializes the derived class B and prints a message indicating
   * that the B Derived class constructor has been called.
   *
   * @return No return value.
   */
  B()
  {
    cout << "B Derived class constructor\n";
  }

  /**
   * @brief Multiplies two integers and prints the result.
   *
   * This function takes an integer parameter 'c' from the derived class B and another integer parameter 'd'.
   * It multiplies these two integers together and prints the result.
   *
   * @param c The first integer to be multiplied. This parameter is inherited from the derived class B.
   * @param d The second integer to be multiplied. This parameter is passed as an argument to the function.
   *
   * @return No return value. The function prints the multiplication of the two input integers.
   */
  void mul(int, int d)
  {
    mul1 = c * d;
    cout << "Multiplication is:" << mul1 << endl;
  }

  /**
   * @brief Prints a message indicating the derived class B.
   *
   * This function is a member of the derived class B and prints a message to the console
   * indicating that the derived class B is being displayed.
   *
   * @return No return value. The function only prints a message to the console.
   */
  void show()
  {
    cout << "B Derived class \n";
  }
};

// Derived class C
class C : public A
{
public:
  int u, v;

  /**
   * @brief Starts the operation by adding two integers and storing their values.
   *
   * This function takes two integer parameters, 'u1' and 'v1', and assigns them to the member variables 'u' and 'v' respectively.
   * It then calls the 'add' function of the base class 'A' with the values of 'u' and 'v'.
   *
   * @param u1 The first integer to be added and stored in the 'u' member variable.
   * @param v1 The second integer to be added and stored in the 'v' member variable.
   *
   * @return No return value. The function only performs the described operations.
   */
  void start(int u1, int v1)
  {
    u = u1;
    v = v1;
    add(u, v);
  }

  /**
   * @brief Prints a message indicating the derived class C.
   *
   * This function is a member of the derived class C and prints a message to the console
   * indicating that the derived class C is being displayed.
   *
   * @return No return value. The function only prints a message to the console.
   */
  void show()
  {
    cout << "C Derived class \n";
  }

private:
  int w, x;

public:
  /**
   * @brief Constructor for the derived class C.
   *
   * This constructor initializes the derived class C and prints a message indicating
   * that the C Derived class constructor has been called.
   *
   * @return No return value.
   *
   * @note The constructor does not take any parameters.
   */
  C()
  {
    cout << "C Derived  class constructor\n";
  }

  /**
   * @brief Initializes the member variables 'w' and 'x' of the derived class C.
   *
   * This function takes two integer parameters, 'w1' and 'x1', and assigns them to the member variables 'w' and 'x' respectively.
   * It also calls the 'mul' function of the derived class B with the values of 'w' and 'x'.
   *
   * @param w1 The value to be assigned to the 'w' member variable.
   * @param x1 The value to be assigned to the 'x' member variable.
   *
   * @return No return value. The function only performs the described operations.
   *
   * @note The 'mul' function is not implemented in the provided code snippet, so it is commented out.
   */
  void init(int w1, int x1)
  {
    w = w1;
    x = x1; // mul(w,x);
  }
};

// Derived class D
class D : public B, public C
{
public:
  /**
   * @brief Constructor for the derived class D.
   *
   * This constructor initializes the derived class D and prints a message indicating
   * that the D Derived class constructor has been called.
   *
   * @return No return value.
   *
   * @note The constructor does not take any parameters.
   */
  D()
  {
    cout << "D Derived class constructor\n";
  }

  /**
   * @brief Prints a message indicating the derived class D.
   *
   * This function is a member of the derived class D and prints a message to the console
   * indicating that the derived class D is being displayed.
   *
   * @return No return value. The function only prints a message to the console.
   */
  void show()
  {
    cout << "D Derived class \n";
  }
};

/**
 * @brief The main function of the program.
 *
 * This function serves as the entry point for the program. It prompts the user to enter two numbers,
 * creates objects of classes D, B, and C, and demonstrates the usage of their member functions.
 *
 * @return An integer representing the exit status of the program. In this case, it always returns 0.
 */
int main()
{
  int x, y;
  cout << "Enter first number:";
  cin >> x;
  cout << "Enter second number:";
  cin >> y;

  // Create an object of class D and demonstrate its member functions
  D d;
  d.B::add(90, 78);
  // d.A::add(x,y); // Error: D does not directly inherit A
  d.show();
  d.B::show();
  d.C::show();
  // d.B::A.show(); // Error: D does not directly inherit A
  // d.C::A.show(); // Error: D does not directly inherit A

  // Create an object of class B and demonstrate its member functions
  B b;
  // b.A::add(x,y); // Works: B directly inherits A
  b.add(x, y);
  b.B::show();

  // Create an object of class C and demonstrate its member functions
  C c;
  c.A::show();

  return 0;
}
