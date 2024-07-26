// Including Header File
#include <iostream>

// Using Namespace std
using namespace std;

// wap for hybrid inheritance
class calculation
{
public:
  /**
   * @brief This function performs division of two floating-point numbers.
   *
   * @param a The first floating-point number.
   * @param b The second floating-point number. It should not be zero to avoid division by zero error.
   *
   * @return void. The result of the division is printed to the console.
   */
  void div(float a, float b)
  {
    float d = a / b;
    cout << "Division is:" << d << endl;
  }
};
class calculation1 : public calculation
{
public:
  int a;
  int b;

private:
  int sum;

public:
  void add(int a, int b)
  {
    sum = a + b;
    cout << "Sum is:" << sum << endl;
  }
};
class calculation2 : public calculation
{
  // derived class2
public:
  int c;
  int d;

private:
  int mul1;

public:
  void mul(int, int d)
  {
    mul1 = c * d;
    cout << "Multiplication is:" << mul1 << endl;
  }
};
class solve : public calculation1, calculation2
{
public:
  int u, v;
  void start(int u1, int v1)
  {
    u = u1;
    v = v1;
    add(u, v);
  }

private:
  int w, x;

public:
  void mult(int w1, int x1)
  {
    w = w1;
    x = x1;
    mul(w, x);
  }
  void d()
  {
    float a, b;
    cout << "Enter number 1:";
    cin >> a;
    cout << "Enter number 2:";
    cin >> b;
    calculation1::div(a, b);
  }
};
int main()
{
  int x, y;
  cout << "Enter first number:";
  cin >> x;
  cout << "Enter second number:";
  cin >> y;
  solve s1;
  s1.start(x, y);
  solve s2;
  s2.mult(x, y);
  solve s3;
  s3.d();
  return 0;
}
