#include <stdio.h>
int main(void)
{
  const int length = 6;
  int row;
  char letter;

  for (row = 0; row < length; row++)
  {
    for (letter = 'F'; letter >= 'F' - row; letter--)
      printf("%c", letter);
    printf("\n");
  }

  return 0;
}