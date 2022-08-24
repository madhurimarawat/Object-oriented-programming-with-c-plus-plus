#include<iostream>
#include<stdio.h>
using namespace std;
class cuboid{
//wap for static data member
   public:
  float l;
float b; float h;  static int Co;
private:
 float a;  
public:
cuboid(float c,float d,float e){
l=c;b=d;h=e;
  Co++;
 }
void area(){
 a=l*b*h;
  cout<<"Area is:"<<a<<endl;}  };
 int cuboid::Co = 0;
int main(){
float x,y,z; 
cout<<"Enter length:"; 
cin>>x;
cout<<"Enter breadth:"; 
cin>>y;
cout<<"Enter width:"; 
cin>>z;
cuboid c1(x,y,z);
c1.area();
cout<<"Enter length:"; 
cin>>x;
cout<<"Enter breadth:"; 
cin>>y;
cout<<"Enter width:"; 
cin>>z;
cuboid c2(x,y,z);
c2.area();
cout<<" Number of Object created is:"<<cuboid::Co<<endl;
return 0;
}

