// lethead2.c
#include <stdio.h>
#include <string.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch, int num);

int main(void)
{
  int spaces;

  show_n_char('*', WIDTH); // using constants as arguments
  putchar('\n');
  show_n_char(SPACE, 12); // using constants as arguments
  printf("%s\n", NAME);
  // let the program calculate how many spaces to skip
  spaces = (WIDTH - strlen(ADDRESS)) / 2;
  show_n_char(SPACE, spaces); // use a variable as an argument
  printf("%s\n", ADDRESS);
  show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2); // expression as argument
  printf("%s\n", PLACE);
  show_n_char('*', WIDTH);
  putchar('\n');

  return 0;
}

void show_n_char(char ch, int num)
{
  int count;

  for (count = 1; count <= num; count++)
    putchar(ch);
}