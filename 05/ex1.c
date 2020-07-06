#include <stdio.h>
#define H_IN_M 60
int main(void)
{
  int time, hours, mins;

  printf("Please enter a time in minutes:\n");
  scanf("%d", &time);
  while (time > 0)
  {
    hours = time / H_IN_M;
    mins = time % H_IN_M;
    printf("Your time of %d is %d hours and %d minutes\n", time, hours, mins);
    printf("Enter another time or 0 to quit:\n");
    scanf("%d", &time);
  }
  printf("Thanks have a good day.\n");

  return 0;
}