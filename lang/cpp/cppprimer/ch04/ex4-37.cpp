#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
  int i; double d; const string *ps; char *pc; void *pv;

  pv = const_cast<void*>(static_cast<const void*>(ps));
  i = static_cast<int>(*pc);
  pv = static_cast<void*>(&d);
  pc = static_cast<char*>(pv);
  return 0;
}
