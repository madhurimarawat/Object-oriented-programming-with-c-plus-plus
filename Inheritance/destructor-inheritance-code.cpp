#include<iostream>
#include<stdio.h>
using namespace std;
class calculation{
//wap for multiple inheritance
   public:
  int a;
int b;
private:
  int sum;
public:
calculation(){
cout<<"Calculation Base class constructor\n"; }
~calculation(){
cout<<"Calculation Base class Destructor\n"; }
  void add(int a,int b){
sum=a+b;
  cout<<"Sum is:"<<sum<<endl;}  };
class calculation2{
//derived class2
   public:
  int c;
int d;
private:
  int mul1;
public:
 calculation2(){
cout<<"Calculation2 Derived class constructor\n"; }  
~calculation2(){
cout<<"Calculation2 Derived class Destructor\n"; } 
void mul(int ,int d){
mul1=c*d;
  cout<<"Multiplication is:"<<mul1<<endl;}  };
class solve:public calculation,calculation2{
     public:
 int u,v;
void start(int u1 ,int v1){
u=u1;
v=v1; add(u,v); }
private:
int w,x;
public:
solve(){
cout<<"Solve Derived  class constructor\n"; }
~solve(){
cout<<"Solve Derived class Destructor\n"; }
void init(int w1 ,int x1){
w=w1;
x=x1;   mul(w,x); } };
int main(){
int x,y; 
cout<<"Enter first number:"; 
cin>>x;
cout<<"Enter second number:"; 
cin>>y;
solve s1;
s1.start(x,y);
solve s2;
s2.init(x,y);
return 0;
}

