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
  /*void init(int n1,int n2){
  a=n1;
  b=n2;}*/

  /**
   * @brief This function calculates the sum of two integers.
   *
   * This function takes two integer parameters, adds them together, and stores the result in the 'sum' variable.
   * It then prints the result to the console.
   *
   * @param a The first integer to be added.
   * @param b The second integer to be added.
   *
   * @return void This function does not return a value.
   */
  void add(int a, int b)
  {
    sum = a + b;
    cout << "Sum is:" << sum << endl;
  }
};

// Class for calculation2
class calculation2
{
  // derived class2
public:
  int c;
  int d;

private:
  int mul1;

public:
  /*calculation2(int n1,int n2){
  c=n1;
  d=n2;}*/

  /**
   * @brief This function calculates the multiplication of two integers.
   *
   * This function takes two integer parameters, multiplies them together, and stores the result in the 'mul1' variable.
   * It then prints the result to the console.
   *
   * @param a The first integer to be multiplied. This parameter is not used in this function, but is included for consistency with the 'add' function.
   * @param d The second integer to be multiplied. This value is used to multiply with the 'c' variable.
   *
   * @return void This function does not return a value.
   */
  void mul(int, int d)
  {
    mul1 = c * d;
    cout << "Multiplication is:" << mul1 << endl;
  }
};

// Class for solve: inherited from calculation and calculation2
class solve : public calculation, calculation2
{
public:
  int u, v;
  /**
   * @brief This function initializes and starts the calculation process.
   *
   * This function takes two integer parameters, assigns them to the 'u' and 'v' variables, respectively,
   * and then calls the 'add' function to calculate and print the sum of 'u' and 'v'.
   *
   * @param u1 The first integer to be added. This value is used to initialize the 'u' variable.
   * @param v1 The second integer to be added. This value is used to initialize the 'v' variable.
   *
   * @return void This function does not return a value.
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
   * @brief This function initializes the 'w' and 'x' variables and calls the 'mul' function to calculate and print the multiplication of 'w' and 'x'.
   *
   * This function takes two integer parameters, assigns them to the 'w' and 'x' variables, respectively,
   * and then calls the 'mul' function to calculate and print the multiplication of 'w' and 'x'.
   *
   * @param w1 The first integer to be multiplied. This value is used to initialize the 'w' variable.
   * @param x1 The second integer to be multiplied. This value is used to initialize the 'x' variable.
   *
   * @return void This function does not return a value.
   */
  void init(int w1, int x1)
  {
    w = w1;
    x = x1;
    mul(w, x);
  }
};

// Main Function
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
