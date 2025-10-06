#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
  map<string, vector<int>> m;
  map<string, vector<int>>::iterator ret;
  ret = m.find("test key");
  cout << (ret == m.end()) << endl;
  return 0;
}
