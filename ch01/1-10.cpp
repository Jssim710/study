#include <iostream>
// using namespace std;

int main(int argc, char *argv[])
{
  int val = 10;
  while (val >= 0) {
    std::cout << val << std::endl;
    --val;
  }
  return 0;
}
