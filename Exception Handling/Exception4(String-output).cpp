#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a=10, b=0, d;
    // try block activates exception handling
    try 
    {
        if(b == 0)
        {
            // throw custom exception
string c = "Division by zero not possible";
            throw c;}
          else{  d = a/b;
        }
    }
    catch(string ex) // catches exception
    {
        cout<<ex;
    }
    return 0;
}