#include <stdio.h>
int main(void)
{
  float n1 = 1.0;
  float n2 = 1.0;
  double sum1, sum2;
  int terms, i;
  printf("Enter the terms: ");
  scanf("%d", &terms);
  for (i = 0; i < terms; i++)
  {
    sum1 = sum1 + (n1 / n2);
    sum2 = (-1 * sum2) + (n1 / n2);
    printf("sum1 = %f\n", sum1);
    printf("sum2 = %f\n", sum2);
    printf("------------\n");
    n2 += 1.0;
  }
  printf("Done\n");

  return 0;
}