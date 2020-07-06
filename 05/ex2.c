#include <stdio.h>
int main(void)
{
  int count = 0;
  int num;
  printf("Enter a number:\n");
  scanf("%d", &num);
  while (count <= num + 10)
  {
    printf("%d\n", count);
    count++;
  }
  printf("All done!\n");
  return 0;
}