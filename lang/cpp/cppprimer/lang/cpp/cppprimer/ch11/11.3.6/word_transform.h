#include <fstream>
#include <map>
#include <string>
using namespace std;

void word_transform(ifstream &, ifstream &);
map<string, string> buildMap(ifstream &);
const string& transform(const string &, const map<string, string> &);
