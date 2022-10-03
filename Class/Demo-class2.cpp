#include<iostream>
using namespace std;
class student{
public:
int id;
string name;
void insert(int i,string n){
id=i;
name=n;
}
void display(){
cout<<"Id is:"<<id<<""<<endl;
cout<<"Name is:"<<name<<""<<endl;

}
};
int main(){
 student s1;
 student s2;
s1.insert(201,"mansi");
s2.insert(205,"shruti");
s1.display();
s2.display();
return 0;
}