#include <stdio.h>
#include <ctype.h>

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
float get_num(void);
char get_choice(void);
char get_first(void);

int main(void)
{
  float a, b, result;
  char choice;

  while ((choice = get_choice()) != 'q')
  {
    printf("Enter the first number: ");
    a = get_num();
    printf("Enter the second number: ");
    b = get_num();
    switch (choice)
    {
    case 'a':
      result = add(a, b);
      printf("%.2f + %.2f = %.2f\n", a, b, result);
      break;
    case 'b':
      result = subtract(a, b);
      printf("%.2f - %.2f = %.2f\n", a, b, result);
      break;
    case 'c':
      result = multiply(a, b);
      printf("%.2f * %.2f = %.2f\n", a, b, result);
      break;
    case 'd':
      while (b == 0)
      {
        printf("Cannot divide by 0, enter a valid number: ");
        b = get_num();
      }
      result = divide(a, b);
      printf("%.2f / %.2f = %.2f\n", a, b, result);
      break;
    default:
      printf("Program error!\n");
      break;
    }
  }
  printf("Bye.\n");

  return 0;
}

char get_choice(void)
{
  int ch;

  printf("Enter the letter of your choice:\n");
  printf("a. add                b. subtract\n");
  printf("c. multiply           d. divide\n");
  printf("q. quit\n");
  ch = get_first();
  while ((ch < 'a' || ch > 'd') && ch != 'q')
  {
    printf("Please respond with a, b, c, d, or q.\n");
    ch = get_first();
  }

  return ch;
}

float get_num(void)
{
  float n;
  while (1)
  {
    if (scanf("%f", &n) == 1)
    {
      break;
    }
    while (getchar() != '\n')
      continue;
  }
  while (getchar() != '\n')
    continue;
  return n;
}

char get_first(void)
{
  int ch;

  ch = getchar();
  while (isspace(ch))
    ch = getchar();
  while (getchar() != '\n')
    continue;

  return ch;
}

float add(float a, float b)
{
  return a + b;
}

float subtract(float a, float b)
{
  return a - b;
}

float multiply(float a, float b)
{
  return a * b;
}

float divide(float a, float b)
{
  return a / b;
}