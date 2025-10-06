#include <iostream>
// using namespace std;

int main(int argc, char *argv[])
{
  int i = 42;
  int *p1 = &i;
  *p1 = *p1 * *p1;
  std::cout << *p1 << " " << i << std::endl;
  return 0;
}
