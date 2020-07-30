#include <stdio.h>
#include <string.h>

char *mystrncpy(char *s1, char *s2, int n);
int main(void)
{
  int i;
  char str1[10];
  char *str2 = " World";
  printf("%zd\n", sizeof str1);
  mystrncpy(str1, str2, 2);
  printf("%ld\n", strlen(str1));
  puts(str1);
  printf("\n");
  return 0;
}

char *mystrncpy(char *s1, char *s2, int n)
{
  int i;
  if (n >= strlen(s2))
    for (i = 0; i < strlen(s2); i++)
      s1[i] = s2[i];
  else
    for (i = 0; i < n; i++)
      s1[i] = s2[i];
  s1[i] = '\0';
  return s1;
}