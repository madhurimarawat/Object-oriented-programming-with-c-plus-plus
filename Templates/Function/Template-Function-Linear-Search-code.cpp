#include <iostream>
using namespace std;

/**
 * @brief Performs a linear search on an array for a given element.
 *
 * This function iterates through the array from the first element to the last, comparing each element with the given element.
 * If a match is found, the function returns the index of the first occurrence. If no match is found, the function returns -1.
 *
 * @tparam X The type of elements in the array.
 * @param a The array to search.
 * @param n The number of elements in the array.
 * @param b The element to search for.
 *
 * @return The index of the first occurrence of the element in the array, or -1 if the element is not found.
 */
template <class X>
int linear(X a[], int n, X b)
{
  for (int i = 0; i < n; ++i)
  {
    if (a[i] == b)
    {
      return i;
    }
  }
  return -1;
}

/**
 * @brief Main function to demonstrate the usage of the linear search function.
 *
 * This function initializes arrays of different types (int, double, char) and calls the linear search function for each array.
 * It prints the index of the first occurrence of a specific element in each array, or a message indicating that the element was not found.
 *
 * @return 0 to indicate successful program execution.
 */
int main()
{
  int arr[] = {12, 90};
  double arr2[] = {12.23, 90.32, 98.7, 65.4, 12.33};
  char arr3[] = {'M', 'j', 'k', 'l', 'b', 'p', 'y'};
  int i = linear(arr, 2, 12);
  if (i != -1)
  {
    cout << "Element found at:" << i + 1 << endl;
  }
  else
  {
    cout << "Element not found";
  }
  int i2 = linear(arr, 2, 13);
  if (i2 != -1)
  {
    cout << "Element found at:" << i2 + 1 << endl;
  }
  else
  {
    cout << "Element not found" << endl;
  }
  int i3 = linear(arr2, 5, 12.33);
  if (i3 != -1)
  {
    cout << "Element found at:" << i3 + 1 << endl;
  }
  else
  {
    cout << "Element not found" << endl;
  }
  int i4 = linear(arr2, 5, 98.7);
  if (i4 != -1)
  {
    cout << "Element found at:" << i4 + 1 << endl;
  }
  else
  {
    cout << "Element not found" << endl;
  }
  int i5 = linear(arr3, 7, 'p');
  if (i5 != -1)
  {
    cout << "Element found at:" << i5 + 1 << endl;
  }
  else
  {
    cout << "Element not found" << endl;
  }
}
