#include <stdio.h>
#include <string.h>
#define NAMELEN 81
#define CSIZE 4
#define GSIZE 3

struct name
{
  char fname[NAMELEN];
  char lname[NAMELEN];
};

struct student
{
  struct name fullname;
  float grades[GSIZE];
  float avg;
};

char *s_gets(char *st, int n);
int i;
void getName(char *fname, char *lname);
void setGrades(struct student *currStud);
void flush(void);
struct student *findStudent(char *fname, char *lname, struct student *class);
float calcStudAvg(struct student *currStud);
float calcClassAvg(struct student class[]);
void printClass(struct student class[], float avg);
void printStudent(struct student *currStud);

int main(void)
{
  struct student class[CSIZE] = {
      {{"Hermione", "Granger"}},
      {{"Ronald", "Weasley"}},
      {{"Neville", "Longbottom"}},
      {{"Severus", "Snape"}}};

  int i;
  float classAvg;
  char currFirst[NAMELEN], currLast[NAMELEN];
  char ch;
  struct student *currStud;
  printClass(class, classAvg);
  while (ch != 'n')
  {
    getName(currFirst, currLast);
    currStud = findStudent(currFirst, currLast, class);
    setGrades(currStud);
    calcStudAvg(currStud);
    classAvg = calcClassAvg(class);
    printClass(class, classAvg);
    printf("Enter more grades? (y/n) ");
    ch = getchar();
    flush();
  }
  return 0;
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

void getName(char *fname, char *lname)
{
  printf("Enter a student's first name:\n");
  s_gets(fname, NAMELEN);
  printf("Enter the student's last name:\n");
  s_gets(lname, NAMELEN);
}

void setGrades(struct student *currStud)
{
  printf("Enter %d grades for the student:\n", GSIZE);
  for (int i = 0; i < GSIZE; i++)
    scanf("%f", &currStud->grades[i]);
  flush();
}

void flush(void)
{
  while (getchar() != '\n')
    continue;
}

struct student *findStudent(char *fname, char *lname, struct student class[])
{
  for (int i = 0; i < CSIZE; i++)
  {
    if (strcmp(class[i].fullname.fname, fname) == 0 &&
        strcmp(class[i].fullname.lname, lname) == 0)
    {
      return &class[i];
    }
  }
  return NULL;
}

float calcStudAvg(struct student *currStud)
{
  float avg, total = 0.0;
  for (int i = 0; i < GSIZE; i++)
    total += currStud->grades[i];
  avg = total / GSIZE;
  currStud->avg = avg;
  return avg;
}

float calcClassAvg(struct student class[])
{
  float total = 0.0;
  for (int i = 0; i < CSIZE; i++)
    total += class[i].avg;
  return total / CSIZE;
}

void printClass(struct student class[], float avg)
{
  printf("\n");
  for (int i = 0; i < CSIZE; i++)
    printStudent(&class[i]);
  printf("Class Average: %.1f\n", avg);
}

void printStudent(struct student *currStud)
{
  printf("%s, %s:\n", currStud->fullname.lname, currStud->fullname.fname);

  for (i = 0; i < GSIZE; i++)
    printf("%.1f ", currStud->grades[i]);
  printf("\nStudent Average: %.1f\n", currStud->avg);
  printf("-------------------------\n");
}