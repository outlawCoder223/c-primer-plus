#include <stdio.h>
#define ROWS 3
#define COLS 5
void getInput(double arr[][COLS], int n);
double averageArr(double arr[], int n);
double averageMatrix(double arr[][COLS], int n);
double findMax(double arr[][COLS], int n);

int main(void)
{
  int i, j;
  double matrix[ROWS][COLS];
  double avgs[ROWS];
  double totAvg, max;
  getInput(matrix, ROWS);
  for (i = 0; i < ROWS; i++)
  {
    for (j = 0; j < COLS; j++)
      printf("%.2f ", matrix[i][j]);
    printf("\n");
  }
  for (i = 0; i < ROWS; i++)
    avgs[i] = averageArr(matrix[i], COLS);
  totAvg = averageMatrix(matrix, ROWS);
  max = findMax(matrix, ROWS);

  for (i = 0; i < ROWS; i++)
    printf("Average of row %d: %.2f\n", i + 1, *(avgs + i));
  printf("Average of total matrix: %.2f\n", totAvg);
  printf("The biggest number was: %.2f\n", max);
  return 0;
}

void getInput(double arr[][COLS], int n)
{
  int i, j;
  for (i = 0; i < n; i++)
    for (j = 0; j < COLS; j++)
      scanf("%lf", &arr[i][j]);
}

double averageArr(double arr[], int n)
{
  int i;
  double result = 0;
  for (i = 0; i < n; i++)
    result += arr[i];
  return result / (double)n;
}

double averageMatrix(double arr[][COLS], int n)
{
  int i, j;
  double result = 0;
  for (i = 0; i < n; i++)
    for (j = 0; j < COLS; j++)
      result += arr[i][j];

  return result / (COLS * n);
}

double findMax(double arr[][COLS], int n)
{
  int i, j;
  double max = arr[0][0];
  for (i = 0; i < n; i++)
    for (j = 0; j < COLS; j++)
    {
      if (arr[i][j] > max)
        max = arr[i][j];
    }

  return max;
}