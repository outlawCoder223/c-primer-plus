#include <stdio.h>
#include <ctype.h>
#include <string.h>
void store(char *string, int n);
int main()
{
  int i;
  char string[30];
  store(string, 5);
  for (i = 0; i < strlen(string); i++)
    printf("%c", string[i]);
  printf("\n");
  return 0;
}

void store(char *string, int n)
{
  int i;
  char ch;

  for (i = 0; i < n; i++)
  {
    ch = getchar();
    if (!ch || isspace(ch))
    {
      string[i] = '\0';
      break;
    }
    else
      string[i] = ch;
  }
}
