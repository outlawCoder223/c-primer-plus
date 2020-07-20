// proto.c -- uses a function prototype
#include <stdio.h>
int imax(int, int); // prototype
int main(void)
{
  printf("The maximum of %d and %d is %d\n", 3, 5, imax(3, 5));
  printf("The maximum of %d and %d is %d\n", 3, 5, imax(3.9, 5.1));

  return 0;
}

int imax(n, m) int n, m;
{
  return (n > m ? n : m);
}