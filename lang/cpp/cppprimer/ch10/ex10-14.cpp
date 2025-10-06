#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  auto sum = [](int a, int b) -> int { return a + b; };
  cout << sum(1, 2) << endl;
  return 0;
}
