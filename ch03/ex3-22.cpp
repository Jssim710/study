#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
  vector<string> text;
  string line;
  while (getline(cin, line))
    text.push_back(line);

  for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
    for (auto& c : *it)
      c = toupper(c);
  }

  for (auto it = text.begin(); it != text.end(); ++it)
    cout << *it << endl;

  return 0;
}
