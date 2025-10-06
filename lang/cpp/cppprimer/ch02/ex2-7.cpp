#include <stdio.h>
#include <iostream>
// using namespace std;

int main(int argc, char *argv[])
{
  std::cout << "Who goes with F\145rgus?\012" << std::endl;
  printf("%c %c\n", 101, 10);

  std::cout << 3.14e1L << std::endl;
  std::cout << 1024f << std::endl;
  std::cout << 3.14L << std::endl;

  return 0;
}
