#include <iostream>
#include <stdio.h>
using namespace std;
class student
{
//wap for  copy constructor
public:
  int roll;
  string name;
private:
  int id;
public:
  student(int n1, string n2, int n3)
  {
    roll = n1;
    name = n2;
    id = n3;
    id = n3;
    cout << "Parameterized Constructor is getting called:" << endl;
    cout << "Roll no is:" << roll << endl;
    cout << "Name  is:" << name << endl;
    cout << "Id  is:" << id << endl;
  }
  student(const student &s1)
  {
    roll = s1.roll;
    id = s1.id;
    name = s1.name;
    cout << "Copy Constructor is getting called:" << endl;
    cout << "Roll no is:" << roll << endl;
    cout << "Name  is:" << name << endl;
    cout << "Id  is:" << id << endl;
  }
};
int main()
{
  int x, z;
  string y;
  cout << "Enter roll number:";
  cin >> x;
  cout << "Enter name:";
  cin >> y;
  cout << "Enter id number:";
  cin >> z;
  student s1(x, y, z);
  student s2 = s1;
  return 0;
}
