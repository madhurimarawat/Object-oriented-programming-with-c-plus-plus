#include <iostream>
using namespace std;
class Count
{
private:
  int a, b;
public:
// Constructor to initialize count to 5
  Count() : a(23), b(13) {}
//Count() : b(13){}
// Overload ++ when used as prefix
  void operator ++ ()
  {
    ++a;
    ++b;
  }
  void operator -- ()
  {
    --a;
    --b;
  }
  void display()
  {
    cout << "Count: " << a << endl;
    cout << "Count: " << b << endl;
  }
};
int main()
{
  Count count1, count2;
// Call the "void operator ++ ()" function
  ++count1;
  count1.display();
  --count2;
  count2.display();
  return 0;
}