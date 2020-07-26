# Chapter 10 Review Questions

1.

```c
8 8
4 4
0 0
2 2
```

2.

- 4

3.

- `ref` is the address of the first element. `ref + 1` is the second element. `++ref` in invalid.

4.

- a. `*ptr` = 12, `*(ptr + 2)` = 16

- b. `*ptr` = 12, `*(ptr + 2)` = 14

5.

- a. `**ptr` = 12, `**(ptr + 2)` = 16

- b. `**ptr` = 12, `**(ptr + 2)` = 14

6.

- a. `&grid[22][56]`

- b. `&grid[22][0]` or `&grid[22]`

- c. `&grid[0][0]` or `&grid[0]` or `(int *) grid`

7.

- a. `int digits[10];`

- b. `floats rates[6];`

- c. `int mat[3][5];`

- d. `char *psa[20];`

-e. `char (*pstr)[20];`

8.

- a. `int arr[6] = {1, 2, 4, 8, 16, 32};`

- b. `arr[2]`

- c. `int arr[100] = {[99] = -1};`

- d. `int arr[100] = {[4] = 101, [9] = 101, 101, 101, [2] = 101};`

9.

- 0 - 9

10.

- a. valid

- b. invalid

- c. invalid

- d. invalid

- e. valid

- f. invalid

- g. invalid

- h. valid

11.

`int arr[800][600];`

12.

- a.

  ```c
  void process(double trots[], int);
  process(trots, 20);
  void process(int n, double trots[n]);
  process(20, trots);
  ```

- b.

  ```c
  void process(short clops[][30], int n);
  process(clops, 10);
  void process(int n, int m, short, clops[n][m]);
  process(10, 30, clops);
  ```

- c.

```c
void shots(long shots[][10][15], int n);
process(shots, 5);
void process(int l, int m, int n, long[l][m][n]);
process(5, 10, 15, shots);
```

13.

- a.

```c
show((double [4]){8, 3, 9, 2}, 4);
```

- b.

```c
show2((double [][3]){{8, 3, 9}, {5, 4, 1}}, 2);
```
