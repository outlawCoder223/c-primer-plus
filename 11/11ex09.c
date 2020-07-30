#include <stdio.h>
#include <string.h>

void reverse(char *str);
char *s_gets(char *st, int n);
int main(void)
{
  char string[80];
  while (string[0])
  {
    printf("Enter a string to reverse: (enter to quit)\n");
    s_gets(string, 80);
    reverse(string);
    puts(string);
  }
  printf("Bye!\n");
  return 0;
}

void reverse(char *str)
{
  char temp;
  int start = 0;
  int end = strlen(str) - 1;
  while (start < end)
  {
    temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    start++;
    end--;
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