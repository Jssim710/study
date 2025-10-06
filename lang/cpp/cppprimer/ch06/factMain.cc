#include <iostream>
#include "Chapter6.h"
using namespace std;

int main()
{
  for (int i = 1; i < 10; ++i)
    cout << i << "! is " << fact(i) << endl;
  return 0;
}
