#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int arr[] = {1, 2, 3};
  int *p = arr + 2;
  cout << p[-2] << endl;
  return 0;
}
