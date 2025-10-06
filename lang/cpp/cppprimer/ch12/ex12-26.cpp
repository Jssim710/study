#include <iostream>
#include <memory>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
  /*
  string *const p = new string[n]; // construct n empty strings
  string s;
  string *q = p;                   // q points to the first string
  while (cin >> s && q != p + n)
    *q++ = s;                      // assign a new value to *q
  const size_t size = q - p;       // remember how many strings we read
                                    // use the array
  delete[] p;  // p points to an array; must remember to use delete[]
  */
  int n = 10;
  allocator<string> alloc;
  string *const p = alloc.allocate(n);
  string s;
  auto q = p;
  while (cin >> s && q != p + n)
    alloc.construct(q++, s);
  while (q != p)
    alloc.destroy(--q);
  alloc.deallocate(p, n);
  return 0;
}
