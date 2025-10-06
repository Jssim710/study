#include <iostream>
using namespace std;

static int sn = 0;

class numbered;
void f(const numbered& s);
class numbered {
friend void f(const numbered&);
public:
  numbered(): mysn(sn+1) { ++sn; }
  numbered(const numbered& orig);
private:
  int mysn;
};

numbered::numbered(const numbered& orig)
{
  mysn = ++sn;
}

void f(const numbered& s)
{
  cout << s.mysn << endl;
}


int main(int argc, char *argv[])
{
  numbered a, b = a, c = b;
  f(a); f(b); f(c);
}
