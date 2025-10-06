#include <iostream>
#include <forward_list>
using namespace std;

int main(int argc, char *argv[])
{
  forward_list flst = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
  for (auto prev = flst.before_begin(), curr = flst.begin(); curr != flst.end();)
    if (*curr % 2 == 1)
      curr = flst.erase_after(prev);
    else {
      prev = curr;
      ++curr;
    }

  for (auto i: flst) cout << i << " ";
  cout << endl;

  return 0;
}
