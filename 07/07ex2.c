#include <stdio.h>
int main(void)
{
  char ch;

  int charCount = 0;

  while ((ch = getchar()) != '#')
  {
    if (charCount % 8 == 0)
      printf("\n");
    printf("%d,", ch);
    charCount++;
  }
  printf("\nDone\n");

  return 0;
}