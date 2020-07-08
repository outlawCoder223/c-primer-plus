#include <stdio.h>
int main(void)
{
  int first, second, answer;
  printf("This program computes moduli.\n");
  printf("Enter an integer to serve as the second operand: ");
  scanf("%d", &second);
  printf("Now enter the first operand: ");
  scanf("%d", &first);
  while (first > 0)
  {
    answer = first % second;
    printf("%d %% %d is %d\n", first, second, answer);
    printf("Enter the next number for first operand (<= 0 to quit): ");
    scanf("%d", &first);
  }
  printf("Done\n");

  return 0;
}