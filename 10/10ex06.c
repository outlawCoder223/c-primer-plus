#include <stdio.h>
void reverse(double arr[], int n);
int main(void)
{
  int i;
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
  reverse(testNums, 10);
  for (i = 0; i < 10; i++)
    printf("%.2f\n", testNums[i]);

  return 0;
}

void reverse(double arr[], int n)
{
  int start = 0;
  int end = n - 1;
  double temp;
  while (start < end)
  {
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}