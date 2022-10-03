#include<iostream>
using namespace std;
class cal{
int x,y;
public:
cal (): x(90),y(12){
cout<<"X is:"<<x<<endl;cout<<"Y is:"<<y<<endl;}
void operator ++ () {
cout<<"After Incrementing x is:"<<++x<<endl;
cout<<"After Incrementing y is:"<<++y<<endl;  
}
void operator -- () {
cout<<"After Decrementing x is:"<<--x<<endl;
cout<<"After Decrementing y is:"<<--y<<endl; 
} };
int main(){
cal c1,c2;
++c1;
--c1;
++c2;
--c2;
return 0;}
