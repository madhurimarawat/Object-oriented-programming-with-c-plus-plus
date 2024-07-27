#include <iostream>
using namespace std;

// Base class
class base
{
public:
  /**
   * @brief This function is a virtual member function in the base class.
   * It prints a message indicating that it is printing from the base class.
   *
   * @return void - This function does not return any value.
   */
  virtual void print()
  {
    cout << "print base class\n";
  }

  /**
   * @brief This function is a member function in the base class.
   * It prints a message indicating that it is printing from the base class.
   *
   * @return void - This function does not return any value.
   */
  void show()
  {
    cout << "show base class\n";
  }
};

// Derived class inheriting from base class
class derived : public base
{
public:
  /**
   * @brief This function is a member function in the derived class.
   * It overrides the print() function from the base class and prints a message indicating that it is printing from the derived class.
   *
   * @return void - This function does not return any value.
   */
  void print()
  {
    cout << "print derived class\n";
  }

  /**
   * @brief This function is a member function in the derived class.
   * It overrides the show() function from the base class and prints a message indicating that it is printing from the derived class.
   *
   * @return void - This function does not return any value.
   */
  void show()
  {
    cout << "show derived class\n";
  }
};

/**
 * @brief The main function of the program.
 *
 * This function demonstrates the usage of polymorphism in C++ by creating objects of both the base and derived classes,
 * and using pointers to call their member functions.
 *
 * @return int - The function returns 0 to indicate successful program execution.
 */
int main()
{
  base *bptr;    // Pointer to the base class
  derived d;     // Object of the derived class
  bptr = &d;     // Assigning the address of the derived class object to the base class pointer
  bptr->print(); // Calls the print() function of the derived class through the base class pointer
  bptr->show();  // Calls the show() function of the base class through the base class pointer

  // if we create object of derived class and pointer of derived class
  derived *dptr; // Pointer to the derived class
  dptr = &d;     // Assigning the address of the derived class object to the derived class pointer
  dptr->print(); // Calls the print() function of the derived class through the derived class pointer
  dptr->show();  // Calls the show() function of the derived class through the derived class pointer

  // if we create object of base class and pointer of derived class
  /*it shows this error
  pointer-show-base-class1.cpp:33:7: error: invalid conversion from 'base*' to 'derived*' [-fpermissive]
   dpt = &b;
         ^~
  base b;
  derived *dpt;
  dpt = &b;
  dpt->print();
  dpt->show();*/

  return 0;
}
