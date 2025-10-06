#include <iostream>
#include <climits>
// using namespace std;

int main(int argc, char *argv[])
{
  unsigned u1 = 42, u2 = 10;
  std::cout << u1 - u2 << std::endl;
  std::cout << u2 - u1 << std::endl;
  std::cout << u2 + (UINT_MAX - u1 + 1)<< std::endl;
  return 0;
}
