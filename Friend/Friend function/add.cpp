#include<iostream>
#include<stdio.h>
using namespace std;
class calculation{
//wap for friend function
  int a;
int b;
private:
  int sum=0;
public:
void set(int c,int d){
a=c; b=d;} 
friend void add(calculation c);
friend void sub(calculation c); 
};
 void add(calculation c1){ int sum=c1.a+c1.b; cout<<"Friend function 1 called \n"; cout<<"Sum is:"<<sum<<endl; }
void sub(calculation c1){ int sub=c1.a-c1.b; cout<<"Friend function 2 called \n"; cout<<"Sub is:"<<sub<<endl; }
int main(){
int x,y; 
cout<<"Enter first number:"; 
cin>>x;
cout<<"Enter second number:"; 
cin>>y;
calculation c;
c.set(x,y);
add(c);
sub(c);
return 0;
}

