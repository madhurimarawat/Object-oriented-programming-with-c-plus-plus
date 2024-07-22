/*  C++ Program to Read Write Student Details using File Handling  */

// Including Header File
#include <iostream>
#include <fstream>

// Namespace Declaration
using namespace std;

// define a class to store student data
class student
{
  int roll;
  char name[30];
  float marks;

public:
  /**
   * @brief Default constructor for the student class.
   *
   * This constructor initializes an instance of the student class with default values.
   * It does not perform any specific operations, but it is essential for creating valid student objects.
   *
   * @return No return value.
   */

  student() {}

  /**
   * @brief Function to get student data from user.
   *
   * This function prompts the user to enter the roll number, name, and marks of a student.
   * The entered data is then stored in the respective member variables of the student object.
   *
   * @return No return value.
   *
   * @note This function is a member function of the student class.
   *
   * @see displayData()
   */

  void getData(); // get student data from user

  /**
   * @brief Function to display student data.
   *
   * This function prints the roll number, name, and marks of a student object to the standard output.
   * The data is retrieved from the respective member variables of the student object.
   *
   * @return No return value.
   *
   * @note This function is a member function of the student class.
   *
   * @see getData()
   */
  void student ::displayData()
  {
    cout << "Roll No. :" << roll << endl;
    cout << "Name :" << name << endl;
    cout << "Marks :" << marks << endl;
  } // display data
};

/**
 * @brief Function to get student data from user.
 *
 * This function prompts the user to enter the roll number, name, and marks of a student.
 * The entered data is then stored in the respective member variables of the student object.
 *
 * @return No return value.
 *
 * @note This function is a member function of the student class.
 *
 * @see displayData()
 *
 * @param[in,out] roll  Reference to an integer variable to store the roll number.
 * @param[in,out] name  Reference to a character array to store the student's name.
 * @param[in,out] marks Reference to a float variable to store the student's marks.
 */
void student ::getData()
{
  cout << "Enter Roll No. :";
  cin >> roll;
  cin.ignore(); // ignore the newline char inserted when you press enter
  cout << "Enter Name :";
  cin.getline(name, 30);
  cout << "Enter Marks :";
  cin >> marks;
}

/**
 * @brief Function to display student data.
 *
 * This function prints the roll number, name, and marks of a student object to the standard output.
 * The data is retrieved from the respective member variables of the student object.
 *
 * @return No return value.
 *
 * @note This function is a member function of the student class.
 *
 * @see getData()
 *
 * @param[in] roll  The roll number of the student.
 * @param[in] name  The name of the student.
 * @param[in] marks The marks of the student.
 */
void student ::displayData()
{
  cout << "Roll No. :" << roll << endl;
  cout << "Name :" << name << endl;
  cout << "Marks :" << marks << endl;
}

/**
 * @brief Main function to demonstrate reading and writing student data using file handling.
 *
 * This function creates an array of 3 student objects, opens a file for writing, prompts the user to enter 3 students' details,
 * writes the student objects to the file, closes the file, opens the file for reading, reads the student objects from the file,
 * and displays the student data to the standard output.
 *
 * @return An integer value representing the exit status of the program. A return value of 0 indicates successful execution.
 *
 * @note The student data is stored in a binary file named "Student-data.txt".
 *
 * @see student::getData()
 * @see student::displayData()
 */
int main()
{
  student s[3]; // array of 3 student objects
  fstream file;
  int i;

  file.open("Student-data.txt", ios ::out); // open file for writing
  cout << "Writing Student information to the file :- " << endl;
  cout << "Enter 3 students Details to the File :- " << endl;

  for (i = 0; i < 3; i++)
  {
    s[i].getData();
    // write the object to a file
    file.write((char *)&s[i], sizeof(s[i]));
  }

  file.close(); // close the file

  file.open("Student-data.txt", ios ::in); // open file for reading
  cout << "Reading Student information to the file :- " << endl;

  for (i = 0; i < 3; i++)
  {
    // read an object from a file
    file.read((char *)&s[i], sizeof(s[i]));
    s[i].displayData();
  }

  file.close(); // close the file

  return 0;
}
