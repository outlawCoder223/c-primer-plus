# Review Questions Chapter 9

1.

- an argument is what gets passed to a function when it is called. A parameter is the definition of the argument in the function definition.

2.

- a. `void donut(int);`
- b. `int gear(int a, int b);`
- c. `int guess(void);`
- d. `void stuff_it(double a, double *b);`

3.

- a. `char n_to_char(int a);`
- b. `int digits(double a, int b);`
- c. `double * which(double *a, double *b);`
- d. `int random(void);`

4.

```c
int sum(int a, int b)
{
  return a + b;
}
```

5.

- change the parameter and function type to `double`

6.

```c
void alter(int *x, int *y)
{
  int temp;
  temp = *x + *y;
  *y = *x - *y;
  *x = temp;
}
```

7.

- num is declared wrong. It should be `int num` as a parameter. Also the for loop is wrong-- should be count++

8.

```c
int largest(int x, int y, int z)
{
  int large;

  if (x > y && x > z)
    large = x;
  else if (y > x && y > z)
    large = y;
  else
    large = z;

  return large;
}
```

A better solution:

```c
int largest(int x, int y, int z)
{
  int large = x;

  if (y > large)
    large = y;
  if (z > large)
    large = z;

  return large;
}
```
