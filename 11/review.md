#Chapter 11 Review Questions

1.

- no null char makes it just an array of chars

2.

```c
"See you at the snack bar."
"ee you at the snack bar."
"See you"
"e you at the snack bar."
```

3.

```c
"y"
"my"
"mmy"
"ummy"
"Yummy"
```

4.

```c
"I read part of it all the way through."
```

5.

- a. Ho Ho Ho!!oH oH oH

- b. `char *`

- c. Pointer to first H

- d. `*--pc` means decrament `pc` then get the value there. `--*pc` means decrament the value at pc

- e. `Ho Ho Ho!!oH oH o`

- f. the first loop looks for the `NULL`. Second loop tests if the addresses = 0.

- g. would cause the second loop to run forever

- h. needs a definition

6.

- 1 bytes for '$', 2 bytes for "$"

7.

```c
How are ya, sweetie? How are ya, sweetie?
Beat the clock.
eat the clock.
Beat the clock. Win a toy.
Beat
chat
hat
at
t
t
at
How are ya, sweetie?
```

8.

```c
faavrhee

*le*on*sm
```

9.

```c
char *s_gets(char *st, int n)
{
  char *ret_val;
  char *find;

  ret_val = fgets(st, n, stdin);
  if (ret_val)
  {
    while (*st != '\n' && *st != '\0')
      i++;
    if (*st == '\n')
      *st = '\0';
    else
      while (getchar() != '\n')
        continue;
  }

  return ret_val;
}
```

10.

```c
int strlen(char *ch)
{
  int count = 0;
  while (*ch++)
    count++
  return count;
}
```

11.

```c
char *s_gets(char *st, int n)
{
  char *ret_val;
  char *find;

  ret_val = fgets(st, n, stdin);
  if (ret_val)
  {
    find = strchr(st, '\n');

    if (find)
      *find = '\0';
    else
      while (getchar() != '\n')
        continue;
  }

  return ret_val;
}
```

12.

```c
char *space(char *ch)
{
  while(*ch)
  {
    if (*ch == ' ')
      return ch;
    ch++
  }
  return NULL;
}
```
