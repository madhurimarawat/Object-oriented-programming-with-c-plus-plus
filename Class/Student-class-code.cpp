#include<iostream>
using namespace std;
class student{
private:
int id;
public:
string name;
float perc;
void insert(int i,string n,float p){
id=i;
name=n;
perc=p;}
void display(){
cout<<"Student details are:"<<endl;
cout<<"Student Id is:"<<id<<""<<endl;
cout<<"Name is:"<<name<<""<<endl;
cout<<"Percentage is:"<<perc<<""<<endl;}};
int main(){
student s1;
student s2;
int id;
char name[100]; float pe;
 cout<<"Enter Student id,name and Percentage:\n";
cin>>id>>name>>pe;
s1.insert(id,name,pe);
s1.display();
 cout<<"Enter Student id,name and Percentage:\n";
cin>>id>>name>>pe;
s2.insert(id,name,pe);
s2.display();
return 0;
}