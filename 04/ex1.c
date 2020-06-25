#include <stdio.h>
int main(void)
{
  char first[40];
  char last[40];

  printf("What are your first and last names?\n");
  scanf("%s %s", first, last);
  printf("Hello %s, %s.\n", last, first);

  return 0;
}