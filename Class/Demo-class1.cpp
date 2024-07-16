#include <iostream>
using namespace std;
class demo
{
private:
  int a, b;
public:
  void input()
  {
    cout << "Enter value: ";
    cin >> a >> b;
  }
  void show()
  {
    cout << a << "\t" << b;
  }
};
int main()
{
  demo ob;
  ob.input();
  ob.show();
  return 0;
}
