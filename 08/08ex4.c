#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(void)
{
  char curr;
  char prev = '\n';
  float sum = 0.0;
  float words = 0.0;
  bool inword = false;

  while ((curr = getchar()) != EOF)
  {
    if (isspace(prev) && isspace(curr))
    {
      prev = curr;
      continue;
    }
    else if (isspace(prev) && !isspace(curr))
    {
      inword = true;
      prev = curr;
      sum++;
    }
    else if (!isspace(prev) && isspace(curr))
    {
      inword = false;
      prev = curr;
      words++;
    }
    else
    {
      if (ispunct(curr))
        continue;
      else
      {
        prev = curr;
        sum++;
      }
    }
  }
  printf("Average letters / word: %.2f\n", sum / words);

  return 0;
}