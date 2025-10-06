#include <iostream>
using namespace std;

template<typename T>
void set_to_zero(T *begin, T *end)
{
  for (;begin != end;++begin)
    *begin = {};
}

int main(int argc, char *argv[])
{
  // integer array
  int int_arr[5] = {1, 2, 3, 4, 5};
  cout << "Before: ";
  for (auto i : int_arr)
    cout << i << " ";
  cout << endl;

  set_to_zero(int_arr, end(int_arr));

  cout << "After: ";
  for (auto i : int_arr)
    cout << i << " ";
  cout << endl;

  // string array
  string str_arr[5] = {"a", "bc", "def", "ghij", "klmno"};
  cout << "Before: ";
  for (auto s : str_arr)
    cout << s << " ";
  cout << endl;

  set_to_zero(str_arr, end(str_arr));

  cout << "After: ";
  for (auto s : str_arr)
    cout << s << " ";
  cout << endl;

  return 0;
}
