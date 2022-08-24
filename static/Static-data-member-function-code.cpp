#include<iostream>
#include<stdio.h>
using namespace std;
class calc{
//wap for static member functions
  
int a;
 int b;
public:
  static int sum;
calc(int n1,int n2){
a=n1;
b=n2;}
  void add(){
sum=a+b;}
static void display(){
  cout<<"Sum is:"<<sum<<endl;}  };
int calc::sum=0;
int main(){
int x,y; 
cout<<"Enter first number:"; 
cin>>x;
cout<<"Enter second number:"; 
cin>>y;
calc c1(x,y);
c1.add();
calc::display();
return 0;
}

