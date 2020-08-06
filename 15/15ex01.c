#include <stdio.h>
#include <string.h>

int bstoi(char *pbin);
int basetwo(int n);

int main(void)
{
  char bs[9];
  int ans;
  printf("Enter a binary string (8bits):\n");
  scanf("%s", bs);
  ans = bstoi(bs);
  printf("%s is %d in decimal form.\n", bs, ans);
  return 0;
}

int bstoi(char *pbin)
{
  int ret_val = 0, i, j;

  for (i = strlen(pbin) - 1, j = 0; i >= 0; i--, j++)
    if (pbin[i] == '1')
      ret_val += basetwo(j);

  return ret_val;
}

int basetwo(int n)
{
  int total = 1;
  if (n == 0)
    return 1;
  for (int i = 0; i < n; i++)
    total *= 2;

  return total;
}