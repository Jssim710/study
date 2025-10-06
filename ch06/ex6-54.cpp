#include <iostream>
#include <vector>
using namespace std;

int f(int, int);
int _sum(int a, int b) { return a+b; }
int _sub(int a, int b) { return a-b; }
int _mul(int a, int b) { return a*b; }
int _div(int a, int b) { return a/b; }

int main()
{
  // vector<decltype(f)*> v;
  vector<int (*)(int,int)> v;
  v.push_back(_sum);
  v.push_back(_sub);
  v.push_back(_mul);
  v.push_back(_div);
  for (auto f: v)
    cout << f(6, 3) << endl;
  return 0;
}
