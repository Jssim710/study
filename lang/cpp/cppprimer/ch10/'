#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(int argc, char *argv[])
{
  vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  list<int> li;
  copy(v.rbegin() + v.size() - 7 - 1, v.rbegin() + v.size() - 3, back_inserter(li));
  for (auto i : li) cout << i << " ";
  cout << endl;
  return 0;
}
