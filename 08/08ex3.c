#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char ch;
  int upper = 0;
  int lower = 0;
  int other = 0;

  while ((ch = getchar()) != EOF)
  {
    if (isupper(ch))
      upper++;
    else if (islower(ch))
      lower++;
    else
      other++;
  }
  printf("*********** Summary ***********\n");
  printf("Uppercase Characters: %d\n", upper);
  printf("Lowercase Characters: %d\n", lower);
  printf("Other Characters: %d\n", other);

  return 0;
}