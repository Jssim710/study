#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main(int argc, char *argv[])
{
  vector<int> vec;
  vec.reserve(10); // reserve is covered in § 9.4 (p. 356)
  // fill_n(vec.begin(), 10, 0);
  fill_n(back_inserter(vec), 10, 0);
  for (auto i: vec) cout << i << " ";
  cout << endl;

  return 0;
}
