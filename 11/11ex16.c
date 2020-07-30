#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
  char ch;
  while ((ch = getchar()) != EOF)
  {
    if (!argv[1] || argv[1][1] == 'p')
      putchar(ch);
    else if (argv[1][1] == 'u')
    {
      ch = toupper(ch);
      putchar(ch);
    }
    else if (argv[1][1] == 'l')
    {
      ch = tolower(ch);
      putchar(ch);
    }
    else
    {
      printf("Enter a valid argument\n");
      break;
    }
  }

  return 0;
}