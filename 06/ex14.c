#include <stdio.h>
#define MAX_SIZE 8
int main(void)
{
  double first[MAX_SIZE], second[MAX_SIZE];
  int i;
  printf("Enter 8 doubles: ");
  for (i = 0; i < MAX_SIZE; i++)
  {
    scanf("%lf", &first[i]);
  }
  second[0] = first[0];
  for (i = 1; i < MAX_SIZE; i++)
  {
    second[i] = first[i] + second[i - 1];
  }
  for (i = 0; i < MAX_SIZE; i++)
  {
    printf("first[%d] = %f\n", i, first[i]);
    printf("second[%d] = %f\n", i, second[i]);
  }

  return 0;
}