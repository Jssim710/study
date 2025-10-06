#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
  vector<int> v {1, 2, 3, 1, 2, 3};
  int target = 1;
  cout << "Count of " << target << " : "
       << count(v.begin(), v.end(), 1) << endl;

  return 0;
}
