// Including Header File
#include <iostream>

// Using Namespace std
using namespace std;

/// @brief The bankAcc class represents a bank account and includes member functions for
/// initializing the account, processing deposits, and withdrawals. The class is well-documented with appropriate comments for each member function, providing clear explanations of their purpose, parameters, return values, and any assumptions or requirements.

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
   * @return void. This function does not return any value.
   */

  void init(int A, string n, float R)
  {
    accno = A;
    name = n;
    am = R;
  }

  /**
   * @brief Processes a deposit operation for the bank account.
   *
   * This function prompts the user to enter a deposit amount, adds it to the current account balance,
   * and then displays the updated balance.
   *
   * @return void. This function does not return any value.
   *
   * @note This function assumes that the user input is valid and within the expected range.
   */

  void deposit()
  {
    float da = 0;
    cout << "Enter deposit amount:" << endl;
    cin >> da;
    am = am + da;
    cout << am;
  }

  /**
   * @brief Processes a withdrawal operation for the bank account.
   *
   * This function prompts the user to enter a withdrawal amount, checks if the withdrawal amount
   * exceeds the minimum balance of 2500, and then either deducts the amount from the current account balance
   * and displays the updated balance, or displays an error message if the minimum balance is exceeded.
   *
   * @return void. This function does not return any value.
   *
   * @note This function assumes that the user input is valid and within the expected range.
   */

  void withdraw()
  {
    float wa = 0;
    cout << "Enter withdraw amount:" << endl;
    cin >> wa;
    float check = 0;
    check = am - wa;
    if (check > 2500)
    {
      am = am - wa;
      cout << "Succesfully done!!!" << endl;
      cout << "Amount in your account after withdrawl:" << am << endl;
    }
    else
    {
      cout << "Minimum balance exceeded!!" << endl;
      cout << "First deposit amount!" << endl;
    }
  }
};

/// @brief The current class inherits from the bankAcc class and contains a greet() function that handles user interactions for depositing or withdrawing funds from a current bank account.
class current : public bankAcc
{
public:
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
 * @brief The main function of the program. It handles user interactions for creating a bank account,
 * selecting the account type (current or saving), and performing deposit or withdrawal operations.
 *
 * @return 0 to indicate successful program execution.
 *
 * @note This function assumes that the user input is valid and within the expected range.
 */

int main()
{
  int accno, c;
  string name;
  float am;
  cout << "Welcome to your bank account" << endl;
  cout << "Enter accno,name and amount" << endl;
  cin >> accno >> name >> am;

  // Create a bank account object and initialize it with user input
  bankAcc b1;
  b1.init(accno, name, am);

  cout << "What is your account?\nEnter 1 for  current and 2 for saving" << endl;
  cin >> c;

  // Depending on the user's choice, create a current or saving account object, initialize it, and call the greet function
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
