#include <iostream>
using namespace std;
int main()
{
//WAP in C++ to find largest number of array
  int n, a[15], l = 0;
  cout << "Enter the number of element:";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cout << "Enter element " << i + 1 << ":";
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (a[0] < a[i])
    {
      a[0] = a[i];
    }
  }
  l = a[0];
  cout << "Largest number of the array is:" << l << endl;
  return 0;
}