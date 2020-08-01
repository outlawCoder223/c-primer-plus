#include <stdio.h>
int callme(void);
int main(void)
{
  char ch;
  int called;
  printf("Do you want to call me? (y/n)\n");

  while ((ch = getchar()) != 'n')
  {
    while ((ch = getchar()) != '\n')
      continue;

    called = callme();
    printf("Call me again? (y/n)\n");
  }
  printf("You called me %d times.\n", called);
  return 0;
}

int callme(void)
{
  static int c = 0;
  c++;
  return c;
}