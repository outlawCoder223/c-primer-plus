// manybook.c -- multiple book inventory
#include <stdio.h>
#include <string.h>
char *s_gets(char *st, int n);
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100 // max num of books

struct book
{
  char title[MAXTITL];
  char author[MAXAUTL];
  float value;
};

void alphabetize(struct book library[], int n);
void sortPrice(struct book library[], int n);

int main(void)
{
  struct book library[MAXBKS]; // array of book structures
  int count = 0;
  int index;

  printf("Please enter the book title.\n");
  printf("Press [enter] at the start of a line to stop.\n");
  while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
  {
    printf("Now enter the author.\n");
    s_gets(library[count].author, MAXAUTL);
    printf("Now enter the value.\n");
    scanf("%f", &library[count++].value);
    while (getchar() != '\n')
      continue;
    if (count < MAXBKS)
      printf("Enter the next title.\n");
  }

  if (count > 0)
  {
    printf("Here is the list of your books in order entered:\n");
    for (index = 0; index < count; index++)
      printf("%s by %s: $%.2f\n", library[index].title,
             library[index].author, library[index].value);
    printf("Here is the list of your books in alphabetical order:\n\n");
    alphabetize(library, count);
    for (index = 0; index < count; index++)
      printf("%s by %s: $%.2f\n", library[index].title,
             library[index].author, library[index].value);
    printf("Here is the list of your books in order of increased value:\n\n");
    sortPrice(library, count);
    for (index = 0; index < count; index++)
      printf("%s by %s: $%.2f\n", library[index].title,
             library[index].author, library[index].value);
  }
  else
    printf("No books? Too bad.\n");

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

void alphabetize(struct book library[], int n)
{
  int i, j;
  struct book temp;
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
    {
      if (strcmp(library[i].title, library[j].title) < 0)
      {
        temp = library[i];
        library[i] = library[j];
        library[j] = temp;
      }
    }
}

void sortPrice(struct book library[], int n)
{
  int i, j;
  struct book temp;
  for (i = 0; i < n; i++)
    for (j = 0; j < n - 1; j++)
    {
      if (library[i].value < library[j].value)
      {
        temp = library[i];
        library[i] = library[j];
        library[j] = temp;
      }
    }
}