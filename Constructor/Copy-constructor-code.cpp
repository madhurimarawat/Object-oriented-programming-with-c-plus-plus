/**
 * @brief This program demonstrates the usage of constructors in a Student class.
 *
 * The Student class has member variables for roll number, name, and id.
 * It includes a parameterized constructor and a copy constructor.
 * The parameterized constructor initializes the roll number, name, and id.
 * The copy constructor creates a new student object by copying the values from another student object.
 *
 * The main function prompts the user to enter roll number, name, and id number.
 * It then creates two student objects: s1 using the parameterized constructor,
 * and s2 using the copy constructor.
 */

// Including Header File
#include <iostream>

// Using Namespace
using namespace std;

/// @brief Class for Student object.
class student
{
public:
  int roll;
  string name;

private:
  int id;

public:
  /**
   * @brief Constructor for the student class that initializes the roll number, name, and id.
   *
   * This constructor takes three parameters: roll number (n1), name (n2), and id (n3).
   * It assigns the values of n1, n2, and n3 to the corresponding member variables roll, name, and id.
   * The id is assigned twice, which is redundant and can be optimized.
   *
   * @param n1 The roll number of the student.
   * @param n2 The name of the student.
   * @param n3 The id of the student.
   *
   * @return No return value.
   */

  student(int n1, string n2, int n3)
  {
    roll = n1;
    name = n2;
    id = n3;
    id = n3;
    cout << "Parameterized Constructor is getting called:" << endl;
    cout << "Roll no is:" << roll << endl;
    cout << "Name  is:" << name << endl;
    cout << "Id  is:" << id << endl;
  }

  /**
   * @brief Copy constructor for the student class.
   *
   * This copy constructor creates a new student object by copying the values of another student object.
   * It initializes the roll number, name, and id of the new object with the corresponding values from the given student object.
   *
   * @param s1 The reference to the student object from which the values will be copied.
   *
   * @return No return value.
   *
   * @note The copy constructor is called when a new object is created as a copy of an existing object.
   * @note The copy constructor is automatically called when an object is passed by value or returned by value.
   * @note The copy constructor is not called when an object is passed by reference or returned by reference.
   * @note The copy constructor can be explicitly called using the syntax: student s2(s1); or student s2 = s1;
   */

  student(const student &s1)
  {
    roll = s1.roll;
    id = s1.id;
    name = s1.name;
    cout << "Copy Constructor is getting called:" << endl;
    cout << "Roll no is:" << roll << endl;
    cout << "Name  is:" << name << endl;
    cout << "Id  is:" << id << endl;
  }
};

/**
 * @brief The main function of the program.
 *
 * This function prompts the user to enter roll number, name, and id number.
 * It then creates two student objects: s1 using the parameterized constructor,
 * and s2 using the copy constructor.
 *
 * @return 0 to indicate successful program execution.
 *
 * @note The main function demonstrates the usage of the student class constructors.
 */

int main()
{
  int x, z;
  string y;
  cout << "Enter roll number:";
  cin >> x;
  cout << "Enter name:";
  cin >> y;
  cout << "Enter id number:";
  cin >> z;
  student s1(x, y, z);
  student s2 = s1;
  return 0;
}
