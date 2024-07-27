#include <iostream>
#include <stdio.h>
using namespace std;

// class definition for calc with static member function
class calc
{
  // wap for static member functions

  int a;
  int b;

public:
  static int sum;

  /**
   * @brief Constructor for the calc class.
   *
   * This constructor initializes the instance variables a and b with the provided values.
   *
   * @param n1 The first integer value to be stored in the instance variable a.
   * @param n2 The second integer value to be stored in the instance variable b.
   */
  calc(int n1, int n2)
  {
    a = n1;
    b = n2;
  }

  /**
   * @brief Adds the values of instance variables a and b and stores the result in the static member variable sum.
   *
   * This function is a member function of the calc class. It calculates the sum of the instance variables a and b,
   * and then stores the result in the static member variable sum.
   *
   * @return void
   *
   * @note This function does not return any value, but it modifies the static member variable sum.
   */
  void add()
  {
    sum = a + b;
  }

  /**
   * @brief Displays the value of the static member variable sum.
   *
   * This static member function of the calc class is used to display the value of the static member variable sum.
   * The function does not take any parameters and does not return any value. It simply prints the value of sum to the console.
   *
   * @return void
   *
   * @note This function does not modify the static member variable sum.
   */
  static void display()
  {
    cout << "Sum is:" << sum << endl;
  }
};

// static member variable initialization
int calc::sum = 0;

/**
 * @brief The main function of the program.
 *
 * This function is the entry point of the program. It prompts the user to enter two numbers,
 * creates an instance of the calc class with the provided numbers, calls the add() member function,
 * and then calls the static display() member function to display the sum.
 *
 * @return 0 to indicate successful program execution.
 *
 * @note The main function does not take any parameters.
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
  calc::display();
  return 0;
}