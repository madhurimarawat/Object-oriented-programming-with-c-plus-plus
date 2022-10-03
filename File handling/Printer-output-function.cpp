#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream fout;
string line,line1;
fout.open("New Text Document.txt");
while(fout){
getline(cin,line);
if(line=="-1") break;
fout<<line<<endl;}
fout.close();
ifstream fin;
fin.open("New Text Document.txt", ios :: in);
while(fin){
getline(fin,line1);
cout<<line1<<endl;}
fin.close(); return 0;}

