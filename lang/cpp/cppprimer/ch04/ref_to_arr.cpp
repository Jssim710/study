#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int ia[10] = {1,2,3};
  int (&r)[10] = ia;
  for (auto ri: r)
    cout << ri << " ";
  cout << endl;

  return 0;
}
