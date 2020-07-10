#include <stdio.h>
int main(void)
{
  float five_percent = 0.05;
  float ten_percent = 0.1;
  float daphne = 100.0;
  float deirdre = 100.0;
  int count = 1;

  while (daphne >= deirdre)
  {
    daphne += 10.0;
    deirdre += deirdre * five_percent;
    printf("Year %d results\n", count);
    printf("Daphne: %.2f\n", daphne);
    printf("Deirdre: %.2f\n", deirdre);
    count++;
  }

  return 0;
}