#include <stdio.h>
#include <string.h>
int main(void)
{
  char word[15];
  int i;
  printf("Enter a word: ");
  scanf("%s", word);
  for (i = (strlen(word) - 1); i >= 0; i--)
  {
    printf("%c\n", word[i]);
  }

  return 0;
}