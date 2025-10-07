#include <iostream>
#include <fstream>
using namespace std;

struct ReadLine {
  string operator()(istream& is = cin) {
    string line;
    if (!getline(is, line))
      return "";
    return line;
  }
};

int main(int argc, char *argv[])
{
  ReadLine from_cin;
  cout << "Input line : ";
  cout << from_cin() << '\n';

  ReadLine from_file;
  string file_name("/etc/os-release");
  ifstream file(file_name);
  cout << "From file " << file_name << " : ";
  cout << from_file(file) << '\n';
  return 0;
}
