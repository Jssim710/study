#include <iostream>
#include <string>
// using namespace std;

int main(int argc, char *argv[])
{
  std::string book1("0-201-78345-X");
  std::string book2{"0-201-78345-X"};
  std::string book3 = "0-201-78345-X";
  std::cout << book1 << " " << book2 << " " << book3 << std::endl;
  return 0;
}
