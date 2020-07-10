#include <stdio.h>
int main(void)
{
  char input, letter;
  int rows, col, spaces, i, j;
  printf("Enter an uppercase letter: ");
  scanf("%c", &input);
  spaces = input - 'A';
  rows = spaces + 1;
  col = rows * 2 + 1;
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < spaces; j++)
      printf(" ");
    for (letter = 'A'; letter < ('A' + i); letter++)
      printf("%c", letter);
    for (letter = ('A' + i); letter >= 'A'; letter--)
      printf("%c", letter);
    spaces--;
    printf("\n");
  }

  return 0;
}