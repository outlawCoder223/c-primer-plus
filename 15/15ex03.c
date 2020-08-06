#include <stdio.h>
#include <string.h>
int findOnBits(char *bs);

int main(void)
{
  char bs[9];
  int onbits;
  printf("Enter a binary number (8bit): ");
  scanf("%s", bs);
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