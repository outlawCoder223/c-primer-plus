#include <stdio.h>
int main(void)
{
  char input[255];
  int i;

  for (i = 0; i < 255; i++)
  {
    printf("%c", input[i]);
  }
  printf("\n");
  return 0;
}