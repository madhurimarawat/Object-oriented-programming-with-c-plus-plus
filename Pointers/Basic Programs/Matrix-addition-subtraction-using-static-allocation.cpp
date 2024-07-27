#include <iostream>
using namespace std;

/// @brief Class for matrix
class matrix
{
protected:
  int a[10][10];
  int r, c;

public:
  /**
   * @brief Constructor for the matrix class.
   *
   * Initializes a matrix object with the given number of rows and columns.
   *
   * @param row The number of rows for the matrix.
   * @param col The number of columns for the matrix.
   *
   * @return No return value.
   */
  matrix(int row, int col)
  {
    r = row;
    c = col;
  }

  /**
   * @brief Sets the data for the matrix object.
   *
   * This function takes input from the user to fill the matrix with integer values.
   * The input is read row by row and column by column, and stored in the 2D array 'a'.
   *
   * @return No return value.
   */
  void setdata()
  {
    for (int i = 0; i < r; i++)
      for (int j = 0; j < c; j++)
        cin >> a[i][j];
  }

  /**
   * @brief Prints the matrix data to the console.
   *
   * This function iterates through the 2D array 'a' and prints each element in a tabular format.
   * The matrix is printed row by row, with each element separated by a tab character.
   *
   * @return No return value.
   */
  void getdata()
  {
    for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
        cout << "\t" << a[i][j] << "\t";
      cout << endl;
    }
  }

  /**
   * @brief Performs matrix addition with another matrix object.
   *
   * This function takes another matrix object as a parameter, performs element-wise addition,
   * and returns a new matrix object containing the result.
   *
   * @param m The matrix object to be added with the current matrix object.
   *
   * @return A new matrix object containing the result of the addition operation.
   */
  matrix addition(matrix m)
  {
    matrix sum(m.r, m.c);
    cout << "Addition of the matrix:" << endl;
    for (int i = 0; i < r; i++)
      for (int j = 0; j < c; j++)
        sum.a[i][j] = a[i][j] + m.a[i][j];
    return sum;
  }

  /**
   * @brief Performs matrix subtraction with another matrix object.
   *
   * This function takes another matrix object as a parameter, performs element-wise subtraction,
   * and returns a new matrix object containing the result.
   *
   * @param m The matrix object to be subtracted from the current matrix object.
   *
   * @return A new matrix object containing the result of the subtraction operation.
   */
  matrix subtraction(matrix m)
  {
    matrix diff(m.r, m.c);
    cout << "Subtraction of the matrix:" << endl;
    for (int i = 0; i < r; i++)
      for (int j = 0; j < c; j++)
        diff.a[i][j] = a[i][j] - m.a[i][j];
    return diff;
  }
};

/**
 * @brief The main function of the program.
 *
 * This function prompts the user to enter the number of rows and columns for two matrices,
 * creates matrix objects m1 and m2, and then calls the setdata function to fill the matrices
 * with integer values. After that, it performs matrix addition and subtraction using the
 * addition and subtraction functions of the matrix class, and prints the results using the
 * getdata function.
 *
 * @return An integer value representing the exit status of the program. A return value of 0
 * indicates that the program executed successfully.
 */
int main()
{
  int row, col;
  cout << "Enter row and column:";
  cin >> row >> col;
  matrix m1(row, col), m2(row, col);
  cout << "Enter the first matrix element:" << endl;
  m1.setdata();
  cout << "Enter the second matrix element:" << endl;
  m2.setdata();
  matrix sum = m1.addition(m2);
  sum.getdata();
  matrix diff = m1.subtraction(m2);
  diff.getdata();
  return 0;
}