#include <stdio.h>
int main(void)
{
  int friends = 5;
  int week = 1;
  do
  {
    friends = (friends - week) * 2;
    printf("Week %d\nFriends: %d\n", week, friends);
    week++;
  } while (friends < 150);
  return 0;
}