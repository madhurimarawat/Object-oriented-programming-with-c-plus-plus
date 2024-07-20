/**
 * The code defines an abstract base class "polygon" with a pure virtual function "sides" and two
 * derived classes "triangle" and "square" that implement the sides function to print the number of
 * sides for each shape.
 *
 * @return The program returns 0, which indicates successful execution.
 */

// Including Header Files
#include <iostream>

// Using namespace
using namespace std;

class polygon
{
public:
  virtual void sides() = 0;
  void print()
  {
    cout << "Abstract base class\n";
  }
};
class triangle : public polygon
{
public:
  void sides()
  {
    cout << "Triangle has 3 sides.\n";
    cout << "Implementing in derived class.\n";
  }
};
class square : public polygon
{
public:
  void sides()
  {
    cout << "Square has 4 sides.\n";
    cout << "Implementing in derived class.\n";
  }
};

// Main Function
int main()
{
  triangle t;
  t.sides();
  t.print();
  square s;
  s.sides();
  return 0;
}
