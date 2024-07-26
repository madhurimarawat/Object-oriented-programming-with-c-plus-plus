// Including Header File
#include <iostream>

// Using Namespace std
using namespace std;

// Class BankAccount
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

  /**
   * @brief This function allows the user to deposit money into their account.
   *
   * The function prompts the user to enter the deposit amount, adds it to the current balance,
   * and then displays the updated balance.
   *
   * @return void - The function does not return any value.
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
   * @brief This function allows the user to withdraw money from their account.
   *
   * The function prompts the user to enter the withdrawal amount, checks if the withdrawal amount
   * exceeds the minimum balance of 2500, and then either deducts the amount from the current balance
   * and displays the updated balance, or displays an error message if the minimum balance is exceeded.
   *
   * @param wa The withdrawal amount entered by the user.
   * @return void - The function does not return any value.
   */
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

// Current and Saving Class Inheritance

class current : public bankAcc
{
public:
  /**
   * @brief Constructor for the current account class.
   *
   * This constructor initializes the account number, name, and balance of a current account.
   *
   * @param A The account number to be assigned to the new current account.
   * @param n The name of the account holder to be assigned to the new current account.
   * @param R The initial balance to be assigned to the new current account.
   */
  current(int A, string n, float R)
  {
    accno = A;
    name = n;
    am = R;
  }
  /**
   * @brief This function greets the user and prompts them to choose an action.
   *
   * The function displays a welcome message, asks the user to choose between depositing or withdrawing money,
   * and then calls the appropriate deposit() or withdraw() function based on the user's choice.
   *
   * @return void - The function does not return any value.
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

// Saving Class Inheritance
class saving : public bankAcc
{
public:
  /**
   * @brief Constructor for the saving account class.
   *
   * This constructor initializes the account number, name, and balance of a saving account.
   *
   * @param A The account number to be assigned to the new saving account.
   * @param n The name of the account holder to be assigned to the new saving account.
   * @param R The initial balance to be assigned to the new saving account.
   */
  saving(int A, string n, float R)
  {
    accno = A;
    name = n;
    am = R;
  }

  /**
   * @brief This function greets the user and prompts them to choose an action.
   *
   * The function displays a welcome message, asks the user to choose between depositing or withdrawing money,
   * and then calls the appropriate deposit() or withdraw() function based on the user's choice.
   *
   * @return void - The function does not return any value.
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

// Main Function

/**
 * @brief The main function of the bank account program.
 *
 * This function prompts the user to enter their account number, name, and initial balance,
 * then asks them to choose between a current or saving account. Depending on their choice,
 * it creates an instance of the corresponding class (current or saving) and calls the greet() function.
 *
 * @return int - The main function returns 0 to indicate successful program execution.
 */

int main()
{
  int accno, c;
  string name;
  float am;
  cout << "Welcome to your bank account" << endl;
  cout << "Enter accno,name and amount" << endl;
  cin >> accno >> name >> am;
  // bankAcc b1(accno,name,am);
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