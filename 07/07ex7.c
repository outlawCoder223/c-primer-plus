#include <stdio.h>
#define PAY_RATE 10   // $10/hour
#define OVERTIME 1.5  // in access of 40 hrs = time and a half
#define TAX_RATE1 .15 // first $300
#define TAX_RATE2 .2  // next $150
#define TAX_RATE3 .25 // rest

int main(void)
{
  float hours, gross, regtime, overtime, taxes, net, sum;
  int tax_rate = 1;

  printf("Enter the hours worked this week: \n");
  scanf("%f", &hours);
  if (hours > 40.0)
  {
    regtime = 40.0 * PAY_RATE;
    overtime = (hours - 40.0) * PAY_RATE * OVERTIME;
  }
  else
  {
    regtime = hours * PAY_RATE;
    overtime = 0;
  }

  gross = overtime > 0 ? regtime + overtime : regtime;
  sum = gross;

  while (sum > 0)
  {
    switch (tax_rate)
    {
    case 1:
      taxes = sum > 300 ? 300 * TAX_RATE1 : sum * TAX_RATE1;
      sum -= 300;
      tax_rate++;
      break;
    case 2:
      taxes += sum > 150 ? 150 * TAX_RATE2 : sum * TAX_RATE2;
      sum -= 150;
      tax_rate++;
      break;
    case 3:
      taxes += sum * TAX_RATE3;
      sum -= sum;
      break;
    }
  }
  net = gross - taxes;
  printf("Summary of calculations:\n");
  printf("Gross: %.2f\nTaxes: %.2f\nNet: %.2f\n", gross, taxes, net);

  return 0;
}