#include<iostream>
using namespace std;
class Circle{
protected:
double radius=90;
public:
double compute_area(double r){radius=r;
double area= 3.14*radius*radius;
cout << "Radius is: " << radius << endl;
cout << "Area is: " << area<<endl;}};
class in : public Circle{
public:
void p(){cout << "Radius is: "<<radius<< endl;
}};
int main(){
Circle obj;
// trying to access private data member
//obj.radius = 1.5;
obj.compute_area(1.5);
in i;
i.p();
return 0;
}
