#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  char abc[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%&/()=*-_.,;{}+[]0123456789"};
  int string_length;
  int rchar;

  srand(time(NULL));
  printf("Input the length of the string: ");
  scanf("%i", &string_length);

  while (string_length > 0) {
    string_length--;
    rchar = (rand() % 81);

    printf("%c", abc[rchar]);
  }

  printf("\n");

  return 0;
}
