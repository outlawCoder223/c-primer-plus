#include <stdio.h>
#include <string.h>

int checkbit(char *bs, int n);

int main(void)
{
  char bs[9];
  int n;
  printf("Enter a binary number (8bit): ");
  scanf("%s", bs);
  printf("Which bit do you want to check? ");
  scanf("%d", &n);
  if (checkbit(bs, n))
    printf("That bit is on.\n");
  else
    printf("That bit is off.\n");
  return 0;
}

int checkbit(char *bs, int n)
{
  if (bs[strlen(bs) - n] == '1')
    return 1;
  else
    return 0;
}