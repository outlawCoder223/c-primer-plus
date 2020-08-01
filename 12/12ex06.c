#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateNums(int nums[], int n);

int main(void)
{
  int nums[10][10];
  int i, j;
  for (i = 0; i < 10; i++)
    generateNums(nums[i], 10);
  for (i = 0; i < 10; i++)
    for (j = 0; j < 10; j++)
      printf("In pass %d, %d appeared %d times\n", i + 1, j + 1, nums[i][j]);
  return 0;
}

void generateNums(int nums[], int n)
{
  srand(time(NULL));
  int i, curr;
  for (i = 0; i < 10; i++)
    nums[i] = 0;
  for (i = 0; i < 1000; i++)
  {
    curr = rand() % 10;
    nums[curr]++;
  }
}