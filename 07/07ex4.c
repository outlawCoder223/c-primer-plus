#include <stdio.h>
int main(void)
{
  char ch;
  int subs = 0;

  while ((ch = getchar()) != '#')
  {
    if (ch == '!')
    {
      subs++;
      printf("!!");
    }
    else if (ch == '.')
    {
      subs++;
      printf("!");
    }
    else
      printf("%c", ch);
  }
  printf("\n");

  return 0;
}