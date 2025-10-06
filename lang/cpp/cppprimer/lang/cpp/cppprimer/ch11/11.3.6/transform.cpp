#include <map>
#include "word_transform.h"
using namespace std;

const string& transform(const string &s, const map<string, string> &m)
{
    // the actual map work; this part is the heart of the program
    auto map_it = m.find(s);
    // if this word is in the transformation map
    if (map_it != m.cend())
        return map_it->second; // use the replacement word
    else
        return s;              // otherwise return the original unchanged
}
