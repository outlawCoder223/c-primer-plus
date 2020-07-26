#include <stdio.h>
int indexof(double arr[], int n);
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

  int index = indexof(testNums, 10);
  printf("Index of largest value: %d\n", index);
  return 0;
}

int indexof(double arr[], int n)
{
  int i, index;
  double max = arr[0];

  for (i = 0; i < n; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
      index = i;
    }
  }
  return index;
}