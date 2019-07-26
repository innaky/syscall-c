#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int
main(int argc, char *argv[]) {

  int string_length;
  int option;
  int nflag = 0;
  int sflag = 0;
  int mflag = 0;

  srand(time(NULL));
  printf("Input the length of the string: ");
  scanf("%i", &string_length);

  while((option = getopt (argc, argv, "nsm")) != -1)
    switch (option) {
    case 'n':
      nflag = 1;
      break;
    case 's':
      sflag = 1;
      break;
    case 'm':
      mflag = 1;
      break;
    default:
      usage();
    }

  if (nflag) {
    numbers(string_length);
  }

  if (sflag) {
    letters(string_length);
  }

  if (mflag) {
    numstr(string_length);
  }

  return 0;
}

void
usage(void)
{
  fprintf(stderr, "usage: random [-nsm]\n");
  exit(1);
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
