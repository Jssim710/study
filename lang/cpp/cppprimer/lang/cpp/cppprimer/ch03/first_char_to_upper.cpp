#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
  string s("some string");
  if (s.begin() != s.end())
    *s.begin() = toupper(*s.begin());
  cout << s << endl;
  return 0;
}
