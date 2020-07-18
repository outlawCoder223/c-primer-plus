#include <stdio.h>
int main(void)
{
  int curr;
  int evencnt = 0;
  int oddcnt = 0;
  float eventot = 0;
  float oddtot = 0;

  printf("Enter integers: (0 to quit)\n");
  while (scanf("%d", &curr) == 1)
  {
    if (curr == 0)
      break;
    else if (curr % 2 == 0)
    {
      evencnt++;
      eventot += curr;
    }
    else
    {
      oddcnt++;
      oddtot += curr;
    }
  }
  printf("Summary:\n");
  printf("Total evens: %d\nAverage even: %.2f\n", evencnt, eventot / evencnt);
  printf("Total odds: %d\nAverage Odd: %.2f\n", oddcnt, oddtot / oddcnt);

  return 0;
}