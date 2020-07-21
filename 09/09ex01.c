#include <stdio.h>
double min(double x, double y);
int main(void)
{
  double x, y;
  printf("Enter two double values: ");
  scanf("%lf %lf", &x, &y);
  printf("The smallest is %f\n", min(x, y));
  return 0;
}

double min(double x, double y)
{
  return x < y ? x : y;
}