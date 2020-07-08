// addemup.c -- five kinds of statements
#include <stdio.h>
int main(void) // finds sum of first 20 integers
{
  int count, sum, count_to; // declaration statement

  count = 0; // assignment statement
  sum = 0;   // ditto
  printf("Enter a number to sum to:\n");
  scanf("%d", &count_to);
  while (count++ < count_to) // while
  {
    sum = sum + count; // statement
  }
  printf("sum = %d\n", sum); // function statement

  return 0; // return statement
}