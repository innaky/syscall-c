#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int
main(int argc, char *argv[]) {

  int string_length;

  srand(time(NULL));
  printf("Input the length of the string: ");
  scanf("%i", &string_length);

  numstr(string_length);
  letters(string_length);
  numbers(string_length);

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
  printf("\n");
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

  printf("\n");

}

void
numstr(int mix_lng) {
  int rnumstr;
  char mix[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"};

  while (mix_lng > 0) {
    mix_lng--;
    rnumstr = (rand() % 62);
    printf("%c", mix[rnumstr]);
  }

  printf("\n");

}
