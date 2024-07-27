#include <iostream>
using namespace std;
class Count
{
private:
  int value;

public:
  // Constructor to initialize count to 5
  /**
   * @brief Constructor to initialize count to 5.
   *
   * This constructor initializes the private member variable 'value' to 5.
   * It is called when an object of the Count class is created without any arguments.
   *
   * @param None
   * @return None
   */
  Count() : value(5) {}

  // Overload ++ when used as prefix
  void operator++()
  {
    ++value;
  }

  /**
   * @brief Displays the current value of the Count object.
   *
   * This function prints the current value of the 'value' member variable to the standard output stream.
   * It is called when the 'display' method of a Count object is invoked.
   *
   * @param None
   * @return None
   */
  void display()
  {
    cout << "Count: " << value << endl;
  }
};

/**
 * @brief The main function of the program.
 *
 * This function demonstrates the usage of the Count class by creating an object,
 * incrementing its value using the overloaded prefix increment operator, and displaying the result.
 *
 * @param None
 * @return 0 to indicate successful program execution.
 */
int main()
{
  Count count1;
  // Call the "void operator ++ ()" function
  ++count1;
  count1.display();
  return 0;
}
