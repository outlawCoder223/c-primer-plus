#include <stdio.h>
#include <string.h>
void removeSpace(char *str);
char *s_gets(char *st, int n);
int main(void)
{
  char string[80];
  while (string[0])
  {
    printf("Enter a string to reverse: (enter to quit)\n");
    s_gets(string, 80);
    removeSpace(string);
    puts(string);
  }
  printf("Bye!\n");
  return 0;
}

void removeSpace(char *str)
{
  int i, j;
  for (i = 0; i < strlen(str); i++)
  {
    if (str[i] == ' ')
    {
      for (j = i; j < strlen(str); j++)
      {
        str[j] = str[j + 1];
      }
    }
  }
}

char *s_gets(char *st, int n)
{
  char *ret_val;
  int i = 0;

  ret_val = fgets(st, n, stdin);
  if (ret_val)
  {
    while (st[i] != '\n' && st[i] != '\0')
      i++;
    if (st[i] == '\n')
      st[i] = '\0';
    else
      while (getchar() != '\n')
        continue;
  }
  return ret_val;
}