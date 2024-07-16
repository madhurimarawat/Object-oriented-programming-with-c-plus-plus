#include <iostream>
using namespace std;
class book
{
private:
  int id;
public:
  string name;
  string writer;
  string subject;
  string course;
  void insert(int i, string n, string w, string s, string c)
  {
    id = i;
    name = n;
    writer = w;
    subject = s;
    course = c;
  }
  void display()
  {
    cout << "Book details are:" << endl;
    cout << "Id is:" << id << "" << endl;
    cout << "Name is:" << name << "" << endl;
    cout << "writer is:" << writer << "" << endl;

    cout << "subject is:" << subject << "" << endl;
    cout << "course is:" << course << "" << endl;

  }
};
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