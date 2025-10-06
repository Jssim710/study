#include <iostream>
#include <vector>
using namespace std;

vector<int>* alloc()
{
  return new vector<int>();
}
void read(istream& in, vector<int>* p)
{
  cout << "Input integers : " << endl;
  int i;
  while (in >> i)
    p->push_back(i);
}
void print(vector<int>* p)
{
  for (auto i: *p)
    cout << i << " ";
  cout << endl;
}


int main(int argc, char *argv[])
{
  auto p = alloc(); // vector<int>*
  read(cin, p);
  print(p);
  delete p;
  return 0;
}
