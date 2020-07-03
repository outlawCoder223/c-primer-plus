#include <stdio.h>

int main() 
{
  int ch;

  printf("Please enter a character code:\n");
  scanf("%d", &ch);
  printf("The code for %d is %c.\n", ch, ch);

  return 0;
}