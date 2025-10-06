#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(int argc, char *argv[])
{
  vector<double> v {1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5, 9.5, 10.5};
  double sum = accumulate(v.cbegin(), v.cend(), 0);
  cout << sum << endl;
  return 0;
}
