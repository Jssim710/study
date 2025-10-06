#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
  vector<int> v { 1, 2, 3, 4};
  decltype(v.size()) idx = 0;
  v[idx] = 100;
  for (auto i : v)
    cout << i << " ";
  cout << endl;
  return 0;
}
