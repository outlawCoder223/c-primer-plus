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
  if (y == 0)
    result = 1;
  else if (y > 1)
    result *= power(x, y - 1);
  else if (y < -1)
    result = 1 / power(x, -y);

  return result;
}