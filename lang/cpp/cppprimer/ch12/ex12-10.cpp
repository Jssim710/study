#include <iostream>
#include <memory>
using namespace std;

void process(shared_ptr<int> ptr)
{
}

int main(int argc, char *argv[])
{
  shared_ptr<int> p(new int(42));
  process(shared_ptr<int>(p));
  cout << *p << endl;
  return 0;
}
