#include <iostream>
#include <forward_list>
using namespace std;


void f(forward_list<string>& flst, const string& s1, const string& s2)
{
  auto prev = flst.before_begin();
  auto curr = flst.begin();
  for (; curr != flst.end(); ++curr, ++prev) {
    if (*curr == s1) {
      flst.insert_after(curr, s2); // 찾으면 curr 뒤에 삽입
      return;
    }
  }

  // 찾지 못했으면 prev == 마지막 원소
  flst.insert_after(prev, s2); // 끝에 삽입
}

int main(int argc, char *argv[])
{
  forward_list<string> flst {"a", "b", "c"};
  cout << "Before f() : ";
  for (auto& s: flst) cout << s << " ";
  cout << endl;

  f(flst, "b", "s2");

  cout << "After f() : ";
  for (auto& s: flst) cout << s << " ";
  cout << endl;

  return 0;
}
