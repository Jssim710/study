#include <iostream>
// using namespace std;

int main(int argc, char *argv[])
{
  int i = 42;
  void *p = &i;
  long *lp = (long*)&i;
  return 0;
}
