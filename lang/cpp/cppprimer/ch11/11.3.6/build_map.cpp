#include <iostream>
#include <fstream>
#include <map>
#include "word_transform.h"
using namespace std;

map<string, string> buildMap(ifstream &map_file)
{
    map<string, string> trans_map;  // holds the transformations
    string key;    // a word to transform
    string value;  // phrase to use instead
    // read the first word into key and the rest of the line into value
    while (map_file >> key && getline(map_file, value))
        if (value.size() > 1) // check that there is a transformation
            trans_map[key] = value.substr(1); // skip leading space
        else
            throw runtime_error("no rule for " + key);
    return trans_map;
}
