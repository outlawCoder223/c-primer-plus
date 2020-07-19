#include <stdio.h>
int main(void)
{
  int ch;
  int count = 0;

  while ((ch = getchar()) != EOF)
  {
    if (count >= 10 || ch == '\n')
    {
      printf("\n");
      count = 0;
    }
    if (ch == ' ' || ch == '\t' || ch == '\n')
      continue;
    else
    {
      printf("%c: %d, ", ch, ch);
      count++;
    }
  }
  printf("\n");

  return 0;
}