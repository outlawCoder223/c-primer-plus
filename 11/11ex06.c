#include <stdio.h>
#include <string.h>

int find(char *str, char ch);

int main(void)
{
  char test_str[81];
  char ch;
  int found;
  while (ch != 'n')
  {
    printf("Enter a string to test:\n");
    fgets(test_str, 81, stdin);
    printf("Enter a character to search for:\n");
    ch = getchar();
    found = find(test_str, ch);
    if (found)
      printf("I found %c!\n", ch);
    else
      printf("I couldn't find that character\n");
    while ((ch = getchar()) != '\n')
      ;
    printf("Test another string? (y/n)\n");
    ch = getchar();
    if (ch == 'n')
      break;
    while ((ch = getchar()) != '\n')
      ;
  }
  printf("Bye\n");
  return 0;
}

int find(char *str, char ch)
{
  int i;

  for (i = 0; i < strlen(str); i++)
  {
    if (str[i] == ch)
    {
      return 1;
    }
  }
  return 0;
}