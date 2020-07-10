#include <stdio.h>
int main(void)
{
  const int ROWS = 6;
  char letter = 'A';
  int i, j;

  for (i = 1; i <= ROWS; i++)
  {
    for (j = 0; j < i; j++)
    {
      printf("%c", letter);
      letter++;
    }
    printf("\n");
  }

  return 0;
}