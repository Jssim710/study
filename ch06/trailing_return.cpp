#include <iostream>
using namespace std;

auto f(int a, int b) -> int {
  return a + b;
}
int main(int argc, char *argv[])
{
  cout << f(1, 2) << endl;
  return 0;
}
