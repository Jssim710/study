#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(int argc, char *argv[])
{
  int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
  vector<int> vi(begin(ia), end(ia));
  list<int> li(begin(ia), end(ia));

  // remove odd in li
  for (auto it = li.begin(); it != li.end();)
    if (*it % 2 == 1)
      it = li.erase(it);
    else
      ++it;

  // remove even in vi
  for (auto it = vi.begin(); it != vi.end();)
    if (*it % 2 == 0)
      it = vi.erase(it);
    else
      ++it;

  cout << "li" << endl;
  for (int i: li) cout << i << " ";
  cout << endl;

  cout << "vi" << endl;
  for (int i: vi) cout << i << " ";
  cout << endl;

  return 0;
}
