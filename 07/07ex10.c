#include <stdio.h>
#include <stdbool.h>
#define FIRST_TAX_RATE .15
#define EXCESS_TAX_RATE .28
#define LIMIT1 17850.00
#define LIMIT2 23900.00
#define LIMIT3 29750.00
#define LIMIT4 14875.00

float calculateTax(float income, float limit);

int main(void)
{
  int selection;
  float income, taxes, net;
  bool run = true;
  bool error = false;

  while (run)
  {
    printf("*****************************************\n");
    printf("1) Single            2) Head of Household\n");
    printf("3) Married, Joint    4) Married, Separate\n");
    printf("5) quit\n");
    printf("*****************************************\n");
    printf("Enter Category: ");
    scanf("%d", &selection);
    switch (selection)
    {
    case 1:
      printf("Enter your taxable income for the year: ");
      scanf("%f", &income);
      taxes = calculateTax(income, LIMIT1);
      net = income - taxes;
      break;
    case 2:
      printf("Enter your taxable income for the year: ");
      scanf("%f", &income);
      taxes = calculateTax(income, LIMIT2);
      net = income - taxes;
      break;
    case 3:
      printf("Enter your taxable income for the year: ");
      scanf("%f", &income);
      taxes = calculateTax(income, LIMIT3);
      net = income - taxes;
      break;
    case 4:
      printf("Enter your taxable income for the year: ");
      scanf("%f", &income);
      taxes = calculateTax(income, LIMIT4);
      net = income - taxes;
      break;
    case 5:
      run = false;
      break;
    default:
      printf("Enter a valid selection\n");
      error = true;
      break;
    }
    if (error)
      continue;
    if (!run)
      break;
    printf("Taxes owed: %.2f\nNet income: %.2f\n", taxes, net);
    printf("Enter another selection:\n");
  }
  printf("Bye\n");
  return 0;
}

float calculateTax(float income, float limit)
{
  float first = income > limit ? limit : income;
  float excess = income - limit;
  float firstTax = first * FIRST_TAX_RATE;
  float excessTax = excess * EXCESS_TAX_RATE;
  return firstTax + excessTax;
}
