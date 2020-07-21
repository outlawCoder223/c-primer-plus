#include <stdio.h>
void to_base_n(unsigned long n, int base);

int main(void)
{
  unsigned long number;
  int base;
  printf("Enter an integer and a base (q to quit):\n");
  while (scanf("%lu %d", &number, &base) == 2)
  {
    printf("Base %d equivalent: ", base);
    to_base_n(number, base);
    putchar('\n');
    printf("Enter an integer and a base (q to quit):\n");
  }
  printf("Done.\n");

  return 0;
}

void to_base_n(unsigned long n, int base)
{
  int r;
  r = n % base;
  if (n >= base)
    to_base_n(n / base, base);
  printf("%c", r + 48);

  return;
}