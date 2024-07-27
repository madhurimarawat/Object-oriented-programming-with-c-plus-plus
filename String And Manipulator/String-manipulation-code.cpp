#include <iostream>
#include <iomanip>
using namespace std;

class flower
{
private:
  string f1;
  string f2;

public:
  /**
   * @brief Constructor for the flower class. Initializes the flower names and prints messages using manipulators.
   *
   * This constructor sets the names of two flowers (f1 and f2) to "Lily" and "Rose" respectively.
   * It then prints out messages using the manipulators endl and setw to demonstrate their usage.
   *
   * @param None
   *
   * @return None
   *
   * @note The manipulators endl and setw are used to format the output.
   *
   * @code
   * flower fl;
   * @endcode
   *
   * @sa std::endl, std::setw
   */
  flower()
  {
    f1 = "Lily";
    f2 = "Rose";
    cout << "Manipulator endl is used." << endl;
    cout << "First flower is:" << f1 << endl;
    cout << "Manipulator setw is used." << endl;
    cout << "Second flower is:" << setw(13) << f2;
  }
};

/**
 * @brief The main function is the entry point of the program.
 *
 * This function initializes an instance of the flower class and returns 0 to indicate successful program execution.
 *
 * @return 0 - Indicates successful program execution.
 */
int main()
{
  flower fl;
  return 0;
}

/*
 * Output:
 * Manipulator endl is used.
 * First flower is:Lily
 * Manipulator setw is used.
 * Second flower is:         Rose
 */