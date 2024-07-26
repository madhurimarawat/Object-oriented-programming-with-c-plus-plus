#include <iostream>
using namespace std;
// wap for multilevel inheritance
class student
{
public:
  int id, clas;
  string name;
  float marks;
  /**
   * @brief Initializes the student object with provided id, name, and class.
   *
   * This function sets the id, name, and class attributes of the student object.
   *
   * @param A An integer representing the student's id.
   * @param n A string representing the student's name.
   * @param C An integer representing the student's class.
   *
   * @return void This function does not return any value.
   */
  void init(int A, string n, int C)
  {
    id = A;
    name = n;
    clas = C;
  }
  /**
   * @brief Displays the student's id, name, and class.
   *
   * This function prints the id, name, and class attributes of the student object to the console.
   *
   * @return void This function does not return any value.
   */
  void display()
  {
    cout << "Id is :" << id << endl;
    cout << "Name is :" << name << endl;
    cout << "Class is :" << clas << endl;
  }
};
class test : public student
{
public:
  /**
   * @brief Calculates the average marks of a student in multiple subjects.
   *
   * This function prompts the user to enter the number of subjects, the maximum marks for each subject,
   * and the marks obtained by the student in each subject. It then calculates and returns the average marks.
   *
   * @return float The average marks of the student.
   */
  float sub()
  {
    float n, m[12], l;
    float t = 0;
    cout << "Enter number of subjects:" << endl;
    cin >> n;
    cout << "Enter maximum number in subject:" << endl;
    cin >> l;
    cout << "Enter marks for subjects:\n"
         << endl;
    for (int i = 0; i < n; i++)
    {
      cout << "Subject" << i + 1 << ":";
      cin >> m[i];
    }
    for (int i = 0; i < n; i++)
    {
      t = t + m[i];
    }
    return float((t) / (l * n));
  }
};
class result : public test
{
  float R = sub();

public:
  /**
   * @brief Calculates and displays the student's percentage based on their marks.
   *
   * This function calculates the student's percentage by multiplying the average marks obtained
   * by the student (from the sub() function) by 100. It then prints the percentage to the console.
   *
   * @return void This function does not return any value.
   */
  void res()
  {
    float P;
    P = R * 100;
    cout << "Percentage is:" << P << endl;
  }
};

// Main Function (Driver Code)
int main()
{
  int id, c;
  string name;
  cout << "Enter id,name and class" << endl;
  cin >> id >> name >> c;
  student s1;
  s1.init(id, name, c);
  test t1;
  result r1;
  s1.display();
  r1.res();
  return 0;
}
