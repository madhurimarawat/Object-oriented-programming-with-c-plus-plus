// Including Header File
#include <iostream>
#include <stdio.h>

// Namespace declaration
using namespace std;

// Defining a class
class calculation
{
  // wap for friend function
  int a;
  int b;

private:
  int sum = 0;

public:
  /**
   * @brief This function sets the values of the private member variables 'a' and 'b' of the class 'calculation'.
   *
   * @param c An integer value to be assigned to the private member variable 'a'.
   * @param d An integer value to be assigned to the private member variable 'b'.
   *
   * @return This function does not return any value. It modifies the private member variables 'a' and 'b' of the class 'calculation'.
   */
  void set(int c, int d)
  {
    a = c;
    b = d;
  }

  /**
   * @brief This function is a friend function of the 'calculation' class. It calculates and prints the sum of the private member variables 'a' and 'b' of the class.
   *
   * @param c An object of the 'calculation' class. The function uses the private member variables 'a' and 'b' of this object to perform the addition.
   *
   * @return This function does not return any value. It only prints the result of the addition operation.
   */
  friend void add(calculation c);

  /**
   * @brief This function is a friend function of the 'calculation' class. It calculates and prints the difference of the private member variables 'a' and 'b' of the class.
   *
   * @param c An object of the 'calculation' class. The function uses the private member variables 'a' and 'b' of this object to perform the subtraction.
   *
   * @return This function does not return any value. It only prints the result of the subtraction operation.
   */
  friend void sub(calculation c);
};

// Friend function implementation
void add(calculation c1)
{
  int sum = c1.a + c1.b;
  cout << "Friend function 1 called \n";
  cout << "Sum is:" << sum << endl;
}

// Friend function implementation
void sub(calculation c1)
{
  int sub = c1.a - c1.b;
  cout << "Friend function 2 called \n";
  cout << "Sub is:" << sub << endl;
}

// Driver code to test the class and friend functions
int main()
{
  int x, y;
  cout << "Enter first number:";
  cin >> x;
  cout << "Enter second number:";
  cin >> y;
  calculation c;
  c.set(x, y);
  add(c);
  sub(c);
  return 0;
}
