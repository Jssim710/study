#include <iostream>
#include "TextQuery.h"

using namespace std;

int main(int argc, char *argv[])
{
  string filename;
  cout << "Input file name : ";
  while (cin >> filename) {
    ifstream file(filename);
    runQueries(file);
    cout << "Input file name : ";
  }
  return 0;
}
