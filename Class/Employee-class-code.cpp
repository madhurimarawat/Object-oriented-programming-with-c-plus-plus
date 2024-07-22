/**
 * @brief This program demonstrates the usage of a class to represent employee details.
 *
 * The emp class has private member variables for id, name, and salary. It provides public member functions
 * to insert and display employee details. The main function demonstrates the usage of the emp class by
 * creating two employee objects, prompting the user to enter employee details, inserting them into the
 * objects, and displaying the employee details.
 */

// Including Header File
#include <iostream>

// Using Namespace
using namespace std;

/// @brief Class for employee
class emp
{
private:
  int id;

public:
  string name;
  float salary;

  /**
   * @brief Inserts employee details into the object.
   *
   * This function takes three parameters: id, name, and salary. It assigns these values to the corresponding
   * member variables of the employee object.
   *
   * @param i An integer representing the employee's id.
   * @param n A string representing the employee's name.
   * @param s A float representing the employee's salary.
   *
   * @return void. This function does not return any value.
   */

  void insert(int i, string n, float s)
  {
    id = i;
    name = n;
    salary = s;
  }

  /**
   * @brief Displays the employee details.
   *
   * This function prints the employee's id, name, and salary to the standard output stream.
   *
   * @return void. This function does not return any value.
   */

  void display()
  {
    cout << "Employee details are:" << endl;
    cout << "Id is:" << id << "" << endl;
    cout << "Name is:" << name << "" << endl;
    cout << "Salary is:" << salary << "" << endl;
  }
};

/**
 * @brief The main function of the program.
 *
 * This function demonstrates the usage of the emp class by creating two employee objects, e1 and e2.
 * It prompts the user to enter employee details, inserts them into the objects using the insert function,
 * and then displays the employee details using the display function.
 *
 * @return An integer representing the exit status of the program. A return value of 0 indicates successful execution.
 */

int main()
{
  emp e1;
  emp e2;
  int id;
  char name[100];
  float sa;
  cout << "Enter id,name and salary:\n";
  cin >> id >> name >> sa;
  e1.insert(id, name, sa);
  e1.display();
  cout << "Enter id,name and salary:\n";
  cin >> id >> name >> sa;
  e2.insert(id, name, sa);
  e2.display();
  return 0;
}