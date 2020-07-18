#include <stdio.h>
int main(void)
{
  char ch;
  char prev = '\n';
  int count = 0;

  while ((ch = getchar()) != '#')
  {
    if (prev == 'e' && ch == 'i')
      count++;
    prev = ch;
  }
  printf("Number of ei's: %d\n", count);

  return 0;
}