#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
  vector<int> v1 = {1, 2, 3};
  vector<int> v2;
  v2.push_back(std::move(v1[1]));
  for (auto i: v1)
    cout << i << " ";
  cout << endl;
  for (auto i: v2)
    cout << i << " ";
  cout << endl;
  return 0;
}
