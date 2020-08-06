#include <stdio.h>
#include <string.h>

void notbs(char *bs);
void andbs(char *bs1, char *bs2);
void orbs(char *bs1, char *bs2);
void xorbs(char *bs1, char *bs2);

int main(int argc, char *argv[])
{
  int ans;
  notbs(argv[1]);
  notbs(argv[2]);
  andbs(argv[1], argv[2]);
  orbs(argv[1], argv[2]);
  xorbs(argv[1], argv[2]);
  return 0;
}

void notbs(char *bs)
{
  for (int i = 0; i < strlen(bs); i++)
  {
    if (bs[i] == '1')
      putchar('0');
    else
      putchar('1');
  }
  putchar('\n');
}

void andbs(char *bs1, char *bs2)
{
  for (int i = 0; i < strlen(bs1); i++)
    if (bs1[i] == '1' && bs2[i] == '1')
      putchar('1');
    else
      putchar('0');
  putchar('\n');
}

void orbs(char *bs1, char *bs2)
{
  for (int i = 0; i < strlen(bs1); i++)
    if (bs1[i] == '1' || bs2[i] == '1')
      putchar('1');
    else
      putchar('0');
  putchar('\n');
}

void xorbs(char *bs1, char *bs2)
{
  for (int i = 0; i < strlen(bs1); i++)
    if (bs1[i] == '1' && bs2[i] == '1')
      putchar('0');
    else if (bs1[i] == '1' || bs2[i] == '1')
      putchar('1');
    else
      putchar('0');
  putchar('\n');
}