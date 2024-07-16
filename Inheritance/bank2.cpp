#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <process.h>
using namespace std;
class Bank_Account
{
//Declaration of data members
public:
  char name[20];
  char account_type[20];
  int account_number;
  int balance;
//member functions of the class Bank
// initialize function to initialize data members
  void initialize()
  {
    cout << "\nEnter Account Holders Name:";
    gets(name);
    cout << "\nEnter Account type:";
    gets(account_type);
    cout << "\nEnter account number:";
    cin >> account_number;
    cout << "\Enter balance to deposit:";
    cin >> balance;
  }
//deposit() function to deposit amount in account
  void deposit()
  {
    int bal;
    cout << "\nEnter the amout to deposit:";
    cin >> bal;
    balance += bal;
    cout << "\nAmount deposited successfully\nYour New Balance:" << balance;
  }
//check() function to withdraw amount and check remaining balance
  void check()
  {
    int bal;
    cout << "\nYour balance :" << balance << "\nEnter amount to withdraw:";
    cin >> bal;
    if (bal <= balance)
    {
      balance -= bal;
      cout << "\nRemaining Balance:" << balance;
    }
    else
    {
      exit(0);
    }
  }

//display function to display user information
  void display()
  {
    cout << "\nName :";
    puts(name);
    cout << "\nBalance :" << balance;
  }
};
int main()
{
  int i;
//clrscr();
//An array of objects of Bank class can be created to handle 10 customers and their data
//as Bank bk[10];
//Then run this array in loop to initialize and access it's data members

  Bank_Account bk;
  bk.initialize();
  cout << "\n 1. Your Information\n 2. Deposit\n 3. Withdraw\n Enter your choice\n";
  cin >> i;
  if (i == 1)
  {
    bk.display();
  }
  else if (i == 2)
  {
    bk.deposit();
  }
  else if (i == 3)
  {
    bk.check();
  }
  getch();
  return 0;
}

