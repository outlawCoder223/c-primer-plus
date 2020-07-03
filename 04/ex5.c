#include <stdio.h>
int main(void)
{
  float Mbs, MB, time;

  printf("Enter your download speed and the file size:\n");
  scanf("%f %f", &Mbs, &MB);
  time = MB / (Mbs / 8);
  printf("At %.2f megabits per second, a file of %.2f megabytes "
         "downloads in %.2f seconds.\n", Mbs, MB, time);

  return 0;
}