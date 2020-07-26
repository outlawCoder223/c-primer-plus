#include <stdio.h>
void copy_arr(double target[], double source[], int n);
int main(void)
{
  int i, j;
  double testNums[3][4] = {
      {4.5, 2.3, 7.6, 8.1},
      {4.5, 2.3, 7.6, 8.1},
      {4.5, 2.3, 7.6, 8.1},
  };
  double target[3][4];
  for (i = 0; i < 3; i++)
  {
    copy_arr(target[i], testNums[i], 4);
  }
  for (i = 0; i < 3; i++)
    for (j = 0; j < 4; j++)
      printf("%.1f\n", target[i][j]);

  return 0;
}

void copy_arr(double target[], double source[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    target[i] = source[i];
}