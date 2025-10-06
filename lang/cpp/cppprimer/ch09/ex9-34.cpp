#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
  vector<int> vi{1, 2, 3, 4, 5};
  auto iter = vi.begin();
  while (iter != vi.end()) {
    if (*iter % 2) {
      iter = vi.insert(iter, *iter);
      ++iter;
    }
    ++iter;
  }

  for (auto i: vi) cout << i << " ";
  cout << endl;

  return 0;
}
