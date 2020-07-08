#include <stdio.h>
double cubed(double n);
int main(void)
{
  double num, answer;
  printf("Enter a number to be cubed:\n");
  scanf("%lf", &num);
  answer = cubed(num);
  printf("The answer is %.2f\n", answer);
  return 0;
}

double cubed(double n)
{
  return n * n * n;
}