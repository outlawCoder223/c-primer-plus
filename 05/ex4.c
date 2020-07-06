#include <stdio.h>
int main(void)
{
  const float CONVERSION = 2.54;
  int feet;
  float height, inches, tot_inches;
  printf("Please enter a height in cm:\n");
  scanf("%f", &height);
  while (height > 0)
  {
    tot_inches = height / CONVERSION;
    feet = (int)tot_inches / 12;
    inches = tot_inches - feet * 12;
    printf("%.2fcm is %d feet %.2f inches\n", height, feet, inches);
    printf("Enter another height (<=0 to quit)\n");
    scanf("%f", &height);
  }
  printf("bye\n");

  return 0;
}