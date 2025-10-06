#include <iostream>
using namespace std;

auto f(int a) -> int {
  return a * 2;
}


int main(int argc, char *argv[])
{
  cout << f(3) << endl;
  return 0;
}
