#include <stdio.h>
int main(void)
{
  int n1, n2, i;
  int sum = 0;
  printf("Enter lower and upper integer limits: ");
  scanf("%d%d", &n1, &n2);
  while (n2 > n1)
  {
    for (i = n1; i <= n2; i++)
    {
      sum += i * i;
    }
    printf("The sums of the squares from %d to %d is %d\n", n1, n2, sum);
    printf("Enter next set of limits: ");
    scanf("%d%d", &n1, &n2);
  }
  printf("Done\n");

  return 0;
}