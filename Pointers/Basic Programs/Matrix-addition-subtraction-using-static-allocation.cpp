#include <iostream>
using namespace std;
class matrix
{
protected:
  int a[10][10];
  int r, c;
public:
  matrix(int row, int col)
  {
    r = row;
    c = col;
  }
  void setdata()
  {
    for (int i = 0; i < r; i++)
      for (int j = 0; j < c; j++)
        cin >> a[i][j];
  }
  void getdata()
  {
    for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
        cout << "\t" << a[i][j] << "\t";
      cout << endl;
    }
  }
  matrix addition(matrix m)
  {
    matrix sum(m.r, m.c);
    cout << "Addition of the matrix:" << endl;
    for (int i = 0; i < r; i++)
      for (int j = 0; j < c; j++)
        sum.a[i][j] = a[i][j] + m.a[i][j];
    return sum;
  }
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
  matrix sum = m1.addition(m2) ;
  sum.getdata();
  matrix diff = m1.subtraction(m2);
  diff.getdata();
  return 0;
}