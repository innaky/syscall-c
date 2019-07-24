#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int
main(int argc, char *argv[]) {

  int string_length;

  srand(time(NULL));
  printf("Input the length of the string: ");
  scanf("%i", &string_length);

  printf("\n");

  return 0;
}

void
letters(int str_lng) {
  int rletter;
  char letters[] = {"abcdefghijklmnopqrstuvwzyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};

  while (str_lng > 0) {
    str_lng--;
    rletter = (rand() % 52);
    printf("%c", letters[rletter]);
  }
}

void
numbers(int num_lng) {
  int rnum;
  char numbers[] = {"0123456789"};

  while (num_lng > 0) {
    num_lng--;
    rnum = (rand() % 10);
    printf("%c", numbers[rnum]);
  }
}
