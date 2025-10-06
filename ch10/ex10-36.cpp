#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
  list<int> li {0, 1, 2, 3, 0, 4};
  auto zero = find(li.rbegin(), li.rend(), 0);
  for (auto it = li.begin(); it != li.end(); ++it) {
    if (it == prev(zero.base(), 1))
      cout << "\e[31m";
    cout << *it << " ";
    if (it == prev(zero.base(), 1))
      cout << "\e[0m";
  }
  cout << endl;
  return 0;
}
