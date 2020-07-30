#include <stdio.h>
#include <string.h>
#include <ctype.h>
void readWord(char *string);
int main(void)
{
  int i;
  char string[30];
  readWord(string);
  for (i = 0; i < strlen(string); i++)
    printf("%c", string[i]);
  printf("\n");
  return 0;
}

void readWord(char *string)
{
  int i = 0;
  char ch;
  ch = getchar();
  while (isspace(ch))
    ch = getchar();

  while (!isspace(ch) && ch != '\0')
  {
    string[i] = ch;
    ch = getchar();
    i++;
  }
  string[i] = '\0';
}