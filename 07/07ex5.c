#include <stdio.h>
int main(void)
{
  char ch;
  int subs = 0;

  while ((ch = getchar()) != '#')
  {
    switch (ch)
    {
    case '!':
      printf("!!");
      subs++;
      break;
    case '.':
      printf("!");
      subs++;
      break;
    default:
      printf("%c", ch);
      break;
    }
  }
  printf("\nTotal substitutions: %d\n", subs);

  return 0;
}