#include <iostream>
// using namespace std;

int main(int argc, char *argv[])
{
  double dval = 3.14;
  const int &ri = dval;
  std::cout << ri << std::endl;
  return 0;
}
