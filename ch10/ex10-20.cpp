#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
  int sz = 6;
  vector<string> v{"a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa"};
  cout << count_if(v.begin(), v.end(), [sz](const string& s)->bool { return s.size() > sz; }) << endl;
  return 0;
}
