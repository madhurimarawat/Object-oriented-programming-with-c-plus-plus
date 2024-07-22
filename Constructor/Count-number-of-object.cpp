/**
 * @brief This program demonstrates the usage of constructors and destructors in a C++ class.
 *
 * The calc class is defined with a constructor and a destructor.
 * The constructor increments a static counter each time an object is created,
 * and the destructor decrements the counter each time an object is destroyed.
 * The main function creates four instances of the calc class,
 * which triggers the constructor and destructor for each object.
 *
 * The program outputs the number of objects created and destroyed at each step.
 * This helps illustrate the concept of object lifetime management in C++.
 *
 * @return 0 - Indicates successful program execution.
 */

/*WAP in C++ which defines a class with constructor and destructor
which will count number of objects created and destroyed.*/

// Including Header File
#include <iostream>

// Using Namespace
using namespace std;

// Declaring Static Variable
int count = 0;

/// @brief Class for Calculation
class calc
{
public:
  /**
   * @brief Constructor for the calc class.
   *
   * This constructor increments the static count variable each time an object of the calc class is created.
   * It then outputs the current number of objects created to the console.
   */

  calc()
  {
    count++;
    cout << "Number of objects created:" << count << endl;
  }

  /**
   * @brief Destructor for the calc class.
   *
   * This destructor decrements the static count variable each time an object of the calc class is destroyed.
   * It then outputs the current number of objects remaining to the console.
   */

  ~calc()
  {
    cout << "Number of objects destroyed:" << count << endl;
    count--;
  }
};

/**
 * @brief The main function of the program.
 *
 * This function creates four instances of the calc class and then exits.
 * The calc class has a constructor and destructor that keep track of the number of objects created and destroyed.
 *
 * @return 0 - Indicates successful program execution.
 */

int main()
{
  calc c1, c2, c3, c4; // Creating four instances of the calc class
  return 0;
}