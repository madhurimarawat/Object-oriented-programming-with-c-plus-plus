#include <iostream>
using namespace std;
class STUDENT
{
private:
  int roll_no;
  string name;
public:
  STUDENT() { }
  STUDENT(int roll, string n)
  {
    roll_no = roll;
    name = n;
  }
};
class TEST: public STUDENT
{
private:
  int *arr;
  int number_of_subjects;
public:
  TEST()
  {
    number_of_subjects = 6;
    arr = new int[number_of_subjects];
  }
  int getMarks()
  {
    cout << "Enter student's marks for six subject\n";
    for (int i = 0; i < 6; i++)
    {
      cout << "Mark   " <<  i + 1 << ":";
      cin >> arr[i];
    }
    int sum = 0;
    for (int  i = 0; i < 6; i++)
    {
      sum += arr[i];
    }
    return sum;
  }
};
class RESULT: public TEST
{
private:
  int total_marks;
public:
  int displayTotalMarks()
  {
    int p = getMarks();
  }
};
int main()
{
  RESULT t;
  cout << "The total marks is \t" << t.TEST::getMarks();
  return 0;
}
