#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include <vector>
#include <set>
#include <map>
#include <string>
#include <fstream>
#include <memory>

class QueryResult; // declaration needed for return type in the query function
                   // forward declaration

class TextQuery {
public:
    using line_no = std::vector<std::string>::size_type;
    TextQuery(std::ifstream&);
    QueryResult query(const std::string&) const;
private:
    std::shared_ptr<std::vector<std::string>> file;  // input file
    // map of each word to the set of the lines in which that word appears
    std::map<std::string,
             std::shared_ptr<std::set<line_no>>> wm;
};

void runQueries(std::ifstream &infile);

#endif
