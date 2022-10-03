#include <iostream>
using namespace std;
template<class X>
int linear(X a[],int n,X b){
for(int i=0;i<n;++i){
if(a[i]==b){ return i;}}
return -1;}
int main(){
int arr[]={12,90};
double arr2[]={12.23,90.32,98.7,65.4,12.33};
char arr3[]={'M','j','k','l','b','p','y'};
int i=linear(arr,2,12);
if(i!=-1){
cout<<"Element found at:"<<i+1<<endl;}else{cout<<"Element not found";}
int i2=linear(arr,2,13);
if(i2!=-1){
cout<<"Element found at:"<<i2+1<<endl;}else{cout<<"Element not found"<<endl;}
int i3=linear(arr2,5,12.33);
if(i3!=-1){
cout<<"Element found at:"<<i3+1<<endl;}else{cout<<"Element not found"<<endl;}
int i4=linear(arr2,5,98.7);
if(i4!=-1){
cout<<"Element found at:"<<i4+1<<endl;}else{cout<<"Element not found"<<endl;}
int i5=linear(arr3,7,'p');
if(i5!=-1){
cout<<"Element found at:"<<i5+1<<endl;}else{cout<<"Element not found"<<endl;}
}

