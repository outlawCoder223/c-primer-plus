#include <stdio.h>
#include <string.h>
#include <ctype.h>

int daysUpTo(char month[]);
void ToUpper(char *);
void flush(void);

struct month
{
  char name[10];
  char abbrv[4];
  int days;
  int num;
};

struct month months[12] = {
    {"JANUARY", "JAN", 31, 1},
    {"FEBRUARY", "FEB", 28, 2},
    {"MARCH", "MAR", 31, 3},
    {"APRIL", "APR", 30, 4},
    {"MAY", "MAY", 31, 5},
    {"JUNE", "JUN", 30, 6},
    {"JULY", "JUL", 31, 7},
    {"AUGUST", "AUG", 31, 8},
    {"SEPTEMBER", "SEP", 30, 9},
    {"OCTOBER", "OCT", 31, 10},
    {"NOVEMBER", "NOV", 30, 11},
    {"DECEMBER", "DEC", 31, 12}};

int main(void)
{
  char month[10];
  char ch;
  int day;
  while (ch != 'n')
  {
    printf("What month is it?\n");
    scanf("%s", month);
    ToUpper(month);
    printf("What day is it?\n");
    scanf("%d", &day);
    flush();
    day += daysUpTo(month);
    printf("%d days have passed since Jan 1st\n", day);
    printf("Enter another date? (y/n)\n");
    ch = getchar();
    flush();
  }
  return 0;
}

int daysUpTo(char month[])
{
  int total = 0;
  for (int i = 0; i < 12; i++)
  {
    if (strcmp(months[i].name, month) == 0)
      break;
    else
      total += months[i].days;
  }

  return total;
}

void flush(void)
{
  while (getchar() != '\n')
    continue;
}

void ToUpper(char *month)
{
  for (int i = 0; i < strlen(month); i++)
    month[i] = toupper(month[i]);
}