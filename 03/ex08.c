#include <stdio.h>

int main()
{
  float cups, pint, oz, tbsp, tsp;
  

  printf("Enter an amount in cups:\n");
  scanf("%f", &cups);
  pint = cups * 2;
  oz = cups / 8;
  tbsp = oz / 2;
  tsp = tbsp / 3;
  printf("%f cups is:\n", cups);
  printf("%fpints\n", pint);
  printf("%foz\n", oz);
  printf("%ftbsp\n", tbsp);
  printf("%ftsp\n", tsp);
  return 0;
}