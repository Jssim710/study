#include <iostream>
using namespace std;

void print(int *a)
{
  for (int i = 0; i < 10; ++i)
    cout << a[i] << " ";
  cout << endl;
}


int main(int argc, char *argv[])
{
  int arr1[10];
  int arr2[10] = {};
  print(arr1);
  print(arr2);
  return 0;
}
