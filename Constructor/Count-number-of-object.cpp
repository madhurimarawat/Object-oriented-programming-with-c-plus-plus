#include <iostream>
using namespace std;
int count = 0;
/*WAP in C++ which defines a class with constructor and destructor
which will count number of objects created and destroyed.*/
class calc
{
public:
  calc()
  {
    count++;
    cout << "Number of objects created:" << count << endl;
  }
  ~calc()
  {
    cout << "Number of objects destroyed:" << count << endl;
    count--;
  }
};
int main()
{
  calc c1, c2, c3, c4;
  return 0;
}