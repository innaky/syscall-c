#include <stdio.h>

#define JUMP 10

int main()
{
  float cels, farh; 
  int max;
  
  farh = 0;
  
  printf("Input the max value of the table: ");
  scanf("%d", &max);
  
  while (farh <= max) {
    cels = 5.0 * (farh - 32.0) / 9.0;
    printf("%4.2f ºF is %4.2f ºC\n", farh, cels);
    farh += JUMP;
  }
  
  return 0;
  
}
