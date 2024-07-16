#include <iostream>
using namespace std;
/*std::cout<<a/b; Abnormally terminate program*/
int main()
{
//Exception Handling
  int a = 10, b = 0;
  try
  {
//Dosen,t work int c = a/0; throw c;
    if (b == 0)
    {
      throw b;
    }
    else
    {
      int c = a / b;
      cout << c;
    }
  }
  catch (int)
  {
    cout << "Denominator cannot be zero" << endl;
  }

}