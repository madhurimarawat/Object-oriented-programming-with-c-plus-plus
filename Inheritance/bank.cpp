#include<iostream>
using namespace std;
class bankAcc{
   public:
  int accno;
string name;
 float  am;
void init(int A,string n,float R){
 accno=A;
 name=n;
  am=R; }
  void deposit(){
float da=0;
  cout<<"Enter deposit amount:"<<endl;
cin>>da;
  am=am+da;cout<<am; }
  void withdraw(){
float wa=0;
 cout<<"Enter withdraw amount:"<<endl;
cin>>wa;
 float check=0;
check=am-wa;
if(check>2500){
am=am-wa;
  cout<<"Succesfully done!!!"<<endl;
 cout<<"Amount in your account after withdrawl:"<<am<<endl; } 
else{cout<<"Minimum balance exceeded!!"<<endl;
cout<<"First deposit amount!"<<endl; } } };
class current:public bankAcc{
public:
void greet(){
int ch;
     cout<<"Welcome to your current account"<<endl;
cout<<"What do you want to do?\nEnter 1 for  deposit and 2 for withdrawl"<<endl;
cin>>ch;
if((ch)==1){
deposit();
}
else{  withdraw(); } } };
class saving : public bankAcc{
public:
void greet(){
int c;
     cout<<"Welcome to your saving account"<<endl;
cout<<"What do you want to do?\nEnter 1 for  deposit and 2 for withdrawl"<<endl;
cin>>c;
if(c==1){
 deposit();
}
else{ withdraw(); } } };
int main(){
int accno, c; 
string name;
 float am;
cout<<"Welcome to your bank account"<<endl;
cout<<"Enter accno,name and amount"<<endl;
cin>>accno>>name>>am;
bankAcc b1;
b1.init(accno,name,am);
cout<<"What is your account?\nEnter 1 for  current and 2 for saving"<<endl;
cin>>c;
if((c)==1){
 current c1;
c1.init(accno,name,am);
c1.greet();
}
else{ 
saving s1;
s1.init(accno,name,am);
s1.greet();
 }
return 0;
}

