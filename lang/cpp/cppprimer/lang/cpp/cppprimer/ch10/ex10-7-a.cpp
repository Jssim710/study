#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

int main(int argc, char *argv[])
{
  vector<int> vec; list<int> lst; int i;
  while (cin >> i)
    lst.push_back(i);
  copy(lst.cbegin(), lst.cend(), back_inserter(vec));

  for (auto i: vec) cout << i << " ";
  cout << endl;

  return 0;
}
