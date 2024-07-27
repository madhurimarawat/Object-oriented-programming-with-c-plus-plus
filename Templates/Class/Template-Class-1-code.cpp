#include <iostream>
using namespace std;
template <class t>
class tempc
{
public:
  t a, b;

  /**
   * @brief Constructor for the tempc class.
   *
   * This constructor initializes the two data members 'a' and 'b' with the provided values.
   *
   * @param x The value to be assigned to 'a'.
   * @param y The value to be assigned to 'b'.
   *
   * @return No return value.
   */
  tempc(t x, t y)
  {
    a = x;
    b = y;
  }

  /**
   * @brief Displays the addition of 'a' and 'b' using the 'add' method.
   *
   * This function prints the result of adding the two data members 'a' and 'b' using the 'add' method.
   * It then prints the result in the format: "Addition of [value of 'a'] and [value of 'b'] is: [result of 'add']".
   *
   * @return No return value.
   */
  void show()
  {
    cout << "Addition of " << a << " and " << b << " is: " << add() << endl;
  }

  /**
   * @brief Adds the two data members 'a' and 'b'.
   *
   * This function performs addition of the two data members 'a' and 'b' and returns the result.
   *
   * @return The sum of 'a' and 'b'.
   */
  t add()
  {
    return a + b;
  }
};

/**
 * @brief The main function of the program.
 *
 * This function demonstrates the usage of the tempc class template with different data types.
 * It creates three instances of the tempc class: ob1 with int data type, ob2 with float data type,
 * and ob3 with char data type. Each instance is initialized with specific values and then the
 * show() method is called to display the addition of the two data members.
 *
 * @return 0 to indicate successful program execution.
 */
int main()
{
  tempc<int> ob1(12, 90);
  ob1.show();
  tempc<float> ob2(12.23, 90);
  ob2.show();
  tempc<char> ob3('H', 'W');
  ob3.show();
  return 0;
}
