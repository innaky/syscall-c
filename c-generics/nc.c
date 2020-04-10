#include <stdio.h>

int
main()
{
  long nc;

  nc = 0;
  while (getchar() != EOF)
    ++nc;

  printf("\n");
  printf("%ld is the number of characters\n", nc);
  printf("%d is the value of EOF\n", EOF);
  printf("%d is the value of getchar() != EOF\n", getchar() != EOF);
}
