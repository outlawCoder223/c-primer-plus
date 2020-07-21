#include <stdio.h>
int main(void)
{
  int seq, i, result;
  int prev = 0, curr = 1;
  printf("Enter the number of the Fibonacci sequence you want: ");
  scanf("%d", &seq);
  for (i = 0; i < seq; i++)
  {
    result = prev + curr;
    printf("%d ", result);
    prev = curr;
    curr = result;
  }
  printf("\n");
  return 0;
}