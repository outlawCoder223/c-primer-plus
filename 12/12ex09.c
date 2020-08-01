#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void flush(void);
int main(void)
{
  int numWords, i;
  char temp[20];
  printf("How many words do you wish to enter? ");
  scanf("%d", &numWords);
  flush();
  char **words = (char **)malloc(numWords * sizeof(char *));
  printf("Enter %d words now:\n", numWords);
  for (i = 0; i < numWords; i++)
  {
    scanf("%s", temp);
    words[i] = (char *)malloc(strlen(temp) * sizeof(char));
    strcpy(words[i], temp);
  }
  for (i = 0; i < numWords; i++)
  {
    printf("Word %d is %s and points to %p\n", i, words[i], &words[i][0]);
  }
  free(words);
  return 0;
}

void flush(void)
{
  char ch;
  while ((ch = getchar()) != '\n')
    continue;
}