#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
  vector<int> v;
  for (int i = 0; i < 10; ++i)
    v.push_back(i);

  cout << "Before: ";
  for (auto i : v)
    cout << i << " ";
  cout << endl;

  for (auto it = v.begin(); it != v.end(); ++it)
    *it *= 2;

  cout << "After: ";
  for (auto i : v)
    cout << i << " ";
  cout << endl;

  return 0;
}
