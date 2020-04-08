#include <stdio.h>

float ftoc(float);
float ctof(float);
void tablec(float);
void tablef(float);
void inverseTableC(int);
void inverseTableF(int);

float
ftoc(float fahr)
{
  float cels;
  
  cels = (fahr - 32) * 5.0/9.0;

  return cels;
}

float
ctof(float cels)
{
  float fahr;

  fahr = (cels * 9.0/5.0) + 32;

  return fahr;
}

void
tablec(float cels)
{
  int to = 0;
  float toCelsius = 0;

  while (to <= cels) {
    if (to == 0) {
      toCelsius = ftoc(to);
    }
    
    printf("%6d °F to %6.2f °C\n", to, toCelsius);
    to += 10;
    toCelsius = ftoc(to);
  }
}

void
tablef(float fahr)
{
  int to = 0;
  float toFahrenheit = 0;

  while (to <= fahr) {
    if (to == 0) {
      toFahrenheit = ctof(to);
    }
    
    printf("%6d °C to %6.2f °F\n", to, toFahrenheit);
    to += 10;
    toFahrenheit = ctof(to);
  }
}

void
inverseTableC(int max)
{
  float toCelsius = 0;

  while (max % 10 != 0) {
    max = max - 1;
    if (max % 10 == 0)
      toCelsius = ftoc(max);
  }

  while (max >= 0) {
    printf("%6d °F to %6.2f °C\n", max, toCelsius);
    max = max - 10;
    toCelsius = ftoc(max);
  }
}

void
inverseTableF(int max)
{
  float toFahrenheit = 0;

  while (max % 10 != 0) {
    max = max - 1;
    if (max % 10 == 0)
      toFahrenheit = ctof(max);
  }
  
  while (max >= 0) {
    printf("%6d °C to %6.2f °F\n", max, toFahrenheit);
    max = max - 10;
    toFahrenheit = ctof(max);
  }
}

int
main()
{
  float input = 0;

  printf("Input the temperature value\n");
  scanf("%f", &input);

  printf("\n");
  printf("Fahrenheit table\n");
  tablef(input);
  printf("\n");
  printf("Celsius table\n");
  tablec(input);
  printf("\n");
  printf("Inverse Fahrenheit table\n");
  inverseTableF(input);
  printf("\n");
  printf("Inverse Celsius table\n");
  inverseTableC(input);

  return 0;
}
