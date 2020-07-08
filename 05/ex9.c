#include <stdio.h>
void Temperatures(double temp);

int main(void)
{
  double temp;
  int next;
  printf("Enter a temperature in degrees Fauhrenheit: ");
  next = scanf("%lf", &temp);
  while (next == 1)
  {
    Temperatures(temp);
    printf("Enter another number (q to quit): ");
    next = scanf("%lf", &temp);
  }
  printf("Done\n");
  return 0;
}

void Temperatures(double temp)
{
  const double celsius = 5.0 / 9.0 * (temp - 32.0);
  const double kelvin = celsius + 273.16;
  printf("%.2f Fahrenheit is:\n", temp);
  printf("%.2f Celsius\n", celsius);
  printf("%.2f Kelvin\n", kelvin);
}