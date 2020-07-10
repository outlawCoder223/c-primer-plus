#include <stdio.h>
int main(void)
{
  double num1, num2, result;
  printf("Enter two floating point numbers (q to quit): ");
  while (scanf("%lf%lf", &num1, &num2) == 2)
  {
    result = (num1 - num2) / (num1 * num2);
    printf("The result is : %f\n", result);
    printf("Enter 2 more numbers or q to quit: ");
  }
  printf("Done\n");

  return 0;
}