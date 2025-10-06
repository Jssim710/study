#include <iostream>
using namespace std;

class HasPtr {
public:
    HasPtr(const std::string &s = std::string()):
        ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr& orig):
        ps(new std::string(*orig.ps)), i(orig.i) { }

    HasPtr& operator=(const HasPtr&);
    ~HasPtr();
    void change(const std::string &s) { *ps = s; }
    void print() const { std::cout << *ps << '\n'; }
private:
    std::string *ps;
    int    i;
};

HasPtr& HasPtr::operator=(const HasPtr& rhs)
{
  if (this != &rhs){
    std::string *new_ps = new std::string(*rhs.ps);
    delete ps;
    ps = new_ps;
    i = rhs.i;
  }
  return *this;
}

HasPtr::~HasPtr()
{
  delete ps;
}

int main(int argc, char *argv[])
{
  HasPtr ctor("From ctor");
  HasPtr copy = ctor;
  copy.change("copy changed");

  ctor.print();
  copy.print();

  ctor = copy;

  ctor.print();
  copy.print();
  return 0;
}
