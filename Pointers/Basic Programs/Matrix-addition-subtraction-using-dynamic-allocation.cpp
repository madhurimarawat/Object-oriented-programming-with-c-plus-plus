#include <iostream>
using namespace std;

/**
 * @brief Function to create a 2D dynamic array (matrix) of integers.
 *
 * This function allocates memory for a 2D array of integers with the specified number of rows and columns.
 * The memory is allocated dynamically using the 'new' operator.
 *
 * @param row The number of rows for the matrix.
 * @param col The number of columns for the matrix.
 *
 * @return A pointer to the created 2D array (matrix).
 *
 * @note The caller is responsible for deallocating the memory using the 'delete' operator.
 */
int **createMatrix(int row, int col)
{
  int **array = new int *[col];
  for (int i = 0; i < col; i++)
    *(array + i) = new int[row];
  return array;
}

/**
 * @brief Prints a 2D dynamic array (matrix) of integers to the console.
 *
 * This function iterates through each element of the given matrix and prints it to the console.
 * The matrix is represented as a 2D array of integers, where each row is a dynamically allocated array of integers.
 *
 * @param array A pointer to the 2D dynamic array (matrix) to be printed.
 * @param row The number of rows in the matrix.
 * @param col The number of columns in the matrix.
 *
 * @return void
 *
 * @note The matrix is assumed to be valid and properly allocated.
 * @note The function does not deallocate the memory for the matrix.
 */
void printMatrix(int **array, int row, int col)
{
  for (int i = 0; i < col; i++)
  {
    for (int j = 0; j < row; j++)
      cout << "\t" << *(*(array + i) + j) << "\t";
    cout << endl;
  }
}

/**
 * @brief Reads integer elements into a 2D dynamic array (matrix) from the console.
 *
 * This function prompts the user to enter integer elements for a 2D dynamic array (matrix) of specified dimensions.
 * The elements are read row by row, and the user is asked to input each element individually.
 *
 * @param array A pointer to the 2D dynamic array (matrix) where the elements will be stored.
 * @param row The number of rows in the matrix.
 * @param col The number of columns in the matrix.
 *
 * @return void
 *
 * @note The matrix is assumed to be valid and properly allocated.
 * @note The function does not deallocate the memory for the matrix.
 */
void readMatrix(int **array, int row, int col)
{
  int q = 1;
  for (int i = 0; i < col; i++)
  {
    for (int j = 0; j < row; j++)
    {
      cout << "Element" << q << ": ";
      q++;

      cin >> *(*(array + i) + j);
    }
  }
}

/**
 * @brief Function to add two 2D dynamic arrays (matrices) of integers.
 *
 * This function takes two 2D dynamic arrays (matrices) of integers, each with the specified number of rows and columns,
 * and returns a new 2D dynamic array (matrix) that is the result of adding the corresponding elements of the input matrices.
 *
 * @param array1 A pointer to the first 2D dynamic array (matrix) to be added.
 * @param array2 A pointer to the second 2D dynamic array (matrix) to be added.
 * @param row The number of rows for the matrices.
 * @param col The number of columns for the matrices.
 *
 * @return A pointer to the 2D dynamic array (matrix) that is the result of adding the input matrices.
 *
 * @note The caller is responsible for deallocating the memory for the returned matrix using the 'delete' operator.
 * @note The input matrices are assumed to be valid and properly allocated.
 * @note The function does not deallocate the memory for the input matrices.
 */
int **addMatrix(int **array1, int **array2, int row, int col)
{
  // Allocate memory for the sum matrix
  int **sum = createMatrix(row, col);

  // Iterate through each element of the matrices and add them
  for (int i = 0; i < col; i++)
    for (int j = 0; j < row; j++)
      *(*(sum + i) + j) = *(*(array1 + i) + j) + *(*(array2 + i) + j);

  // Return the sum matrix
  return sum;
}

/**
 * @brief Function to subtract two 2D dynamic arrays (matrices) of integers.
 *
 * This function takes two 2D dynamic arrays (matrices) of integers, each with the specified number of rows and columns,
 * and returns a new 2D dynamic array (matrix) that is the result of subtracting the corresponding elements of the input matrices.
 *
 * @param array1 A pointer to the first 2D dynamic array (matrix) to be subtracted.
 * @param array2 A pointer to the second 2D dynamic array (matrix) to be subtracted.
 * @param row The number of rows for the matrices.
 * @param col The number of columns for the matrices.
 *
 * @return A pointer to the 2D dynamic array (matrix) that is the result of subtracting the input matrices.
 *
 * @note The caller is responsible for deallocating the memory for the returned matrix using the 'delete' operator.
 * @note The input matrices are assumed to be valid and properly allocated.
 * @note The function does not deallocate the memory for the input matrices.
 */
int **diffMatrix(int **array1, int **array2, int row, int col)
{
  int **diff = createMatrix(row, col);
  for (int i = 0; i < col; i++)
    for (int j = 0; j < row; j++)
      *(*(diff + i) + j) = *(*(array1 + i) + j) - *(*(array2 + i) + j);
  return diff;
}

/**
 * @brief The main function of the program.
 *
 * This function prompts the user to enter the dimensions of a matrix, creates two matrices,
 * reads their elements from the console, performs addition and subtraction operations,
 * and prints the results to the console.
 *
 * @return 0 if the program runs successfully.
 *
 * @note The program assumes that the user will enter valid integer values for the dimensions and matrix elements.
 * @note The program does not handle any errors or exceptions.
 */
int main()
{
  cout << "Enter row and column of matrix:\t";
  int row, col;
  cin >> row >> col;
  int **matrix1 = createMatrix(row, col);
  int **matrix2 = createMatrix(row, col);
  cout << "Enter the first matrix element" << endl;
  readMatrix(matrix1, row, col);
  cout << "Enter the second matrix element" << endl;
  readMatrix(matrix2, row, col);
  int **sum = addMatrix(matrix1, matrix2, row, col);
  int **diff = diffMatrix(matrix1, matrix2, row, col);
  cout << "Addition of the matrix" << endl;
  printMatrix(sum, row, col);
  cout << "Subtraction of the matrix" << endl;
  printMatrix(diff, row, col);

  return 0;
}