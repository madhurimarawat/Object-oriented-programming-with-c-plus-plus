/**
 * @file student.cpp
 * @brief This program demonstrates the usage of a student class to store and display student details.
 *
 * The student class has private member variables for student id, name, and percentage.
 * It provides public member functions to insert and display student details.
 * The main function demonstrates the usage of the student class by creating two student objects,
 * taking input from the user, inserting the details into the objects, and displaying the details.
 */

// Including Header File
#include <iostream>

// Using Namespace
using namespace std;

/// @brief Class for Circle calculations
class student
{
private:
  int id;

public:
  string name;
  float perc;

  /**
   * @brief Inserts student details into the object.
   *
   * This function takes three parameters: student id, name, and percentage.
   * It assigns these values to the corresponding member variables of the student object.
   *
   * @param i An integer representing the student's id.
   * @param n A string representing the student's name.
   * @param p A float representing the student's percentage.
   *
   * @return void
   *
   * @note This function does not return any value. It only modifies the member variables of the student object.
   */

  void insert(int i, string n, float p)
  {
    id = i;
    name = n;
    perc = p;
  }

  /**
   * @brief Displays the student's details.
   *
   * This function prints out the student's id, name, and percentage.
   *
   * @return void
   *
   * @note This function does not return any value. It only prints the student's details.
   */

  void display()
  {
    cout << "Student details are:" << endl;
    cout << "Student Id is:" << id << "" << endl;
    cout << "Name is:" << name << "" << endl;
    cout << "Percentage is:" << perc << "" << endl;
  }
};

/**
 * @brief The main function of the program.
 *
 * This function demonstrates the usage of the student class by creating two student objects,
 * taking input from the user, inserting the details into the objects, and displaying the details.
 *
 * @return An integer representing the exit status of the program.
 *         A return value of 0 indicates successful program execution.
 *
 * @note This function does not return any value. It only demonstrates the usage of the student class.
 */

int main()
{
  student s1;
  student s2;
  int id;
  char name[100];
  float pe;
  cout << "Enter Student id,name and Percentage:\n";
  cin >> id >> name >> pe;
  s1.insert(id, name, pe);
  s1.display();
  cout << "Enter Student id,name and Percentage:\n";
  cin >> id >> name >> pe;
  s2.insert(id, name, pe);
  s2.display();
  return 0;
}