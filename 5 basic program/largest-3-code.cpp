#include<iostream>
using namespace std;
void large(int a ,int b,int c){
if (a>b){
   if(a>c){
cout<<"The largest number is:"<< a;
}
else{
 cout<<"The largest number is:"<< c;
}
}
else if(b>c){
 cout<<"The largest number is:"<< b;
}
else{
cout<<"The largest number is:"<< c;
} }
int main(){
 int n1,n2,n3;
cout<<"Enter number 1:"<<endl;
cin>>n1;
cout<<"Enter number 2:"<<endl;
cin>>n2;
cout<<"Enter number 3:"<<endl;
cin>>n3;
large(n1,n2,n3);
return 0;
}