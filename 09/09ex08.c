#include <stdio.h>
double power(double x, int y);
int main(void)
{
  double x, result;
  int y;
  printf("Enter a number and an exponent: ");
  scanf("%lf %d", &x, &y);
  result = power(x, y);
  printf("%f ^ %d = %f\n", x, y, result);

  return 0;
}

double power(double x, int y)
{
  double result = x;
  int i;
  if (y > 0)
  {
    for (i = 1; i < y; i++)
      result *= x;
  }
  else if (y < 0)
  {
    for (i = -1; i > y; i--)
      result *= x;
    result = 1 / result;
  }
  else
    result = 1;

  return result;
}