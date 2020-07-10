#include <stdio.h>
int power(int n, int y);
int main(void)
{
  int numbers[8], i, num;
  for (i = 0; i < 8; i++)
  {
    numbers[i] = power(2, i);
  }

  for (i = 0; i < 8; i++)
    printf("%d, ", numbers[i]);
  printf("\n");
  return 0;
}

int power(int base, int exp)
{
  int result = 1;
  int i;
  for (i = 0; i < exp; i++)
  {
    result *= base;
  }
  return result;
}