#include <stdio.h>
#define ROWS 3
#define COLS 5
void printArr(int arr[][5], int n);
void doubleArr(int arr[][5], int n);
int main(void)
{
  int matrix[ROWS][COLS] = {
      {5, 2, 1, 3, 11},
      {10, 7, 9, 25, 6},
      {4, 8, 12, 5, 6}};

  printArr(matrix, ROWS);
  doubleArr(matrix, ROWS);
  printf("After Doubling:\n");
  printArr(matrix, ROWS);

  return 0;
}

void printArr(int arr[][5], int n)
{
  int i, j;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < COLS; j++)
      printf("%d, ", arr[i][j]);
    printf("\n");
  }
}

void doubleArr(int arr[][5], int n)
{
  int i, j;
  for (i = 0; i < n; i++)
    for (j = 0; j < COLS; j++)
      arr[i][j] *= 2;
}