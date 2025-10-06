// g++ ex12-12.cpp StrBlob/StrBlob.cpp StrBlobPtr/StrBlobPtr.cpp
#include "StrBlob/StrBlob.h"
#include "StrBlobPtr/StrBlobPtr.h"
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
  StrBlob b;
  string line;
  ifstream in("ex12-20.txt");
  while (in >> line) {
    b.push_back(line);
  }

  cout << b.begin().deref() << endl;
  cout << b.begin().incr().deref() << endl;
  cout << b.begin().incr().incr().deref() << endl;
  // for (auto it = b.begin(); it.deref() != b.end().deref(); it.incr())
  //   cout << it.deref() << endl;

  return 0;
}
