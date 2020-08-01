// manydice.c -- multiple dice rolls
// compile with diceroll.c
#include <stdio.h>
#include <stdlib.h>   // for library srand()
#include <time.h>     // for time()
#include "diceroll.h" // for roll_n_dice() and roll_count

int main(void)
{
  int dice, roll, sets, sides, status;
  int *results;

  srand((unsigned int)time(0)); // randomize seed
  printf("Enter the number of sets; enter q to stop: ");
  while (scanf("%d", &sets) == 1)
  {
    printf("How many sides and how many dice? ");
    scanf("%d %d", &sides, &dice);
    printf("Here are %d sets of %d %d-sided throws:\n", sets, dice, sides);
    results = (int *)malloc(sets * sizeof(int));
    for (int i = 0; i < sets; i++)
    {
      results[i] = roll_n_dice(dice, sides);
      printf("%d ", results[i]);
    }
    printf("\nEnter the number of sets; enter q to stop: ");
    free(results);
  }
  printf("The rollem() function was called %d times.\n", roll_count); // use extern variable
  printf("GOOD FORTUNE TO YOU!\n");
  return 0;
}
