#include <stdio.h>
#define SIZE 5
void addArrays(int empty[], int arr1[], int arr2[], int);
int main(void)
{
  int i;
  int blank[SIZE];
  int testNums1[SIZE] = {1, 3, 5, 7, 9};
  int testNums2[SIZE] = {2, 4, 6, 8, 10};
  addArrays(blank, testNums1, testNums2, SIZE);
  for (i = 0; i < SIZE; i++)
    printf("%d ", blank[i]);

  printf("\n");
  return 0;
}

void addArrays(int empty[], int arr1[], int arr2[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    empty[i] = arr1[i] + arr2[i];
}
