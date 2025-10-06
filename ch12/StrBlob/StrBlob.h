#ifndef STRBLOB_H
#define STRBLOB_H

#include <vector>
#include <string>
#include <memory>
#include <initializer_list>

class StrBlobPtr;
class StrBlob {
friend class StrBlobPtr;
public:
  typedef std::vector<std::string>::size_type size_type;
  StrBlob(); // default ctor
  StrBlob(std::initializer_list<std::string> il);
  size_type size() const { return data->size(); }
  // add and remove elements
  void push_back(const std::string &t) { data->push_back(t); }
  void pop_back();
  // element access
  std::string& front();
  std::string& back();

  // StrBlobPtr
  StrBlobPtr begin();
  StrBlobPtr end();

  // my custorm
  void print();
private:
  std::shared_ptr<std::vector<std::string>> data;
  // throws msg if data[i] isn't valid
  void check(size_type i, const std::string& msg) const;
};
#endif
