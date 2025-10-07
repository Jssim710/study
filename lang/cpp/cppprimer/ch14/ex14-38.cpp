#include <iostream>
#include <fstream>
using namespace std;

class Bounded {
  using sz = string::size_type;
public:
  Bounded(sz l = 0, sz u = -1) : lb(l), ub(u) {}
  bool operator()(const string& s) const {
    return lb <= s.size() && s.size() <= ub;
  }
private:
  sz lb; // lower bound
  sz ub; // upper bound
};

int main(int argc, char *argv[])
{
  string filename, word;
  cout << "Input file : ";
  cin >> filename;

  ifstream file(filename);
  if (!file) {
    cerr << "Cannot open file: " << filename << endl;
    return 1;
  }

  int cnt = 0;
  Bounded one_to_ten(1, 10);

  while (file >> word)
    if (one_to_ten(word))
      ++cnt;

  cout << filename << " has " << cnt << " words with length 1 ~ 10.\n";
  return 0;
}
