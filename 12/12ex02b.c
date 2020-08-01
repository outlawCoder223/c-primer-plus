#include <stdio.h>
#include "12ex02a.h"

static int mode;
static float dist, fuel;
void flush(void);

void set_mode(int n)
{
  char us[] = "US";
  char metric[] = "Metric";
  if (n > 2)
  {
    printf("Invalid mode specified. ");
    if (mode == 0)
      printf("Mode %d(%s) used.\n", mode, metric);
    else if (mode == 1)
      printf("Mode %d(%s) used.\n", mode, us);
  }
  else
    mode = n;
}

void get_info(void)
{
  printf("Enter the distance travelled ");
  if (mode == 0)
    printf("in kilometers: ");
  else if (mode == 1)
    printf("in miles: ");
  scanf("%f", &dist);
  printf("Enter the fuel consumed ");
  if (mode == 0)
    printf("in liters: ");
  else if (mode == 1)
    printf("in gallons: ");
  scanf("%f", &fuel);
  flush();
}

void show_info(void)
{
  float calc;
  if (mode == 0)
    calc = 100 * fuel / dist;
  else if (mode == 1)
    calc = dist / fuel;
  printf("Fuel consumed is ");
  switch (mode)
  {
  case 0:
    printf("%.2f liters per 100 km.\n", calc);
    break;
  case 1:
    printf("%.2f miles per gallon.\n", calc);
    break;
  }
}

void flush(void)
{
  char ch;
  while ((ch = getchar()) != '\n')
    continue;
}