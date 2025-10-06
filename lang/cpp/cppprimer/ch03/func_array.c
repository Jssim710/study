#include <stdio.h>

void f(int a[10])
{
  printf("entered f()\n");
}

int main(int argc, char *argv[]) {
  int a[100];
  int b[3];

  f(a);
  f(b);
  return 0;
}
