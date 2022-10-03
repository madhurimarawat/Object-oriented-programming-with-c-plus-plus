#include<iostream>
using namespace std;
int main(){
//Exception Handling
int a,b;
cout<<"Enter first number;\n";
cin>>a;
cout<<"Enter second number;\n";
cin>>b;
try {
if(b==0){
throw b;}
int c = a/b;
cout<<c;
}
catch(int)
{
cout<<"Denominator cannot be zero"<<endl; }

}