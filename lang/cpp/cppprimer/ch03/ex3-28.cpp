#include <iostream>
using namespace std;

template<typename T>
void print(T arr[10]) {
  for (int i = 0; i < 10; ++i)
    cout << arr[i] << " ";
  cout << endl;
}


string sa[10];
int ia[10];
int main() {
    string sa2[10];
    int    ia2[10];
    print(sa);
    print(ia);
    print(sa2);
    print(ia2);
}
