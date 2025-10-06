#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int i = 2;
  double d = 1.4;

  cout << i * static_cast<int>(d) << endl;
  cout << i * d << endl;

  return 0;
}
