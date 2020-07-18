#include <stdio.h>
#include <stdbool.h>
#define RATE1 8.75    // tier 1 pay-rate
#define RATE2 9.33    // tier 2 pay-rate
#define RATE3 10.00   // tier 3 pay-rate
#define RATE4 11.20   // tier 4 pay-rate
#define OVERTIME 1.5  // in access of 40 hrs = time and a half
#define TAX_RATE1 .15 // first $300
#define TAX_RATE2 .2  // next $150
#define TAX_RATE3 .25 // rest

int main(void)
{
  float hours, gross, regtime, overtime, taxes, net, sum, hourly;
  int selection;
  int tax_rate = 1;
  bool run = true;
  bool error = false;

  while (run)
  {
    printf("******************************************************************\n");
    printf("1) $8.75/hr                    2) 9.33/hr\n");
    printf("3) $10.00/hr                   4) $11.20/hr\n");
    printf("5) quit\n");
    printf("******************************************************************\n");
    scanf("%d", &selection) == 1;
    switch (selection)
    {
    case 1:
      hourly = RATE1;
      break;
    case 2:
      hourly = RATE2;
      break;
    case 3:
      hourly = RATE3;
      break;
    case 4:
      hourly = RATE4;
      break;
    case 5:
      run = false;
      break;
    default:
      printf("Please make a valid choice.\n");
      error = true;
      break;
    }
    if (error)
      continue;
    if (!run)
      break;
    printf("Enter the hours worked this week: \n");
    scanf("%f", &hours);
    if (hours > 40.0)
    {
      regtime = 40.0 * hourly;
      overtime = (hours - 40.0) * hourly * OVERTIME;
    }
    else
    {
      regtime = hours * hourly;
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
    printf("Make another calculation:\n");
  }
  printf("Bye\n");
  return 0;
}