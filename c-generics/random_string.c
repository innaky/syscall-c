#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> // for getopt

void numbers(int);
void letters(int);
void numstr(int);
void usage(void);

int
main(int argc, char *argv[])
{

  int option;
  int option_number;
  int nflag = 0;
  int sflag = 0;
  int mflag = 0;

  if (argc > 3)
    usage();

  option_number = atoi(argv[2]);

  srand(time(NULL));

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

  if (nflag)
    numbers(option_number);

  if (sflag)
    letters(option_number);

  if (mflag)
    numstr(option_number);

  return 0;
}

void
usage(void)
{
  fprintf(stderr, "usage: random [-nsm] number.\n");
  exit(1);
}

void
letters(int str_lng)
{
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
numbers(int num_lng)
{
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
numstr(int mix_lng)
{
  int rnumstr;
  char mix[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"};

  while (mix_lng > 0) {
    mix_lng--;
    rnumstr = (rand() % 62);
    printf("%c", mix[rnumstr]);
  }

  printf("\n");

}
