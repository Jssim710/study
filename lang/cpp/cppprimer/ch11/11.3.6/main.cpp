#include <fstream>
#include "word_transform.h"
using namespace std;

int main()
{
  auto map_file = ifstream("rule.txt");
  auto input = ifstream("input.txt");
  word_transform(map_file, input);
}
