#include <stdio.h>
void sort(double *x, double *y, double *z);
int main(void)
{
  double x, y, z;
  printf("Enter 3 numbers: ");
  scanf("%lf %lf %lf", &x, &y, &z);
  sort(&x, &y, &z);
  printf("Smallest to largest:\n");
  printf("%f\n%f\n%f\n", x, y, z);

  return 0;
}

void sort(double *x, double *y, double *z)
{
  double temp;

  while (1)
  {
    if (*x > *y)
    {
      temp = *y;
      *y = *x;
      *x = temp;
    }
    if (*y > *z)
    {
      temp = *z;
      *z = *y;
      *y = temp;
    }
    if (*x < *y && *y < *z)
      break;
  }
}