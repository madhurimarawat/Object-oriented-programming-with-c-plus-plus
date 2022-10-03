#include<iostream>
using namespace std;
class point{
public:
void setLength(int len);
int getLength(void);
point();
~point();
private:
double Length;
};
point::point(void){
cout<<"object is being created"<<endl;
}
point::~point(void){
cout<<"object is being deleted:"<<getLength()<<endl;
}
void point::setLength(int len){
Length= len;
}
int point::getLength(void){
 return Length;
}

int main(){
point l;
l.setLength(90);
cout<<"Length of object is:"<<l.getLength()<<endl;
point l1;
l1.setLength(60);
cout<<"Length of object is:"<<l1.getLength()<<endl;
return 0;
}
