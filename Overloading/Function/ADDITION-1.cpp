#include <iostream>
using namespace std;
class calc
{
public:
  int add(int a, int b)
  {
    return a + b;
  }
  float add(int a, int b, int c)
  {
    return a + b + c;
  }
};
int main()
{
  calc c;
  cout << c.add(12, 34) << endl;
  cout << c.add(10, 20, 90) << endl;
  return 0;
}