#include <stdio.h>
int main(void)
{
  int count = 0;
  char ch;

  while ((ch = getchar()) != EOF)
    count++;

  printf("There were %d characters in that input.\n", count);

  return 0;
}