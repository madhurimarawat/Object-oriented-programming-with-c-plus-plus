/**
 * @brief This program demonstrates the usage of a simple class representing flowers.
 *
 * The program defines a class called 'flower' with private member variables for two flower names.
 * It includes a default constructor that initializes the flower names and prints out a message.
 * The main function creates an instance of the flower class and terminates the program.
 */

// Including Header File
#include <iostream>

// Using Namespace
using namespace std;

// Defining the flower class
class flower
{
private:
  string f1;
  string f2;

public:
  /**
   * @brief Default constructor for the flower class.
   *
   * This constructor initializes the private member variables f1 and f2 with default values.
   * It also prints out a message indicating that the default constructor has been called,
   * along with the names of the two flowers.
   *
   * @param None
   * @return None
   */

  flower()
  {
    f1 = "Lily";
    f2 = "Rose";
    cout << "Default constructor is called" << endl;
    cout << "First flower is:" << f1 << endl;
    cout << "Second flower is:" << f2 << endl;
  }
};

/**
 * @brief The main function of the program.
 *
 * This function serves as the entry point for the program. It creates an instance of the flower class
 * and then returns 0 to indicate successful program termination.
 *
 * @param None
 * @return 0 - Indicates successful program termination.
 */

int main()
{
  flower fl;
  return 0;
}
