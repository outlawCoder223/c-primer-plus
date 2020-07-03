#include <stdio.h>

int main()
{
  float age;
  float seconds;

  printf("Enter your age in years:\n");
  scanf("%f", &age);
  seconds = age * 3.156e7;
  printf("Your age %.1f in seconds is... %.3e\n", age, seconds);
  return 0;
}