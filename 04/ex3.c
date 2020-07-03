#include <stdio.h>
int main(void)
{
  float num;
  printf("Enter a floating point number:\n");
  scanf("%f", &num);
  printf("The input is %.1f or %.1e.", num, num);
  printf("The input is %.3f or %.3e.", num, num);

  return 0;
}