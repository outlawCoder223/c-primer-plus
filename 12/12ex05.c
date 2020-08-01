#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sort(int arr[], int n);
void swap(int *xp, int *yp);
int main(void)
{
  int numbers[100];
  int i;
  for (i = 0; i < 100; i++)
    numbers[i] = rand() % 10 + 1;
  sort(numbers, 100);
  for (i = 0; i < 100; i++)
  {
    printf("%d ", numbers[i]);
    if ((i + 1) % 5 == 0)
      printf("\n");
  }
  return 0;
}

void sort(int arr[], int n)
{
  int i, j, max_idx;

  for (i = 0; i < n - 1; i++)
  {
    max_idx = i;
    for (j = i + 1; j < n; j++)
      if (arr[j] > arr[max_idx])
        max_idx = j;

    // Swap the found minimum element with the first element
    swap(&arr[max_idx], &arr[i]);
  }
}

void swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}