#include <stdio.h>
#include <string.h>
#include <limits.h>
int findOnBits(char *bs);
char *itobs(int n, char *ps);

int main(void)
{
  char bs[CHAR_BIT * sizeof(int) + 1];
  int num, onbits;
  printf("Enter a binary number (8bit): ");
  scanf("%d", &num);
  itobs(num, bs);
  onbits = findOnBits(bs);
  printf("There were %d bits on.\n", onbits);
  return 0;
}

int findOnBits(char *bs)
{
  int count = 0, i;
  for (i = 0; i < strlen(bs); i++)
    if (bs[i] == '1')
      count++;
  return count;
}

char *itobs(int n, char *ps)
{
  int i;
  const static int size = CHAR_BIT * sizeof(int);

  for (i = size - 1; i >= 0; i--, n >>= 1)
    ps[i] = (01 & n) + '0';
  ps[size] = '\0';

  return ps;
}