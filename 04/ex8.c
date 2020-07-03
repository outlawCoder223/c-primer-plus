#include <stdio.h>
int main(void)
{
  const float gallon = 3.785;
  const float mile = 1.609;
  float miles_trav, fuel, mpg, litres, km, lp100k;
  
  printf("Enter miles traveled and fuel used (gallons):\n");
  scanf("%f %f", &miles_trav, &fuel);
  mpg = miles_trav / fuel;
  km = miles_trav * mile;
  litres = fuel * gallon;
  lp100k = litres / km * 100;
  printf("MPG = %.1f\n", mpg);
  printf("Litres/100km = %.1f\n", lp100k);
  return 0;
}