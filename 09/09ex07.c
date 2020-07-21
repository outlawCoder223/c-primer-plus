#include <stdio.h>
#include <ctype.h>
int checkChar(char ch);
int main(void)
{
  char ch;
  int loc;
  while ((ch = getchar()) != EOF)
  {
    if (!isspace(ch))
    {
      loc = checkChar(ch);
      if (loc > 0)
        printf("'%c': %d\n", ch, loc);
      else
        printf("'%c': not a letter\n", ch);
    }
  }
  return 0;
}

int checkChar(char ch)
{
  int loc;
  if (isupper(ch))
    loc = (int)ch - 64;
  else if (islower(ch))
    loc = (int)ch - 96;
  else
    loc = -1;

  return loc;
}