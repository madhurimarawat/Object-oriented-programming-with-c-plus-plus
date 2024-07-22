// Including Header File
#include <iostream>
#include <stdio.h>

// Namespace Declaration
using namespace std;

// Defining a class called calculation
class calculation
{
  // wap for friend class
  int a;
  int b;

private:
  int sum = 0;

public:
  /**
   * @brief This function sets the values of 'a' and 'b' in the 'calculation' class.
   *
   * @param c The value to be assigned to 'a'.
   * @param d The value to be assigned to 'b'.
   *
   * @return This function does not return any value. It modifies the internal state of the 'calculation' object.
   */

  void set(int c, int d)
  {
    a = c;
    b = d;
  }
  friend class add;
  friend class sub;
};
class add
{
public:
  /**
   * @brief This function performs addition operation on the 'calculation' object's 'a' and 'b' values.
   *
   * @param c1 A reference to the 'calculation' object on which the addition operation is to be performed.
   *
   * @return This function does not return any value. It prints the result of the addition operation.
   *
   * @note This function is a friend function of the 'calculation' class and can access its private members.
   */

  void add1(calculation &c1)
  {
    int sum = c1.a + c1.b;
    cout << "Friend class 1 called \n";
    cout << "Sum is:" << sum << endl;
  }
};

// Defining a friend class called sub
class sub
{
public:
  /**
   * @brief This function performs subtraction operation on the 'calculation' object's 'a' and 'b' values.
   *
   * @param c1 A reference to the 'calculation' object on which the subtraction operation is to be performed.
   *
   * @return This function does not return any value. It prints the result of the subtraction operation.
   *
   * @note This function is a friend function of the 'calculation' class and can access its private members.
   */

  void sub1(calculation &c1)
  {
    int sub = c1.a - c1.b;
    cout << "Friend class 2 called \n";
    cout << "Sub is:" << sub << endl;
  }
};

/**
 * @brief The main function of the program.
 *
 * This function prompts the user to enter two numbers, creates a 'calculation' object,
 * sets the values of 'a' and 'b' in the object, creates instances of 'add' and 'sub' classes,
 * and calls their respective member functions to perform addition and subtraction operations.
 *
 * @return 0, indicating successful program execution.
 */
int main()
{
  int x, y;
  cout << "Enter first number:";
  cin >> x;
  cout << "Enter second number:";
  cin >> y;
  calculation c;
  c.set(x, y);
  add a;
  sub s;
  a.add1(c);
  s.sub1(c);
  return 0;
}