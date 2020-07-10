#include <stdio.h>
int main(void)
{
  int start, end, rows;
  long square, cube;
  printf("Enter a starting and ending integer: ");
  scanf("%d%d", &start, &end);
  for (start; start <= end; start++)
  {
    square = start * start;
    cube = square * start;
    printf("%5d | %5ld | %5ld\n", start, square, cube);
  }
  return 0;
}