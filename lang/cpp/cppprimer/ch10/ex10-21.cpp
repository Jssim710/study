#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int x = 10;
  auto dcrm = [&x]()-> bool { return --x == 0; };
  while (!dcrm())
    ;
  cout << x << endl;
  return 0;
}
