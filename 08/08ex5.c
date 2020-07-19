#include <stdio.h>
int main(void)
{
  int low = 0;
  int high = 100;
  int middle = (high - low) / 2;
  char response;

  printf("Pick an integer from 1 to 100. I will try to guess ");
  printf("it.\nRespond with an 'h' if my guess is high and with");
  printf("\nan 'l' if it is low. Respond with 'y' if I guess\n");
  printf("it correctly.\n");
  printf("Uh...is your number %d?\n", middle);
  while ((response = getchar()) != 'y') // get response compare to y
  {
    if (response == 'l')
    {
      low = middle;
      middle += (high - low) / 2;
      printf("Well, then, is it %d?\n", middle);
    }
    else if (response == 'h')
    {
      high = middle;
      middle -= (high - low) / 2;
      printf("Well, then, is it %d?\n", middle);
    }
    else
      printf("Sorry, I understand only y or n.\n");
    while (getchar() != '\n')
      continue;
  }
  printf("I knew I could do it!\n");

  return 0;
}