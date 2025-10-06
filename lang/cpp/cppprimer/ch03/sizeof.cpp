#include <iostream>
using namespace std;

void sizeof_arr(int arr[10])
{
  cout << sizeof(arr) / sizeof(int) << endl;
}

void sizeof_ptr(int *p)
{
  cout << sizeof(p) / sizeof(int) << endl;
}

int main(int argc, char *argv[])
{
  int arr[10];
  int *ptr;
  cout << sizeof(arr) / sizeof(int) << endl;
  cout << sizeof(ptr) / sizeof(int) << endl;
  sizeof_arr(arr);
  sizeof_arr(ptr);
  sizeof_ptr(arr);
  sizeof_ptr(ptr);
  return 0;
}
