#include<iostream>
using namespace std;
class Circle{
private:
double radius;
public:
double compute_area(double r){radius=r;
double area= 3.14*radius*radius;
cout << "Radius is: " << radius << endl;
cout << "Area is: " << area;}};
int main(){
Circle obj;
// trying to access private data member
//obj.radius = 1.5;
obj.compute_area(1.5);
return 0;
}
