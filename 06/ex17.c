#include <stdio.h>
int main(void)
{
  int count = 1;
  float account = 1000000.0;
  while (account > 0)
  {
    printf("Account at the beginning of year %d: %.2f\n", count, account);
    account *= 1.08;
    account -= 100000;
    printf("Account at the end of year %d: %.2f\n", count, account);
    count++;
  }

  return 0;
}