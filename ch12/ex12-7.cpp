#include <iostream>
#include <vector>
#include <memory>
using namespace std;

using spvi = shared_ptr<vector<int>>;

spvi alloc()
{
  return make_shared<vector<int>>();
}
void read(istream& in, spvi p)
{
  cout << "Input integers : " << endl;
  int i;
  while (in >> i)
    p->push_back(i);
}
void print(spvi p)
{
  for (auto i: *p)
    cout << i << " ";
  cout << endl;
}


int main(int argc, char *argv[])
{
  auto p = alloc(); // spvi (=shared_ptr<vector<int>>
  read(cin, p);
  print(p);
  return 0;
}
