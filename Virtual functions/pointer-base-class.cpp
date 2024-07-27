#include <iostream>
using namespace std;

// Pure virtual function
class base
{
public:
  /**
   * @brief This function is a member function of the base class.
   *        It prints "base-1" to the standard output.
   *
   * @return void: This function does not return any value.
   */
  void fun_1() { cout << "base-1\n"; }

  /**
   * @brief This function is a virtual member function of the base class.
   *        It prints "base-2" to the standard output.
   *
   * @return void: This function does not return any value.
   *
   * @note This function is overridden in the derived class to provide different behavior.
   *       The runtime polymorphism (RTP) is achieved through late binding.
   *
   * @see derived::fun_2()
   */
  virtual void fun_2() { cout << "base-2\n"; }

  /**
   * @brief This function is a virtual member function of the base class.
   *        It prints "base-3" to the standard output.
   *
   * @return void: This function does not return any value.
   *
   * @note This function is a part of the base class and can be overridden in the derived class.
   *       The runtime polymorphism (RTP) is achieved through late binding.
   *       This function is not overridden in the derived class, so it behaves as in the base class.
   *
   * @see derived::fun_3()
   */
  virtual void fun_3() { cout << "base-3\n"; }

  /**
   * @brief This function is a virtual member function of the base class.
   *        It prints "base-4" to the standard output.
   *
   * @return void: This function does not return any value.
   *
   * @note This function is a part of the base class and can be overridden in the derived class.
   *       The runtime polymorphism (RTP) is achieved through late binding.
   *       This function is not overridden in the derived class, so it behaves as in the base class.
   *
   * @see derived::fun_4()
   */
  virtual void fun_4() { cout << "base-4\n"; }
};

// Derived class with overridden functions
class derived : public base
{
public:
  /**
   * @brief This function is an overridden member function of the derived class.
   *        It prints "derived-1" to the standard output.
   *
   * @return void: This function does not return any value.
   *
   * @note This function overrides the base class's fun_1() function.
   *       The derived class provides its own implementation of this function.
   *       When called through a base class pointer or reference, the derived class's version of the function is executed.
   *       This demonstrates the runtime polymorphism (RTP) feature of C++.
   *
   * @see base::fun_1()
   */
  void fun_1() { cout << "derived-1\n"; }

  /**
   * @brief This function is an overridden member function of the derived class.
   *        It prints "derived-2" to the standard output.
   *
   * @return void: This function does not return any value.
   *
   * @note This function overrides the base class's fun_2() function.
   *       The derived class provides its own implementation of this function.
   *       When called through a base class pointer or reference, the derived class's version of the function is executed.
   *       This demonstrates the runtime polymorphism (RTP) feature of C++.
   *
   * @see base::fun_2()
   */
  void fun_2() { cout << "derived-2\n"; }

  /**
   * @brief This function is an overridden member function of the derived class.
   *        It prints "derived-4" to the standard output.
   *
   * @return void: This function does not return any value.
   *
   * @note This function overrides the base class's fun_4() function.
   *       The derived class provides its own implementation of this function.
   *       When called through a base class pointer or reference, the derived class's version of the function is executed.
   *       This demonstrates the runtime polymorphism (RTP) feature of C++.
   *
   * @see base::fun_4()
   */
  void fun_4() { cout << "derived-4\n"; }
};

/**
 * @brief The main function of the program.
 *
 * This function demonstrates the usage of polymorphism in C++ through the base and derived classes.
 * It creates an object of the derived class and assigns its address to a base class pointer.
 * Then, it calls member functions of the base class through the pointer, demonstrating late binding (RTP).
 *
 * @return int: The function returns 0 to indicate successful program execution.
 *
 * @see base
 * @see derived
 */
int main()
{
  base *p;
  derived obj1;
  p = &obj1;
  p->fun_1();
  // Late binding (RTP)
  p->fun_2();
  p->fun_3();
  p->fun_4();
  return 0;
}
