#include <iostream>
#include <iomanip>
using namespace std;
class flower
{
private:
  string f1;
  string f2;
public:
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
int main()
{
  flower fl;
  return 0;
}
/*Manipulator endl is used.
First flower is:Lily
Manipulator setw is used.
Second flower is:         Rose*/