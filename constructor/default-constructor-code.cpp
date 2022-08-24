#include<iostream>
using namespace std;
class flower{
  private:
 string f1;
 string f2;
public:
flower(){
  f1="Lily";
f2="Rose";
cout<<"Default constructor is called"<<endl;
cout<<"First flower is:"<<f1<<endl;
cout<<"Second flower is:"<<f2<<endl; }
};
int main(){
 flower fl;
return 0;
}
