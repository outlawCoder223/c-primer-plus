#include <stdio.h>
int main(void)
{
  char first[40];

  printf("Enter your first name:\n");
  scanf("%s", first);
  printf("\"%s\"\n", first);
  printf("\"%20s\"\n", first);
  printf("\"%-20s\"\n", first);

  return 0;
}