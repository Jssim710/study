#include <iostream>
using namespace std;

template <typename T>
class Ternary {
public:
  T operator()(bool condition, T val1, T val2) const {
    return condition? val1 : val2;
  }
};

int main(int argc, char *argv[])
{
  Ternary<int> t;
  cout << t(true, 42, -1) << endl;
  cout << t(false, 42, -1) << endl;
  return 0;
}
