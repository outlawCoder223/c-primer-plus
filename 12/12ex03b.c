#include <stdio.h>
#include "12ex03.h"

void flush(void);

void invalid(int mode)
{
  char us[] = "US";
  char metric[] = "Metric";
  printf("Invalid mode specified. ");
  if (mode == 0)
    printf("Mode %d(%s) used.\n", mode, metric);
  else if (mode == 1)
    printf("Mode %d(%s) used.\n", mode, us);
}

float get_dist(int mode)
{
  float dist;

  printf("Enter the distance travelled ");
  if (mode == 0)
    printf("in kilometers: ");
  else if (mode == 1)
    printf("in miles: ");
  scanf("%f", &dist);
  flush();

  return dist;
}

float get_fuel(int mode)
{
  float fuel;

  printf("Enter the fuel consumed ");
  if (mode == 0)
    printf("in liters: ");
  else if (mode == 1)
    printf("in gallons: ");
  scanf("%f", &fuel);
  flush();

  return fuel;
}

void show_info(int mode, float dist, float fuel)
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