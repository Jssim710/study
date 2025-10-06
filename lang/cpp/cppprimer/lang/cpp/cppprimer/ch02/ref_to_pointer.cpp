#include <iostream>
// using namespace std;

int main(int argc, char *argv[])
{
  int i = 42;
  int *p;
  int *&r = p;
  r = &i;
  *r = 0;
  std::cout << i << std::endl;
  return 0;
}
