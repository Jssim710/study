#include <iostream>
#include <map>
using namespace std;

int main(int argc, char *argv[])
{
  map<string, int> m;
  map<string, int>::key_type key = "input key";
  map<string, int>::mapped_type value = m[key];
  cout << key << " : " << value << endl;
  return 0;
}
