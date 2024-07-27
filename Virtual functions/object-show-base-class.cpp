#include <iostream>
using namespace std;

// Example of multiple inheritance using public inheritance
class A
{
public:
  /**
   * @brief This function is used to display the letter 'A'.
   *
   * This function is a part of class A and is inherited by class B.
   * It is a public member function and does not take any parameters.
   *
   * @return void: This function does not return any value.
   * It only prints the letter 'A' to the standard output stream.
   */
  void showa()
  {
    cout << "A" << endl;
  }
};

// Derived class B from class A using public inheritance
class B : public A
{
public:
  /**
   * @brief This function is used to display the letter 'B'.
   *
   * This function is a part of class B, which is derived from class A.
   * It is a public member function and does not take any parameters.
   *
   * @return void: This function does not return any value.
   * It only prints the letter 'B' to the standard output stream.
   */
  void showb()
  {
    cout << "B" << endl;
  }
};

// Derived class C from class A using public inheritance
class C
{
public:
  /**
   * @brief This function is used to display the letter 'C'.
   *
   * This function is a part of class C, which is not derived from any other class.
   * It is a public member function and does not take any parameters.
   *
   * @return void: This function does not return any value.
   * It only prints the letter 'C' to the standard output stream.
   */
  void showc()
  {
    cout << "C" << endl;
  }
};

// Derived class D from class B using public inheritance
class D : public B
{
public:
  /**
   * @brief This function is used to display the letter 'D'.
   *
   * This function is a part of class D, which is derived from class B.
   * It is a public member function and does not take any parameters.
   *
   * @return void: This function does not return any value.
   * It only prints the letter 'D' to the standard output stream.
   */
  void showd()
  {
    cout << "D" << endl;
  }
};

/**
 * @brief The main function of the program.
 *
 * This function serves as the entry point for the program.
 * It creates an instance of class D, calls the showa function of class B,
 * and returns 0 to indicate successful program termination.
 *
 * @return int: The function returns 0 to indicate successful program termination.
 */
int main()
{
  D d;
  d.B::showa();
  return 0;
}