/*  C++ Program to Read Write Student Details using File Handling  */

#include<iostream>
#include<fstream>
using namespace std;

// define a class to store student data
class student
{
   int roll;
   char name[30];
   float marks;
public:
   student() { }
   void getData(); // get student data from user
   void displayData(); // display data
};

void student :: getData() {
   cout << "Enter Roll No. :";
   cin >> roll;
   cin.ignore(); // ignore the newline char inserted when you press enter
   cout << "Enter Name :";
   cin.getline(name, 30);
   cout << "Enter Marks :";
   cin >> marks;
}

void student :: displayData() {
   cout << "Roll No. :" << roll << endl;
   cout << "Name :" << name << endl;
   cout << "Marks :" << marks << endl;
}

int main()
{
   student s[3]; // array of 3 student objects
   fstream file;
   int i;

   file.open("Student-data.txt", ios :: out); // open file for writing
    cout << "Writing Student information to the file :- " << endl;
    cout << "Enter 3 students Details to the File :- " << endl;

   for (i = 0; i < 3; i++)
    {
      s[i].getData();
      // write the object to a file
      file.write((char *)&s[i], sizeof(s[i]));
    }

   file.close(); // close the file

   file.open("Student-data.txt", ios :: in); // open file for reading
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
