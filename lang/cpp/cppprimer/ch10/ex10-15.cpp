#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int out = 42;
  auto f = [out](int in) -> int { return out + in;};
  cout << f(1) << endl;
  return 0;
}
