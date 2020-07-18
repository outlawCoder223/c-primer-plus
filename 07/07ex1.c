#include <stdio.h>
int main(void)
{
  char ch;
  int spaces = 0;
  int newline = 0;
  int other = 0;

  while ((ch = getchar()) != '#')
  {
    switch (ch)
    {
    case ' ':
      spaces++;
      break;
    case '\n':
      newline++;
      break;
    default:
      other++;
      break;
    }
  }
  printf("Summary: \n");
  printf("Spaces: %d\nNewline Characters: %d\nOther: %d\n",
         spaces, newline, other);

  return 0;
}