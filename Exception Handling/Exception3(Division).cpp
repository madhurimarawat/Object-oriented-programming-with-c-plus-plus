#include<iostream>
using namespace std;
int main(){
//Exception Handling
int a,b;
cout<<"Enter first number:";
cin>>a;
cout<<"Enter second number:";
cin>>b;
try {
if(b==0){
throw b;}else{float c = float(a)/float(b); cout<<c;}
}
catch(int i)
{
cout<<"Denominator cannot be zero";}

}