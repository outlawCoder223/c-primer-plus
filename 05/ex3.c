#include <stdio.h>
int main(void)
{
  const int DAYS_IN_WEEK = 7;
  int days;
  printf("Enter a number of days to convert:\n");
  scanf("%d", &days);
  while (days > 0)
  {
    printf("%d days is %d week(s), %d days.\n",
           days, days / 7, days % 7);
    printf("Enter another number or 0 to quit: \n");
    scanf("%d", &days);
  }
  printf("Goodbye\n");
  return 0;
}