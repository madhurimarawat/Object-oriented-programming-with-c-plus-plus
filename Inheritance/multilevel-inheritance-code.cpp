#include<iostream>
using namespace std;
//wap for multilevel inheritance
class student{
   public:
  int id,clas;
string name;
  float marks;
void init(int A,string n,int C){
 id=A;
 name=n;
 clas=C;  }
  void display(){
cout<<"Id is :"<<id<<endl;
cout<<"Name is :"<<name<<endl;
cout<<"Class is :"<<clas<<endl; } };
class test:public student{
public:
float sub(){
float n,m[12],l;
float t=0;
     cout<<"Enter number of subjects:"<<endl;
cin>>n;
 cout<<"Enter maximum number in subject:"<<endl;
cin>>l;
cout<<"Enter marks for subjects:\n"<<endl;
for(int i=0;i<n;i++){
cout<<"Subject"<<i+1<<":";
cin>>m[i]; }
for(int i=0;i<n;i++){
  t=t+m[i]; } 
return float((t)/(l*n));
}
};
class result : public test{
float R=sub(); 
public:
void res(){ 
float P;
P=R*100; 
cout<<"Percentage is:"<<P<<endl;  }};
int main(){
int id, c; 
string name;
cout<<"Enter id,name and class"<<endl;
cin>>id>>name>>c;
student s1;
s1.init(id,name,c);
test t1;
result r1;
s1.display();
r1.res();
return 0;
}

