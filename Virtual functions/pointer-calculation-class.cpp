#include<iostream>
using namespace std;
class calc{
int s1,s2;
/*calc(int x,int y){
s1=x;s2=y;}*/
public:
virtual void add(){
int S=567+9;
  cout<<"sum is:"<<S;}};
class use:public calc{
public:
use(){cout<<"DERIVED CONSTRUCTOR\n";}
void add(){
cout<<"!!@#$%^()(*&^%$$#";}};
int main(){
 //calc *c(90,78);
calc *c;
use u;
c=&u;
c->add();
return 0;}