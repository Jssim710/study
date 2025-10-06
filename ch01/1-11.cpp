#include <iostream>
// using namespace std;

int main(int argc, char *argv[])
{
  int v1, v2;

  std::cout << "Input two integer: ";
  std::cin >> v1 >> v2;
  if (v1 > v2) {
    int tmp = v2;
    v2 = v1;
    v1 = tmp;
  }
  int curr = v1;
  while (curr <= v2) {
    std::cout << curr << std::endl;
    ++curr;
  }
  return 0;
}
