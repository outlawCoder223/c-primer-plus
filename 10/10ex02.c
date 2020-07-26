#include <stdio.h>
void copy_arr(double target[], double source[], int n);
void copy_ptr(double target[], double source[], int n);
void copy_ptrs(double target[], double source[], double f_source[]);
void print_arr(double source[], int n);
int main(void)
{
  double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  double target1[5];
  double target2[5];
  double target3[5];
  copy_arr(target1, source, 5);
  copy_ptr(target2, source, 5);
  copy_ptrs(target3, source, source + 5);
  print_arr(target1, 5);
  print_arr(target2, 5);
  print_arr(target3, 5);
  return 0;
}

void copy_arr(double target[], double source[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    target[i] = source[i];
}

void copy_ptr(double target[], double source[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    *(target + i) = *(source + i);
}

void copy_ptrs(double target[], double source[], double f_source[])
{
  int i;
  double *ptr;
  for (i = 0, ptr = source; ptr < f_source; i++, ptr++)
    target[i] = *ptr;
}

void print_arr(double source[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    printf("%f\n", source[i]);
}
