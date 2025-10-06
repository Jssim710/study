#include <iostream>
#include <memory>

struct Resource {
  Resource() { std::cout << "Aquired\n"; }
  ~Resource() { std::cout << "Released\n"; }
};
struct Manager {
  std::unique_ptr<Resource> res;
  Manager() : res{std::make_unique<Resource>()} {}
};

int main()
{
  Manager m;
}
