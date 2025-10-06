#include <iostream>
using namespace std;

void print(int arr[10]) {
  for (int i = 0; i < 10; ++i)
    cout << arr[i] << " ";
  cout << endl;
}

int main(int argc, char *argv[])
{
  int a[10];
  int b[10] = {1, 2};
  print(a);
  print(b);
  return 0;
}
