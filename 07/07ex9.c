#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int input, i, j;
  bool isPrime;

  printf("Enter a positive integer: ");
  scanf("%d", &input);
  printf("Prime numbers between 1 & %d:\n", input);
  for (i = 2; i < input; i++)
  {
    for (j = 2; j <= i / 2; j++)
    {
      isPrime = true;
      if (i % j == 0)
      {
        isPrime = false;
        break;
      }
    }
    if (isPrime)
    {
      printf("%d\n", i);
    }
  }
  printf("Done\n");

  return 0;
}