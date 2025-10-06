#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
  vector<int> v { 1, 2, 3, 4, 5};
  for (auto it = v.rbegin(); it != v.rend(); ++it)
    cout << *it << " ";
  cout << endl;
  return 0;
}
