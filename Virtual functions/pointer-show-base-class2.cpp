#include <iostream>
using namespace std;

// Function overriding and late binding
class base
{
public:
  /**
   * @brief This function is a member of the base class and overrides the same function in the derived class.
   *
   * This function prints "base-1" to the standard output stream.
   *
   * @return This function does not return any value.
   */
  void fun_1() { cout << "base-1\n"; }

  /**
   * @brief This function is a virtual member of the base class and is overridden in the derived class.
   *
   * This function demonstrates late binding (Runtime Polymorphism) by printing a different message based on the actual object type.
   * In the base class, it prints "base-2" to the standard output stream.
   * In the derived class, it prints "derived-2" to the standard output stream.
   *
   * @return This function does not return any value.
   */
  virtual void fun_2() { cout << "base-2\n"; }

  /**
   * @brief This function is a virtual member of the base class and is overridden in the derived class.
   *
   * This function demonstrates late binding (Runtime Polymorphism) by printing a different message based on the actual object type.
   * In the base class, it prints "base-3" to the standard output stream.
   * In the derived class, it may print a different message or perform a different operation.
   *
   * @return This function does not return any value.
   */
  virtual void fun_3() { cout << "base-3\n"; }

  /**
   * @brief This function is a virtual member of the base class and is overridden in the derived class.
   *
   * This function demonstrates late binding (Runtime Polymorphism) by printing a different message based on the actual object type.
   * In the base class, it prints "base-4" to the standard output stream.
   * In the derived class, it may print a different message or perform a different operation.
   *
   * @return This function does not return any value.
   */
  virtual void fun_4() { cout << "base-4\n"; }
};

// Derived class that overrides some base class functions
class derived : public base
{
public:
  /**
   * @brief This function is an overridden member of the derived class.
   *
   * This function overrides the same function in the base class.
   * It demonstrates polymorphism by printing a different message based on the actual object type.
   * In this case, it prints "derived-1" to the standard output stream.
   *
   * @return This function does not return any value.
   */
  void fun_1() { cout << "derived-1\n"; }

  /**
   * @brief This function is an overridden member of the derived class.
   *
   * This function overrides the same function in the base class.
   * It demonstrates polymorphism by printing a different message based on the actual object type.
   * In this case, it prints "derived-2" to the standard output stream.
   *
   * @return This function does not return any value.
   */
  void fun_2() { cout << "derived-2\n"; }

  /**
   * @brief This function is an overridden member of the derived class.
   *
   * This function overrides the same function in the base class.
   * It demonstrates polymorphism by printing a different message based on the actual object type.
   * In this case, it prints "derived-4" to the standard output stream.
   *
   * @return This function does not return any value.
   */
  void fun_4() { cout << "derived-4\n"; }
};

/**
 * @brief The main function of the program.
 *
 * This function demonstrates the usage of function overriding, late binding, and polymorphism in C++.
 * It creates an object of the derived class and calls member functions on both the object and a pointer to the base class.
 *
 * @return An integer representing the exit status of the program. In this case, it always returns 0.
 */
int main()
{
  base *p;      // Pointer to the base class
  derived obj1; // Object of the derived class

  // Call member function of the derived class
  obj1.fun_1();

  // Assign the address of the derived class object to the base class pointer
  p = &obj1;

  // Call member function through the base class pointer (polymorphism)
  p->fun_1();

  // Call virtual member functions through the base class pointer (late binding)
  p->fun_2();
  p->fun_3();
  p->fun_4();

  return 0; // Exit the program with success status
}