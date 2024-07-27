#include <iostream>
#include <stdio.h>
using namespace std;

// class A
class A
{
  // wap for virtual functions
private:
  int sum;

public:
  int a, b;
  /**
   * @brief Constructor for class A.
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
   * @brief Prints a message indicating the class type.
   *
   * This function is a member of the A class and prints a message to the console
   * indicating that the A Base class is being displayed.
   *
   * @return No return value. The function only prints a message to the console.
   */
  void show()
  {
    cout << "A Base class \n";
  }
};

// class B
class B : public A
{
  // derived class2
public:
  int c, d;

private:
  int mul1;

public:
  /**
   * @brief Constructor for class B, derived from class A.
   *
   * This constructor initializes the derived class B and prints a message indicating
   * that the B Derived class constructor has been called. It also calls the constructor
   * of the base class A.
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
   * It multiplies these two integers together and stores the result in the private member variable 'mul1'.
   * The function then prints the result to the console.
   *
   * @param c The first integer to be multiplied. This parameter is inherited from the derived class B.
   * @param d The second integer to be multiplied. This parameter is passed as an argument to the function.
   *
   * @return No return value. The function prints the multiplication result to the console.
   */
  void mul(int, int d)
  {
    mul1 = c * d;
    cout << "Multiplication is:" << mul1 << endl;
  }

  /**
   * @brief Prints a message indicating the class type.
   *
   * This function is a member of the B class, which is derived from the A class.
   * It prints a message to the console indicating that the B Derived class is being displayed.
   *
   * @return No return value. The function only prints a message to the console.
   */
  void show()
  {
    cout << "B Derived class \n";
  }
};

// class C
class C : public A
{
public:
  int u, v;

  /**
   * @brief Initializes the class C and calls the add function.
   *
   * This function takes two integer parameters, 'u1' and 'v1', and assigns them to the private member variables 'u' and 'v' respectively.
   * It then calls the add function of the base class A with the values of 'u' and 'v'.
   *
   * @param u1 The first integer to be used in the add function. This parameter is passed as an argument to the function.
   * @param v1 The second integer to be used in the add function. This parameter is passed as an argument to the function.
   *
   * @return No return value. The function initializes the class C and calls the add function.
   */
  void start(int u1, int v1)
  {
    u = u1;
    v = v1;
    add(u, v);
  }

  /**
   * @brief Prints a message indicating the class type.
   *
   * This function is a member of the C class, which is derived from the A class.
   * It prints a message to the console indicating that the C Derived class is being displayed.
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
   * @brief Constructor for class C, derived from class A.
   *
   * This constructor initializes the derived class C and prints a message indicating
   * that the C Derived class constructor has been called. It also calls the constructor
   * of the base class A.
   *
   * @return No return value.
   */
  C()
  {
    cout << "C Derived  class constructor\n";
  }

  /**
   * @brief Initializes the private member variables 'w' and 'x' of class C.
   *
   * This function takes two integer parameters, 'w1' and 'x1', and assigns them to the private member variables 'w' and 'x' respectively.
   * It does not perform any mathematical operations or call any other functions.
   *
   * @param w1 The value to be assigned to the private member variable 'w'.
   * @param x1 The value to be assigned to the private member variable 'x'.
   *
   * @return No return value. The function only initializes the private member variables 'w' and 'x'.
   */
  void init(int w1, int x1)
  {
    w = w1;
    x = x1; // mul(w,x);
  }
};

// class D
class D : public B, public C
{
public:
  /**
   * @brief Constructor for class D, derived from classes B and C.
   *
   * This constructor initializes the derived class D and prints a message indicating
   * that the D Derived class constructor has been called. It also calls the constructors
   * of the base classes B and C.
   *
   * @return No return value.
   */
  D()
  {
    cout << "D Derived class constructor\n";
  }

  /**
   * @brief Prints a message indicating the class type.
   *
   * This function is a member of the D class, which is derived from classes B and C.
   * It prints a message to the console indicating that the D Derived class is being displayed.
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
 * @return An integer value representing the exit status of the program. In this case, it always returns 0.
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
