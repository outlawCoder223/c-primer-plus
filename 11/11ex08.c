#include <stdio.h>
#include <string.h>

char *string_in(char *s1, char *s2);
char *s_gets(char *st, int n);
void flush(void);
int main(void)
{
  char str1[40];
  char str2[10];
  while (str1[0] != '\n')
  {
    printf("Please enter a string:\n");
    s_gets(str1, 40);
    printf("Please enter a string to search for:\n");
    s_gets(str2, 10);
    if (string_in(str1, str2))
      printf("\nFound!\n");
    else
      printf("\nNot Found!\n");
    printf("Enter another string? (y/n)\n");
    if (getchar() == 'n')
      break;
    flush();
  }

  return 0;
}

char *string_in(char *s1, char *s2)
{
  int i;
  int j;
  for (i = 0; i < strlen(s1); i++)
  {
    if (s1[i] == s2[0])
    {
      for (j = 1; j < strlen(s2); j++)
      {
        if (s1[i + j] != s2[j])
          break;
      }
      if (j == strlen(s2))
        return &s1[i];
    }
  }
  return NULL;
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

void flush(void)
{
  while (getchar() != '\n')
    ;
}