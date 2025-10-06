#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
  int tmp = a;
  a = b;
  b = tmp;
}

int main()
{
  int a = 0, b = 42;
  cout << "Before: (a : " << a << ", b : " << b << ")" << endl;
  swap(a, b);
  cout << "After : (a : " << a << ", b : " << b << ")" << endl;
  return 0;
}
