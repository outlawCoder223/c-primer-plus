#include <stdio.h>
#define ROWS 3
#define COLUMNS 5
void copy(int m, int n, double target[m][n], double source[m][n]);
void display(int m, int n, double arr[m][n]);
int main(void)
{
  const int m = 3;
  const int n = 5;

  double source[ROWS][COLUMNS] = {
      {11.1, 11.2, 11.3, 11.4, 11.5},
      {12.1, 12.2, 12.3, 12.4, 12.5},
      {13.1, 13.2, 13.3, 13.4, 13.5}};

  double target[ROWS][COLUMNS];

  copy(m, n, target, source);
  display(m, n, source);

  return 0;
}

void copy(int m, int n, double target[m][n], double source[m][n])
{
  int i, j;
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      target[i][j] = source[i][j];
}

void display(int m, int n, double arr[m][n])
{
  int i, j;
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
      printf("%.1f, ", arr[i][j]);
    printf("\n");
  }
}