#include <iostream>
#include <sstream>
#include <list>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
  list<string> words;
  string line, word;
  cout << "Input words: ";
  if (getline(cin, line)) {
    istringstream iss(line);
    while (iss >> word)
      words.push_back(word);
  } else {
    cerr << "Failed to read input line" << endl;
    return 1;
  }

  cout << "Input a target word: ";
  cin >> word;
  cout << "Target word appears "
       << count(words.begin(), words.end(), word) << " time(s)" << endl;

  return 0;
}
