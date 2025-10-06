#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
  for (auto i: v)
    cout << i << " ";
  cout << endl;
}

int main(int argc, char *argv[])
{
  vector<int> v1(10, 42);
  vector<int> v2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
  vector<int> v3;
  for (int i = 0; i < 10; ++i)
    v3.push_back(42);

  print(v1);
  print(v2);
  print(v3);

  return 0;
}
