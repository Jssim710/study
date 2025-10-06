#include <iostream>
using namespace std;

class Employee {
  static int id;
  int myid;
  string name;
public:
  Employee(): name(""), myid(++id) {}
  Employee(const string& s) :name(s), myid(++id) {}
  void print() const { cout << name << " with id: " << myid << '\n';}
};

int Employee::id = 0;
int main(int argc, char *argv[])
{
  Employee a, b("b");
  a.print();
  b.print();
  return 0;
}
