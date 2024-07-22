/**
 * This C++ program demonstrates exception handling and array usage.
 * The main function prompts the user to enter five integer elements.
 * If the user enters more than five elements, an exception is thrown and caught to display an error message.
 * The program successfully handles the exception and displays the entered elements.
 */

// Including Header File
#include <iostream>

// Using Namespace
using namespace std;

// Global Variable
int i = 0;

/**
 * @brief The main function demonstrates exception handling and array usage in C++.
 *
 * This function prompts the user to enter five integer elements. If the user enters more than five elements,
 * an exception is thrown and caught to display an error message.
 *
 * @return 0 upon successful execution.
 */
int main()
{
  // Exception Handling
  // int a[5]={12,32,12,45,78,89};
  /*Exception--
   error: too many initializers for 'int [5]'
   int a[5]={12,32,12,45,78,89};
                              ^*/
  // cout<<a;
  try
  {
    int arr[5];
    // for(int i=0;i<=5;i++){
    cout << "Enter five elements: " << endl;
    while ("%d")
    {
      if (i == 6)
      {
        throw i;
      }
      cout << "Element " << i + 1 << ":";
      cin >> arr[i];
      i++;
    }
    for (int i = 0; i < 5; i++)
    {
      cout << "\t" << arr[i];
    }
  }
  catch (int i)
  {
    cout << "Too many elements";
  }
  return 0;
}