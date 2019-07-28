#include <stdio.h>

int main()
{
  int cels, farh; 
  int max;
  
  farh = 0;
  
  printf("Input the max value of the table: ");
  scanf("%d", &max);
  
  while (farh <= max) {
    cels = 5 * (farh - 32) / 9;
    printf("%d ºF is %d ºC", farh, cels);
    farh += 10;
  }
  
  return 0;
  
}
