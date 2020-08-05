#include <stdio.h>
#include <string.h>

struct name
{
  char fname[41];
  char mname[41];
  char lname[81];
};

struct person
{
  char sin[10];
  struct name fullname;
};

void printInfo(struct person);
char *s_gets(char *st, int n);

int main(void)
{
  struct person me;
  printf("Enter your first name:\n");
  s_gets(me.fullname.fname, 41);
  printf("Enter your middle name:\n");
  s_gets(me.fullname.mname, 41);
  printf("Enter your last name:\n");
  s_gets(me.fullname.lname, 81);
  printf("Enter your SIN\n");
  scanf("%s", me.sin);
  printf("You have entered the following information:\n");
  printInfo(me);

  return 0;
}

void printInfo(struct person me)
{
  printf("%s, %s", me.fullname.lname, me.fullname.fname);
  if (me.fullname.mname[0] == '\n')
    printf(" %c.", me.fullname.mname[0]);
  printf(" -- %s\n", me.sin);
}

char *s_gets(char *st, int n)
{
  char *ret_val;
  char *find;

  ret_val = fgets(st, n, stdin);
  if (ret_val)
  {
    find = strchr(st, '\n');
    if (find)
      *find = '\0';
    else
      while (getchar() != '\n')
        continue;
  }
  return ret_val;
}