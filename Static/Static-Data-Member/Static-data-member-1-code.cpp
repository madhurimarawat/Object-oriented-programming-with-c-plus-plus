#include <iostream>
#include <stdio.h>
using namespace std;

class cuboid
{
  // wap for static data member
public:
  float l;
  float b;
  float h;
  static int Co;

private:
  float a;

public:
  /**
   * @brief Constructor for the cuboid class.
   *
   * This constructor initializes the length, breadth, and height of the cuboid.
   * It also increments the static counter 'Co' to keep track of the number of cuboid objects created.
   *
   * @param c Length of the cuboid.
   * @param d Breadth of the cuboid.
   * @param e Height of the cuboid.
   */
  cuboid(float c, float d, float e)
  {
    l = c;
    b = d;
    h = e;
    Co++;
  }

  /**
   * @brief Calculates and prints the volume of the cuboid.
   *
   * This function calculates the volume of the cuboid by multiplying its length, breadth, and height.
   * The result is then printed to the standard output stream.
   *
   * @return void
   *
   * @note The volume is calculated as follows: volume = length * breadth * height.
   */
  void area()
  {
    a = l * b * h;
    cout << "Area is:" << a << endl;
  }
};

int cuboid::Co = 0;

/**
 * @brief The main function of the program.
 *
 * This function prompts the user to enter the dimensions of two cuboids, creates two cuboid objects,
 * calculates and prints their areas, and displays the total number of cuboid objects created.
 *
 * @return 0 to indicate successful program execution.
 *
 * @note The program uses the 'cin' and 'cout' streams for input and output.
 */
int main()
{
  float x, y, z;
  cout << "Enter length:";
  cin >> x;
  cout << "Enter breadth:";
  cin >> y;
  cout << "Enter width:";
  cin >> z;
  cuboid c1(x, y, z);
  c1.area();
  cout << "Enter length:";
  cin >> x;
  cout << "Enter breadth:";
  cin >> y;
  cout << "Enter width:";
  cin >> z;
  cuboid c2(x, y, z);
  c2.area();
  cout << " Number of Object created is:" << cuboid::Co << endl;
  return 0;
}
