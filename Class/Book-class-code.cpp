/**
 * @file book.cpp
 * @brief This program demonstrates the usage of a book class in C++.
 *
 * The book class has private member variables for id, name, writer, subject, and course.
 * It provides public member functions to insert and display book details. The main function
 * demonstrates the usage of the book class by creating two book objects, allowing the user
 * to input details for each book, inserting the details into the book objects using the
 * insert() function, and displaying the details using the display() function.
 */

// Including Header File
#include <iostream>

// Using Namespace
using namespace std;

/// @brief Class for book
class book
{
private:
  int id;

public:
  string name;
  string writer;
  string subject;
  string course;

  /**
   * @brief Inserts book details into the object.
   *
   * This function takes five parameters and assigns them to the corresponding
   * member variables of the book object.
   *
   * @param i An integer representing the book's unique identifier.
   * @param n A string representing the book's name.
   * @param w A string representing the book's writer.
   * @param s A string representing the book's subject.
   * @param c A string representing the course the book is associated with.
   *
   * @return void This function does not return any value.
   */

  void insert(int i, string n, string w, string s, string c)
  {
    id = i;
    name = n;
    writer = w;
    subject = s;
    course = c;
  }

  /**
   * @brief Displays the book details.
   *
   * This function prints out the details of the book object, including its unique identifier, name, writer, subject, and course.
   *
   * @return void This function does not return any value.
   */

  void display()
  {
    cout << "Book details are:" << endl;
    cout << "Id is:" << id << "" << endl;
    cout << "Name is:" << name << "" << endl;
    cout << "Writer is:" << writer << "" << endl;

    cout << "Subject is:" << subject << "" << endl;
    cout << "Course is:" << course << "" << endl;
  }
};

/**
 * @brief The main function of the program.
 *
 * This function demonstrates the usage of the book class by creating two book objects,
 * b1 and b2, and allowing the user to input details for each book. The details are then
 * inserted into the book objects using the insert() function, and displayed using the
 * display() function.
 *
 * @return An integer representing the exit status of the program. A return value of 0
 * indicates that the program executed successfully.
 */

int main()
{
  book b1;
  book b2;
  int id;
  char name[100], writer[100], subject[100], course[100];
  cout << "Enter id,name,writer,subject,course:\n";
  cin >> id >> name >> writer >> subject >> course;
  b1.insert(id, name, writer, subject, course);
  b1.display();
  cout << "Enter id,name,writer,subject,course:\n";
  cin >> id >> name >> writer >> subject >> course;
  b2.insert(id, name, writer, subject, course);
  b2.display();
  return 0;
}