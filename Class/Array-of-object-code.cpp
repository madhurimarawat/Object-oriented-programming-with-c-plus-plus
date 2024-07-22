/**
 * @brief This program demonstrates the implementation of an array of objects in C++.
 *
 * The program defines a class `emp` to represent an employee with private attributes `id`, `name`, and `salary`.
 * The class provides public member functions `getdata` and `putdata` to set and display the employee data, respectively.
 *
 * In the `main` function, an array of `emp` objects `e1` is declared with a size of 23.
 * The user is prompted to enter the number of employee data to be stored.
 * Then, a loop is used to get and display the employee data using the `getdata` and `putdata` functions.
 *
 */

// Program in C++ to implement array of object
// Including Header Files
#include <iostream>

// Using namespace
using namespace std;

// Employee class
class emp
{
private:
  int id;

public:
  string name;
  float salary;
  void getdata(int i, string n, float s)
  {
    id = i;
    name = n;
    salary = s;
  }
  void putdata()
  {
    cout << "Employee details are:" << endl;
    cout << "Id is:" << id << "" << endl;
    cout << "Name is:" << name << "" << endl;
    cout << "Salary is:" << salary << "" << endl;
  }
};

// Main function
int main()
{
  emp e1[23];
  int n;
  cout << "Enter number of employees data to be stored:";
  cin >> n;
  int id, i;
  char name[100];
  float sa;
  for (i = 0; i < n; i++)
  {
    cout << "Enter id,name and salary:\n";
    cin >> id >> name >> sa;
    e1[i].getdata(id, name, sa);
    e1[i].putdata();
  }
  return 0;
}