#include <stdio.h>
void largerof(double *num1, double *num2);
int main(void)
{
  double num1, num2;
  printf("Enter two numbers: ");
  scanf("%lf %lf", &num1, &num2);
  largerof(&num1, &num2);
  printf("num1: %f\nnum2: %f\n", num1, num2);

  return 0;
}

void largerof(double *num1, double *num2)
{
  if (*num1 > *num2)
    *num2 = *num1;
  else
    *num1 = *num2;
}