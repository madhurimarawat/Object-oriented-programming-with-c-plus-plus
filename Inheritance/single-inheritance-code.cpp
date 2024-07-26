#include <iostream>
#include <stdio.h>
using namespace std;
class calculation
{
  // wap for single inheritance
public:
  int a;
  int b;

private:
  int sum = 0;

public:
  /**
   * @brief This function adds two integers and prints the result.
   *
   * This function takes two integer parameters, c and d, and calculates their sum.
   * The sum is then printed to the standard output stream.
   *
   * @param c The first integer to be added.
   * @param d The second integer to be added.
   *
   * @return void This function does not return any value.
   */
  void add(int c, int d)
  {
    sum = c + d;
    cout << "Sum is:" << sum << endl;
  }
};

// Class for calculation
class use : public calculation
{
public:
  // This Function calls the add function to add two integers
  void init(int n1, int n2)
  {
    add(n1, n2);
  }
};

/**
 * @brief The main function of the program.
 *
 * This function prompts the user to enter two integers, calls the init function of the use class,
 * and then returns 0 to indicate successful program execution.
 *
 * @return int Returns 0 to indicate successful program execution.
 */
int main()
{
  int x, y;
  cout << "Enter first number:";
  cin >> x;
  cout << "Enter second number:";
  cin >> y;
  use u1;
  u1.init(x, y);
  return 0;
}