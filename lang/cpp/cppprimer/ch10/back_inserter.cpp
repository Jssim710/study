#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
  vector<int> v {1, 2, 3};
  fill_n(back_inserter(v), 10, 42);
  for (auto i : v) cout << i << " ";
  cout << endl;
  return 0;
}
