#include <iostream>
using namespace std;

/* When local variable is same as data member */

class thischeck
{
private:
  int x = 89;

public:
  /**
   * @brief Sets the value of the private data member 'x'.
   *
   * This function takes an integer parameter 'x' and assigns it to the private data member 'x'.
   * If the 'this' pointer is used to access the data member, it allows the function to modify the
   * value of 'x' in the current object. If 'this' is not used, the function will create a local
   * variable 'x' that shadows the data member, and the data member will not be modified.
   *
   * @param x The new value to be assigned to the private data member 'x'.
   *
   * @return void
   */
  void setx(int x)
  {
    this->x = x; // If we skip this x will be 89
  }

  /**
   * @brief Prints the value of the private data member 'x'.
   *
   * This function accesses the private data member 'x' and prints its value to the standard output stream.
   * If the 'this' pointer is used to access the data member, it allows the function to access the
   * value of 'x' in the current object. If 'this' is not used, the function will create a local
   * variable 'x' that shadows the data member, and the data member will not be accessed.
   *
   * @return void
   */
  void print() { cout << "x =  " << x << endl; }
};

/**
 * @brief The main function of the program.
 *
 * This function creates an instance of the 'thischeck' class, sets the value of the private data member 'x' using the 'setx' function,
 * and then prints the value of 'x' using the 'print' function.
 *
 * @return 0 to indicate successful program execution.
 */
int main()
{
  thischeck t1;
  int x = 67;
  t1.setx(x);
  t1.print();
  return 0;
}
