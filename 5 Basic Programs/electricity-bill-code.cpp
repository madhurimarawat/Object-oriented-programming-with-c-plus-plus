#include <iostream>
using namespace std;
int main()
{
  int u, p;
  cout << "Enter numbers of units:\n";
  cin >> u;
  if ((u > 0) && (u <= 100))
  {
    p = u * 4;
  }
  else if ((u > 100) && (u <= 300))
  {
    p = u * 5;
  }
  else
  {
    p = u * 7;
  }
  cout << "Price is :" << p << "";
  return 0;
}
