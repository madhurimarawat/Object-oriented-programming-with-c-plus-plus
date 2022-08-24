#include<iostream>
#include<stdio.h>
using namespace std;
class calculation{
//wap for single inheritance
   public:
  int a;
int b;
private:
  int sum=0;
public:
  void add(int c,int d){
sum=c+d;
  cout<<"Sum is:"<<sum<<endl;}  };
class use:public calculation{
public:
void init(int n1,int n2){
add(n1,n2); } };
int main(){
int x,y; 
cout<<"Enter first number:"; 
cin>>x;
cout<<"Enter second number:"; 
cin>>y;
use u1;
u1.init(x,y);
return 0;
}

