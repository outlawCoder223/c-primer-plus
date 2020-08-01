// compile w/ 12ex03b.c
#include <stdio.h>
#include "12ex03.h"
int main(void)
{
  int mode, prev_mode;
  float dist, fuel;

  printf("Enter 0 for metric mode, 1 for US mode: ");
  scanf("%d", &mode);
  while (mode >= 0)
  {
    if (mode > 2)
    {
      invalid(prev_mode);
      mode = prev_mode;
    }
    dist = get_dist(mode);
    fuel = get_fuel(mode);
    show_info(mode, dist, fuel);
    prev_mode = mode;
    printf("Enter 0 for metric mode, 1 for US mode");
    printf(" (-1 to quit): ");
    scanf("%d", &mode);
  }
  printf("Done.\n");
  return 0;
}