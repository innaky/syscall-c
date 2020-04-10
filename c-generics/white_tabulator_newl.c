#include <stdio.h>

int
main() {
  long tabulator = 0;
  long new_line = 0;
  long white_space = 0;
  int c;

  while ((c = getchar()) != EOF)
    {
      if (c == ' ')
	++white_space;
      if (c == '\t')
	++tabulator;
      if (c == '\n')
	++new_line;
    }

  printf("\n");
  printf("Count white space is: %ld\n", white_space);
  printf("Count tabulator is: %ld\n", tabulator);
  printf("Count new line is: %ld\n", new_line);
}
