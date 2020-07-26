#include <stdio.h>
int max(int arr[], int n);
int main(void)
{
  int testNums[10] = {2, 5, 123, 643, 73, 1, 34, 7, 34, 63};
  int largest = max(testNums, 10);
  printf("The largest value is %d\n", largest);
  return 0;
}

int max(int arr[], int n)
{
  int i, max = arr[0];
  for (i = 0; i < n; i++)
  {
    if (arr[i] > max)
      max = arr[i];
  }
  return max;
}