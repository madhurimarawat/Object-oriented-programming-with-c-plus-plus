#include<iostream>
using namespace std;
class emp{
private:
int id;
public:
string name;
float salary;
void insert(int i,string n,float s){
id=i;
name=n;
salary=s;}
void display(){
cout<<"Employee details are:"<<endl;
cout<<"Id is:"<<id<<""<<endl;
cout<<"Name is:"<<name<<""<<endl;
cout<<"Salary is:"<<salary<<""<<endl;}};
int main(){
emp e1;
emp e2;
int id;
char name[100]; float sa;
 cout<<"Enter id,name and salary:\n";
cin>>id>>name>>sa;
e1.insert(id,name,sa);
e1.display();
 cout<<"Enter id,name and salary:\n";
cin>>id>>name>>sa;
e2.insert(id,name,sa);
e2.display();
return 0;
}