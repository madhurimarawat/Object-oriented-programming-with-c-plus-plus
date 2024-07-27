#include <iostream>
using namespace std;
class cal
{
  int x, y;

public:
  /**
   * @brief Constructor for the cal class.
   *
   * Initializes the member variables x and y with the provided values.
   * Prints the initial values of x and y.
   *
   * @param x The initial value for the member variable x. Default value is 90.
   * @param y The initial value for the member variable y. Default value is 12.
   *
   * @return No return value.
   */
  cal() : x(90), y(12)
  {
    cout << "X is:" << x << endl;
    cout << "Y is:" << y << endl;
  }
  void operator++()
  {
    cout << "After Incrementing x is:" << ++x << endl;
    cout << "After Incrementing y is:" << ++y << endl;
  }
  void operator--()
  {
    cout << "After Decrementing x is:" << --x << endl;
    cout << "After Decrementing y is:" << --y << endl;
  }
};

/**
 * @brief Main function to demonstrate the usage of the cal class.
 *
 * Creates two instances of the cal class, c1 and c2.
 *
 */
int main()
{
  cal c1, c2;
  ++c1;
  --c1;
  ++c2;
  --c2;
  return 0;
}
