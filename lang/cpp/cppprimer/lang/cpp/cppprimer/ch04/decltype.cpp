#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int ia[10];
  int *ip = ia;
  decltype(ia) decl;
  cout << sizeof ia << endl;
  cout << sizeof ip << endl;
  cout << sizeof decl << endl;
  return 0;
}
