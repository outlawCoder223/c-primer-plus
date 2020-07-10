#include <stdio.h>
int main(void)
{
  int ints[8], i;
  printf("Enter 8 integers to read into the array: ");
  for (i = 0; i < 8; i++)
  {
    scanf("%d", &ints[i]);
  }
  printf("\n");
  for (i = 7; i >= 0; i--)
  {
    printf("%d\n", ints[i]);
  }
  printf("Done\n");
  return 0;
}