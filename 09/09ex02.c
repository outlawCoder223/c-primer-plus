#include <stdio.h>
void chline(char ch, int i, int j);
int main(void)
{
  char ch;
  int i, j;
  printf("Please enter the character you want repeated "
         "and the columns to print through: ");
  ch = getchar();
  scanf("%d %d", &i, &j);
  chline(ch, i, j);
  return 0;
}

void chline(char ch, int i, int j)
{
  int spaces;
  for (spaces = 1; spaces < i; spaces++)
    printf(" ");

  for (i; i <= j; i++)
    printf("%c", ch);

  printf("\n");
}