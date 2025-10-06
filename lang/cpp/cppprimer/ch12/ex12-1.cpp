// g++ ex12-1.cpp StrBlob/StrBlob.cpp -o ex12-1.out
#include "StrBlob/StrBlob.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  StrBlob b1;
  {
    StrBlob b2 = {"a", "an", "the"};
    b1 = b2;
    b2.push_back("about");
  }

  b1.print();
  return 0;
}
