/**
 * @brief This program demonstrates the usage of a simple student class with attributes for id and name.
 *        The class includes methods to insert and display student information.
 *
 * @details The student class has two public attributes: id (integer) and name (string).
 *          It includes two public methods: insert and display.
 *          The insert method sets the id and name attributes of the student object.
 *          The display method prints the id and name attributes of the student object to the console.
 *          The main function creates two student objects, s1 and s2, and calls the insert and display methods on them.
 */

// Including Header File
#include <iostream>

// Using Namespace
using namespace std;

/// @brief Class for student
class student
{
public:
  int id;
  string name;

  /**
   * @brief Inserts values into the student object.
   *
   * This function sets the id and name attributes of the student object.
   *
   * @param i An integer representing the student's id.
   * @param n A string representing the student's name.
   *
   * @return void
   */

  void insert(int i, string n)
  {
    id = i;
    name = n;
  }

  /**
   * @brief Displays the student's id and name.
   *
   * This function prints the id and name attributes of the student object to the console.
   *
   * @return void
   */

  void display()
  {
    cout << "Id is:" << id << "" << endl;
    cout << "Name is:" << name << "" << endl;
  }
};

/**
 * @brief The main function of the program.
 *
 * This function creates two student objects, s1 and s2, and calls the insert and display methods on them.
 *
 * @return An integer representing the exit status of the program.
 *         - 0: The program executed successfully.
 */

int main()
{
  student s1;
  student s2;
  s1.insert(201, "mansi");
  s2.insert(205, "shruti");
  s1.display();
  s2.display();
  return 0;
}