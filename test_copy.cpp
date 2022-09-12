#include <cstdio> // "stdio.h"
#include <iostream>

void fn(int* r) {
  int o = 0, k = 10;
  while (k--) {
    ++o;
    ++o;
    printf("%d", r[o]);
  }
}

int main (int argc, char *argv[]) {
  while (argc--) {
    printf("%d", argv[argc]);
  }
}
