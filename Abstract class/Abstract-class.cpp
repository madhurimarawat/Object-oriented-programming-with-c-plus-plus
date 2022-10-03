#include<iostream>
using namespace std;
class polygon{
public:
virtual void sides()=0;
void print(){
cout<<"Abstract base class\n";
} };
class triangle:public polygon{
public:
void sides(){
cout<<"Triangle has 3 sides.\n";
cout<<"Implementing in derived class.\n";} };
class square:public polygon{
public:
void sides(){
cout<<"Square has 4 sides.\n";
cout<<"Implementing in derived class.\n";} };
int main(){
triangle t;
t.sides();
t.print();
square s;
s.sides();
return 0;
 }
/*polygon p;
 Abstract-class.cpp:20:9: error: cannot declare variable 'p' to be of abstract type 'polygon'
 polygon p;
         ^
Abstract-class.cpp:3:7: note:   because the following virtual functions are pure within 'polygon':
 class polygon{
       ^~~~~~~
Abstract-class.cpp:5:14: note:  virtual void polygon::sides()
 virtual void sides()=0;
              ^~~~~*/
/*Triangle has 3 sides.
Implementing in derived class.
Square has 4 sides.
Implementing in derived class.*/