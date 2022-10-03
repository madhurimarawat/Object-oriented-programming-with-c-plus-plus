#include<iostream>
using namespace std;
//program to implement array of object
class emp{
private:
int id;
public:
string name;
float salary;
void getdata(int i,string n,float s){
id=i;
name=n;
salary=s;}
void putdata(){
cout<<"Employee details are:"<<endl;
cout<<"Id is:"<<id<<""<<endl;
cout<<"Name is:"<<name<<""<<endl;
cout<<"Salary is:"<<salary<<""<<endl;}};
int main(){
emp e1[23];
int n;
cout<<"Enter number of employees data to be stored:";
cin>>n;
int id,i;
char name[100]; float sa;
for(i=0;i<n;i++){
 cout<<"Enter id,name and salary:\n";
cin>>id>>name>>sa;
e1[i].getdata(id,name,sa);
e1[i].putdata(); }
return 0;
}