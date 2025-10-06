#include <iostream>
using namespace std;

class Employee {
  static int id;
  int myid;
  string name;
public:
  Employee(): name(""), myid(++id) {}
  Employee(const string& s) :name(s), myid(++id) {}
  Employee(const Employee& e) :name(e.name), myid(++id) {}
  Employee& operator=(const Employee& e) { name = e.name; return *this; }
  void print() const { cout << name << " with id: " << myid << '\n';}
};

int Employee::id = 0;
int main(int argc, char *argv[])
{
  Employee a, b("b"), c("c");
  a.print();
  b.print();
  c.print();

  cout << "c = b;" << '\n';
  c=b;

  b.print();
  c.print();
  return 0;
}
