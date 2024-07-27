#include <iostream>
using namespace std;

// Base class
class calc
{
  int s1, s2;
  /*calc(int x,int y){
  s1=x;s2=y;}*/
public:
  /**
   * @brief This function is a virtual member function in the base class 'calc'.
   *        It calculates the sum of two integers and prints the result.
   *        In this case, the function is overridden in the derived class 'use'.
   *
   * @details The function does not take any parameters.
   *          It internally calculates the sum of 567 and 9 and prints the result.
   *
   * @return void
   *         The function does not return any value.
   *         It only prints the calculated sum.
   */
  virtual void add()
  {
    int S = 567 + 9;
    cout << "sum is:" << S;
  }
};

// Derived class
class use : public calc
{
public:
  /**
   * @brief This is the constructor of the derived class 'use'.
   *        It prints a message indicating that the derived constructor has been called.
   *
   * @details The constructor does not take any parameters.
   *          It internally prints the message "DERIVED CONSTRUCTOR".
   *
   * @return void
   *         The constructor does not return any value.
   *         It only prints a message.
   */
  use() { cout << "DERIVED CONSTRUCTOR\n"; }

  /**
   * @brief This function overrides the virtual member function 'add' in the base class 'calc'.
   *        It prints a specific string instead of calculating the sum of two integers.
   *
   * @details The function does not take any parameters.
   *          It internally prints the string "!!@#$%^()(*&^%$$#".
   *
   * @return void
   *         The function does not return any value.
   *         It only prints the specified string.
   */
  void add()
  {
    cout << "!!@#$%^()(*&^%$$#";
  }
};

/**
 * @brief The main function of the program.
 *        It demonstrates the concept of polymorphism in C++ using virtual functions.
 *
 * @details The main function creates a pointer to the base class 'calc' and an object of the derived class 'use'.
 *          It then assigns the address of the derived class object to the base class pointer.
 *          Finally, it calls the 'add' function through the base class pointer, which invokes the overridden function in the derived class.
 *
 * @return int
 *         The main function returns 0 to indicate successful program execution.
 */
int main()
{
  // calc *c(90,78); // This line is commented out as it is not necessary for the demonstration of polymorphism.
  calc *c;  // Declaration of a pointer to the base class 'calc'.
  use u;    // Creation of an object of the derived class 'use'.
  c = &u;   // Assignment of the address of the derived class object to the base class pointer.
  c->add(); // Invocation of the 'add' function through the base class pointer, which invokes the overridden function in the derived class.
  return 0; // Return 0 to indicate successful program execution.
}