#include <stdio.h>

int main()
{
  float cm = 2.54;
  float height;

  printf("Please enter your height in inches:\n");
  scanf("%f", &height);
  printf("Your height in centimeters is... %.2fcm\n", height * cm);
  return 0;
}