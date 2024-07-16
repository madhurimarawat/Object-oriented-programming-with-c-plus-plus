#include <iostream>
#include <stdio.h>
using namespace std;
class bankAcc
{
public:
  int accno;
  string name;
  float am;
  /*bankAcc(int A,string n,float R){
   accno=A;
   name=n;
    am=R;  }*/
  void deposit()
  {
    float da;
    cout << "Enter deposit amount:" << endl;
    cin >> da;
    am = am + da;
    cout << "Amount in your account after deposit:" << am << endl;
  }
  void withdraw()
  {
    float wa;
    cout << "Enter withdraw amount:" << endl;
    cin >> wa;
    if ((am - wa) > 2500)
    {
      am -= wa;
      cout << "Amount in your account after withdrawl:" << am << endl;
    }
    else
    {
      cout << "Minimum balance exceeded!!" << endl;
      cout << "First deposit amount!" << endl;
    }
  }
};
class current: public bankAcc
{
public:
  current(int A, string n, float R)
  {
    accno = A;
    name = n;
    am = R;
  }
  void greet()
  {
    int ch;
    cout << "Welcome to your current account" << endl;
    cout << "What do you want to do?\nEnter 1 for  deposit and 2 for withdrawl" << endl;
    cin >> ch;
    if ((ch) == 1)
    {
      deposit();
    }
    else
    {
      withdraw();
    }
  }
};
class saving : public bankAcc
{
public:
  saving(int A, string n, float R)
  {
    accno = A;
    name = n;
    am = R;
  }
  void greet()
  {
    int c;
    cout << "Welcome to your saving account" << endl;
    cout << "What do you want to do?\nEnter 1 for  deposit and 2 for withdrawl" << endl;
    cin >> c;
    if (c == 1)
    {
      deposit();
    }
    else
    {
      withdraw();
    }
  }
};
int main()
{
  int accno, c;
  string name;
  float am;
  cout << "Welcome to your bank account" << endl;
  cout << "Enter accno,name and amount" << endl;
  cin >> accno >> name >> am;
//bankAcc b1(accno,name,am);
  cout << "What is your account?\nEnter 1 for  current and 2 for saving" << endl;
  cin >> c;
  if ((c) == 1)
  {
    current c1(accno, name, am);
    c1.greet();
  }
  else
  {
    saving s1(accno, name, am);
    s1.greet();
  }
  return 0;
}

