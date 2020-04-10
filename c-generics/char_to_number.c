#include <stdio.h>

int
main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == 10)
      ;
    else
      printf("%d\n", c);
  }
}
