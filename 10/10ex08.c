#include <stdio.h>
void copy_ptrs(double target[], double source[], double f_source[]);
int main(void)
{
  int i;
  double testNums[7] = {20.1, 20.2, 20.3, 20.4, 20.5, 20.6, 20.7};
  double copy[3];
  copy_ptrs(copy, testNums + 3, testNums + 6);
  for (i = 0; i < 3; i++)
    printf("%.1f\n", copy[i]);
  return 0;
}

void copy_ptrs(double target[], double source[], double f_source[])
{
  int i;
  double *ptr;
  for (i = 0, ptr = source; ptr < f_source; i++, ptr++)
    target[i] = *ptr;
}