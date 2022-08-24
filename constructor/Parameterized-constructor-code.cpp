#include<iostream>
#include<stdio.h>
using namespace std;
class calc{
//wap for  parameterized constructor
   public:
  int a;
int b;
private:
  int sum;
public:
calc(int n1,int n2){
a=n1;
b=n2; cout<<" Parameterized Constructor is getting called:"<<endl; cout<<"Value of a is:"<<a<<endl; cout<<"Value of b is:"<<b<<endl;}
  void add(){
sum=a+b;
  cout<<"Sum is:"<<sum<<endl;}  };
int main(){
int x,y; 
cout<<"Enter first number:"; 
cin>>x;
cout<<"Enter second number:"; 
cin>>y;
calc c1(x,y); 
c1.add();
return 0;
}

