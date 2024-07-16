#include <iostream>
using namespace std;
int main()
{
//WAP in C++ to find print prime numbers upto 20
  int i;
  cout << "Prime numbers are:\n2" << endl;
  for (int i = 2; i <= 20; i++)
  {
    for (int j = 2; j < i; j++)
    {
      if (i % j == 0)
      {
        break;
      }
      else
      {
        if (i == j + 1)
          cout << i << endl;
      }
    }
  }

  return 0;
}