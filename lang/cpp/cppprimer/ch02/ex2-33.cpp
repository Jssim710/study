#include <iostream>
// using namespace std;

int main(int argc, char *argv[])
{
  int i = 0, &r = i;
  const int ci = i, &cr = ci;
  auto a = r;
  auto b = ci;
  auto c = cr;
  auto d = &i;
  auto e = &ci;
  const auto f = ci;
  auto &g = ci;
  // auto &h = 42;
  const auto &j = 42;

  a = 42;
  b = 42;
  c = 42;
  // d = 42;
  // e = 42;
  // g = 42;

  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << c << std::endl;

  return 0;
}
