#include <stdio.h>
int main(void)
{
  const int SIZE = 26;
  char lowercase[SIZE];
  char letter = 'a';
  int i;

  for (i = 0; i < SIZE; i++)
  {
    lowercase[i] = letter;
    letter++;
  }

  for (i = 0; i < SIZE; i++)
    printf("%c\n", lowercase[i]);

  return 0;
}