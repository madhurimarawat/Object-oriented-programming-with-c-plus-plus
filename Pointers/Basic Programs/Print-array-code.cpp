#include <iostream>
using namespace std;

template <typename T>
class Array
{
private:
  T *ptr;
  int size;

public:
  /**
   * @brief Constructor for the Array class. Initializes the array with the given elements and size.
   *
   * @param arr Pointer to the first element of the input array.
   * @param s The size of the input array.
   *
   * @return No return value.
   *
   * @note This constructor dynamically allocates memory for the array.
   * @note The caller is responsible for deallocating the memory after use.
   */

  Array(T arr[], int s);
  /**
   * @brief Prints the elements of the array.
   *
   * This function iterates through the array and prints each element to the standard output stream.
   *
   * @return No return value.
   *
   * @note The function assumes that the array has been properly initialized and allocated memory.
   * @note The function does not modify the array.
   */
  void print();
};

/**
 * @brief Constructor for the Array class. Initializes the array with the given elements and size.
 *
 * @param arr Pointer to the first element of the input array.
 * @param s The size of the input array.
 *
 * @return No return value.
 *
 * @note This constructor dynamically allocates memory for the array.
 * @note The caller is responsible for deallocating the memory after use.
 */
template <typename T>
Array<T>::Array(T arr[], int s)
{
  ptr = new T[s];
  size = s;
  for (int i = 0; i < size; i++)
    ptr[i] = arr[i];
}

/**
 * @brief Prints the elements of the array.
 *
 * This function iterates through the array and prints each element to the standard output stream.
 *
 * @return No return value.
 *
 * @note The function assumes that the array has been properly initialized and allocated memory.
 * @note The function does not modify the array.
 */
template <typename T>
void Array<T>::print()
{
  for (int i = 0; i < size; i++)
    cout << " " << *(ptr + i);
  cout << endl;
}

/**
 * @brief The main function of the program.
 *
 * This function demonstrates the usage of the Array class by creating an array of integers,
 * initializing it with the given elements, and then printing the elements of the array.
 *
 * @return An integer representing the exit status of the program.
 *         A return value of 0 indicates successful program execution.
 *
 * @note This function does not modify the array.
 */
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  Array<int> a(arr, 5);
  a.print();
  return 0;
}
