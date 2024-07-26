#include <iostream>
using namespace std;
class STUDENT
{
private:
  int roll_no;
  string name;

public:
  /**
   * @brief Default constructor for the STUDENT class.
   *
   * This constructor initializes the private member variables of the STUDENT class.
   * It does not take any parameters and sets the roll_no and name to default values.
   *
   * @return This constructor does not return any value.
   */
  STUDENT() {}
  /**
   * @brief Constructor for the STUDENT class.
   *
   * This constructor initializes the private member variables of the STUDENT class.
   * It takes two parameters: roll (integer) and n (string).
   *
   * @param roll The roll number of the student.
   * @param n The name of the student.
   *
   * @return This constructor does not return any value.
   */
  STUDENT(int roll, string n)
  {
    roll_no = roll;
    name = n;
  }
};
class TEST : public STUDENT
{
private:
  int *arr;
  int number_of_subjects;

public:
  /**
   * @brief Constructor for the TEST class.
   *
   * This constructor initializes the private member variables of the TEST class.
   * It sets the number of subjects to 6 and dynamically allocates memory for an array of integers.
   *
   * @return This constructor does not return any value.
   */
  TEST()
  {
    number_of_subjects = 6;
    arr = new int[number_of_subjects];
  }

  /**
   * @brief This function calculates and returns the total marks obtained by the student.
   *
   * The function prompts the user to enter the marks for six subjects.
   * It then calculates the sum of these marks and returns the total.
   *
   * @return An integer representing the total marks obtained by the student.
   */
  int getMarks()
  {
    cout << "Enter student's marks for six subject\n";
    for (int i = 0; i < 6; i++)
    {
      cout << "Mark   " << i + 1 << ":";
      cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
      sum += arr[i];
    }
    return sum;
  }
};
class RESULT : public TEST
{
private:
  int total_marks;

public:
  /**
   * @brief This function calculates and displays the total marks obtained by the student.
   *
   * The function calls the getMarks() function from the TEST class to obtain the marks for six subjects.
   * It then stores the returned total marks in the private member variable total_marks.
   * Finally, it returns the total marks.
   *
   * @return An integer representing the total marks obtained by the student.
   */
  int displayTotalMarks()
  {
    int p = getMarks();
    // Store the total marks obtained from getMarks() in total_marks
    total_marks = p;
    // Return the total marks
    return total_marks;
  }
};
/**
 * @brief The main function of the program.
 *
 * This function creates an object of the RESULT class, calls the getMarks() function from the TEST class,
 * and displays the total marks obtained by the student.
 *
 * @return An integer representing the exit status of the program.
 *         - 0: The program executed successfully.
 */
int main()
{
  RESULT t;
  cout << "The total marks is \t" << t.TEST::getMarks();
  return 0;
}
