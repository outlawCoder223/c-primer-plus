#include <stdio.h>
double difference(double arr[], int n);
int main(void)
{
  double testNums[10] = {
      23.12,
      1146.79,
      64.33,
      468.22,
      648.13,
      562.07,
      701.99,
      196.64,
      795.18,
      364.79};
  double range = difference(testNums, 10);

  printf("The difference between the highest and lowest numbers is %.2f\n", range);

  return 0;
}

double difference(double arr[], int n)
{
  int i;
  double max = arr[0];
  double min = arr[0];

  for (i = 0; i < n; i++)
  {
    if (*(arr + i) > max)
      max = *(arr + i);
    if (*(arr + i) < min)
      min = *(arr + i);
  }
  return max - min;
}