#include <iostream>
#include <cstring>
#include <memory>
using namespace std;

const char* cat_char(const char* a, const char* b)
{
  char *ret = new char[strlen(a) + strlen(b) + 1], *curr = ret;
  for (; *a; ++curr, ++a)
    *curr = *a;
  for (; *b; ++curr, ++b)
    *curr = *b;
  *curr = '\0';

  return ret;
}
string cat_string(const string& a, const string& b)
{
  return a + b;
}

int main(int argc, char *argv[])
{
  shared_ptr<const char> cat_sp(cat_char("Hello, ", "world!"), [](const char *p) { delete [] p; });
  cout << cat_sp.get() << '\n';

  cout << cat_string("Hello, ", "world!") << endl;
  return 0;
}
