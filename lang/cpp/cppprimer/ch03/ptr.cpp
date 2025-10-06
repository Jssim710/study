#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int arr[5] = { 1, 2, 3};
  int *ptr[5] = {arr, arr+1, arr+2};
  int (*arrPtr)[5] = &arr;
  int (&arrRef)[5] = arr;

  cout << *ptr[0] << endl;
  cout << (*arrPtr)[1] << endl;
  cout << arrRef[2] << endl;
  return 0;
}
