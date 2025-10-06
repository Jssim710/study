#include <iostream>
// using namespace std;

int main(int argc, char *argv[])
{
  int i = 42, &r = i;
  int *p = &r;
  std::cout << *p << std::endl;
  return 0;
}
