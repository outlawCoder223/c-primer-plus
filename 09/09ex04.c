#include <stdio.h>
double hmean(double x, double y);
int main(void)
{
  double num1, num2;
  printf("Enter two numbers: ");
  scanf("%lf %lf", &num1, &num2);
  printf("The harmonic mean of %f and %f is %f\n",
         num1, num2, hmean(num1, num2));
  return 0;
}

double hmean(double num1, double num2)
{
  double rsum = 1 / num1 + 1 / num2;
  return 2 / rsum;
}