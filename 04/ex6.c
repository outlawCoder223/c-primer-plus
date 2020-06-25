#include <stdio.h>
#include <string.h>
int main(void)
{
  char first[20], last[20];
  int first_len, last_len;

  printf("Enter your name:\n");
  scanf("%s %s", first, last);
  first_len = (int) strlen(first);
  last_len = (int) strlen(last);
  printf("%s %s\n%*d %*d\n", first, last, first_len, first_len, last_len, last_len);
  printf("%s %s\n%-*d %-*d\n", first, last, first_len, first_len, last_len, last_len);

  return 0;
}