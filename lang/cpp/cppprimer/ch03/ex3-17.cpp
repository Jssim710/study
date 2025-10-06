#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printUpper(string&);
int main(int argc, char *argv[])
{
  string word;
  vector<string> v;
  while (cin >> word)
    v.push_back(word);
  for (decltype(v.size()) ix = 0; ix < v.size(); ++ix) {
    printUpper(v[ix]);
    if (ix % 8 == 7)
      cout << endl;
  }

  return 0;
}

void printUpper(string& word)
{
  for (auto& c: word)
    cout << static_cast<char>(toupper(c));
  cout << " ";
}
