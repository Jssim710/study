#include <iostream>
#include <climits>
// using namespace std;

int main(int argc, char *argv[])
{
  unsigned u = 10;
  int i = -42;

  std::cout << i + i << std::endl;
  std::cout << u + i << std::endl;
  std::cout << UINT_MAX - 32 << std::endl;
  return 0;
}
