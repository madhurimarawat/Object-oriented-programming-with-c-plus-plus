#include<iostream>
using namespace std;
int main(){
int *point,x=90;
point=&x;
cout<<"X address is:"<<&x;
cout<<"\nX value is:"<<x;
cout<<"\nPointer is:"<<point;
cout<<"\nPointer value is:"<<*point; return 0; }