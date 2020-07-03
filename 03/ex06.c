#include <stdio.h>

int main()
{
  long double molecule = 3.0e-23;
  long double total_molecules;
  float water_volume;
  float water_mass;

  printf("Enter an amount of water in quarts:\n");
  scanf("%f", &water_volume);
  water_mass = water_volume * 950;
  total_molecules = water_mass / molecule;
  printf("There are %.4Le molecules in %.2f quarts of water.\n", total_molecules, water_volume);
  return 0;
}