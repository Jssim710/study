#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  // const int *pci = new int (42);
  int *pci = new const int (42);
  cout << *pci << endl;
  return 0;
}
