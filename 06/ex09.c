#include <stdio.h>
double calculate(double n1, double n2);

int main(void)
{
  double num1, num2, result;
  printf("Enter two floating point numbers (q to quit): ");
  while (scanf("%lf%lf", &num1, &num2) == 2)
  {
    result = calculate(num1, num2);
    printf("The result is : %f\n", result);
    printf("Enter 2 more numbers or q to quit: ");
  }
  printf("Done\n");

  return 0;
}

double calculate(double n1, double n2)
{
  return (n1 - n2) / (n1 * n2);
}