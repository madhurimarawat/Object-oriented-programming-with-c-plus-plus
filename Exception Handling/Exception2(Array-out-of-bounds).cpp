#include<iostream>
using namespace std;
int i=0;
int main(){
//Exception Handling
//int a[5]={12,32,12,45,78,89};
/*Exception--
 error: too many initializers for 'int [5]'
 int a[5]={12,32,12,45,78,89};
                            ^*/
//cout<<a;
try{
int arr[5];
//for(int i=0;i<=5;i++){
cout<<"Enter five elements: "<<endl;
while("%d"){
if(i==6){throw i;
}
cout<<"Element " <<i+1 <<":";
cin>>arr[i];i++;
}
for(int i=0;i<5;i++){cout<<"\t"<<arr[i];}}
catch(int i){
cout<<"Too many elements";}
return 0;
}