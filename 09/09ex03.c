#include <stdio.h>
void printer(char ch, int col, int row);

int main(void)
{
  char ch;
  int col, row;
  printf("Enter the character you want to print: ");
  ch = getchar();
  printf("Enter the col and rows to be printed respectively: ");
  scanf("%d %d", &col, &row);
  printer(ch, col, row);

  return 0;
}

void printer(char ch, int col, int row)
{
  int i, j;
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      putchar(ch);
    }
    putchar('\n');
  }
}