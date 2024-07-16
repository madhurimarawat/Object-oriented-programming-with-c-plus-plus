#include <iostream>
using namespace std;
class first
{
public:
  void show() {cout << "First Class!!" << endl;}
};
class contain
{
  first f1;
public:
  contain()
  {
    f1.show();
  }
};
int main()
{
  contain c1;
  return 0;
}