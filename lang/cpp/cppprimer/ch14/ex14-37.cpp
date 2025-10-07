#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
struct Equal {
public:
  Equal(const T& v): val(v) {}
  bool operator()(const T& elem) const {
    return elem == val;
  }
private:
  T val;
};

int main(int argc, char *argv[])
{
  vector<int> v = {1, 2, 3, 1, 4, 2, 5};
  int old_val = 1, new_val = 42;
  Equal eq(old_val);
  replace_if(v.begin(), v.end(), eq, new_val);

  for (auto i : v)
    cout << i << " ";
  cout << endl;
  return 0;
}
