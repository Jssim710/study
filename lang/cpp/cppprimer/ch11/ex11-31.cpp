#include <iostream>
#include <map>
using namespace std;

void removeEntry(multimap<string, string>& m, const string& target)
{
  // sol 1)
  /*
  for (auto pos = m.equal_range(target); pos.first != pos.second; )
    pos.first = m.erase(pos.first);
  */

  // sol 2)
  decltype(m.begin()) it;
  while ((it = m.find(target)) != m.end()) {
    m.erase(it);
  }
}

int main(int argc, char *argv[])
{
  multimap<string, string> authors;
  authors.insert({"Barth, John", "Sot-Weed Factor"});
  authors.insert({"Barth, John", "Lost in the Funhouse"});
  authors.insert({"Other author", "Lost in the Funhouse"});
  cout << "Before remove, authors has " << authors.size() << " element(s)." << endl;
  removeEntry(authors, "Barth, John");
  cout << "After remove, authors has " << authors.size() << " element(s)." << endl;
  return 0;
}
