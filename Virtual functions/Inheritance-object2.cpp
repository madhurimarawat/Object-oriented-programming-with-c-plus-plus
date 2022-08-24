#include<iostream>
#include<stdio.h>
using namespace std;
class A{
//wap for virtual functions
private:   int sum;
public:
  int a,b;
A(){
cout<<"A Base class constructor\n"; }
  void add(int a,int b){
sum=a+b;
  cout<<"Sum is:"<<sum<<endl;}  
 void show(){
 cout<<"A Base class \n"; } };
class B:public A{
//derived class2
   public:
  int c,d;
private:
  int mul1;
public:
B(){
cout<<"B Derived class constructor\n"; }  
void mul(int ,int d){
mul1=c*d;
  cout<<"Multiplication is:"<<mul1<<endl;}
 void show(){
 cout<<"B Derived class \n"; }   };
class C:public A{
     public:
 int u,v;
void start(int u1 ,int v1){
u=u1;
v=v1; add(u,v); }
 void show(){
 cout<<"C Derived class \n"; } 
private:
int w,x;
public:
C(){
cout<<"C Derived  class constructor\n"; }
void init(int w1 ,int x1){
w=w1;
x=x1;   //mul(w,x);
 } };
class D:public B,public C{
public:
D(){
cout<<"D Derived class constructor\n"; }  
   void show(){
 cout<<"D Derived class \n"; }  };

int main(){
int x,y; 
cout<<"Enter first number:"; 
cin>>x;
cout<<"Enter second number:"; 
cin>>y;
D d;
d.B::add(90,78);
//d.A::add(x,y);Error dosen't work(D has not directly inherited A)
d.show();
d.B::show();
d.C::show();
//d.B::A.show();//Error dosen't work
//d.C::A.show();//Error dosen't work
B b; //b.A::add(x,y);(works)
b.add(x,y);
b.B::show(); C c; c.A::show();
return 0;
}

