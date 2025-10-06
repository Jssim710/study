#include <iostream>
using namespace std;

void f(int (*g)(int, int))
{
  cout << (*g)(1, 2) << endl;
}

int main(int argc, char *argv[])
{
  auto g = [](int x, int y) { return x + y; };
  f(g);
  return 0;
}
