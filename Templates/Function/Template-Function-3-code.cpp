#include <iostream>
using namespace std;
template<typename p>
p func(p a,p b){
cout<<a<<'\t'<<b<<endl; }
int main(){
func(12,90);
func(12.23,90.32);
func('H','W');
return 0;}

