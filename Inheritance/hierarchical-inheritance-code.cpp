// Including Header File
#include <iostream>

// Using Namespace std
using namespace std;

// wap for hierarchical inheritance
class bankAcc
{
public:
  int accno;
  string name;
  float am;

  /**
   * @brief Initializes the bank account with given account number, name, and initial amount.
   *
   * This function sets the account number, name, and initial amount for the bank account.
   *
   * @param A The account number to be set.
   * @param n The name of the account holder to be set.
   * @param R The initial amount to be set.
   *
   * @return void This function does not return any value.
   */
  void init(int A, string n, float R)
  {
    accno = A;
    name = n;
    am = R;
  }

  /**
   * @brief Processes a deposit operation on the bank account.
   *
   * This function prompts the user to enter a deposit amount, adds it to the current balance,
   * and then displays the updated balance.
   *
   * @return void This function does not return any value.
   */
  void deposit()
  {
    float da;
    cout << "Enter deposit amount:" << endl;
    cin >> da;
    am = am + da;
    cout << "Amount in your account after deposit:" << am << endl;
  }

  /**
   * @brief Processes a withdrawal operation on the bank account.
   *
   * This function prompts the user to enter a withdrawal amount, checks if the withdrawal amount
   * exceeds the minimum balance of 2500, and then either withdraws the amount from the current balance
   * or displays an error message.
   *
   * @param wa The withdrawal amount to be processed.
   *
   * @return void This function does not return any value.
   */
  void withdraw()
  {
    float wa;
    cout << "Enter withdraw amount:" << endl;
    cin >> wa;
    if ((am - wa) > 2500)
    {
      cout << "Succesfully withdrawn amount:" << endl;
      am = am - wa;
      cout << "Amount in your account after withdrawl: " << am << endl;
    }
    else
    {
      cout << "Minimum balance exceeded!!" << endl;
      cout << "First deposit amount!" << endl;
    }
  }
};

// class current : public bankAcc
class current : public bankAcc
{
public:
  /**
   * @brief Displays a welcome message and prompts the user to choose an operation for the current account.
   *
   * This function displays a welcome message to the user and asks them to choose between depositing or withdrawing money.
   * It then calls the appropriate bankAcc member functions based on the user's choice.
   *
   * @return void This function does not return any value.
   */
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

// class saving : public bankAcc
class saving : public bankAcc
{
public:
  /**
   * @brief Displays a welcome message and prompts the user to choose an operation for the saving account.
   *
   * This function displays a welcome message to the user and asks them to choose between depositing or withdrawing money.
   * It then calls the appropriate bankAcc member functions based on the user's choice.
   *
   * @return void This function does not return any value.
   */
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

/**
 * @brief The main function of the program.
 *
 * This function serves as the entry point for the bank account management program.
 * It prompts the user to enter their account number, name, and initial amount,
 * creates instances of the bankAcc, current, and saving classes based on user input,
 * and calls the appropriate member functions to perform deposit and withdrawal operations.
 *
 * @return int Returns 0 to indicate successful program execution.
 */
int main()
{
  int accno, c;
  string name;
  float am;
  cout << "Welcome to your bank account" << endl;
  cout << "Enter accno:";
  cin >> accno;
  cout << "Enter name:";
  cin >> name;
  cout << "Enter amount:";
  cin >> am;
  bankAcc b1;
  b1.init(accno, name, am);
  cout << "What is your account?\nEnter 1 for  current and 2 for saving" << endl;
  cin >> c;
  if ((c) == 1)
  {
    current c1;
    c1.init(accno, name, am);
    c1.greet();
  }
  else
  {
    saving s1;
    s1.init(accno, name, am);
    s1.greet();
  }
  return 0;
}
