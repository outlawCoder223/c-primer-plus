# Chapter 14 Review Questions

1.

- missing semicolon on `*togs` and also at the end of the definition. `Structure` should be `struct` and need a tag.

2.

```c
6 1
22 Spiffo Road
S p
```

3.

```c
struct month {
  char name[10];
  char abbr[4];
  int numdays;
  int monthnum;
};
```

4.

5.

```c
int daysUpTo(int month)
{
  int total += 0;

  for (int i = 1; i <= month; i++)
    total += months[i].numdays;

  return total;
}
```

6.

a.

```c
LENS favorites[10]
favorites[2].foclen = 500;
favorites[2].fstop = 2.0;
favorites[2].brand = "Remarkatar";
```

b.

```c
LENS favorites[10] = {[2] = {500, 2.0, "Remarkatar"}}
```

7.

- a.

```c
6
Arcturan
cturan
```

- b. `6`, `deb.title.last` or `pb->title.last`

- c.

```c
void print(const struct bem *pbem)
{
  printf("%s %s is a %d-limbed %s.\n", pbem->title.first, pbem->title.last, pbem->limbs, pbem->type);
}
```

8.

- a. `willie.born`
- b. `pt->born`
- c. `scanf("%d", &willie.born);`
- d. `scanf("%d", &pt->born);`
- e. `scanf("%s", &willie.name.lname);`
- f. `scanf("%s", %pt->name.lname);`
- g. `willie.name.fname[2]`
- h. `strlen(willie.name.fname) + strlen(willie.name.lname);`

9.

```c
struct car {
  char name[81];
  float hp;
  float MPG;
  float wheelbase;
  int year;
};
```

10.

- a.

```c
struct gas calcmpg(struct gas info)
{
  if (info.gals > 0)
    info.mpg = info.distance / info gals;

  return info;
}
```

- b.

```c
void calcmpg(struct gas *info)
{
  if (info->gals != 0)
    info->mpg = info->distance / info->gals
}
```

11.

```c
enum choices {no, yes, maybe};
```

12.

```c
char *(*func)(char *a, char b);
```

13.

```c
double func1(double a, double b);
double func2(double a, double b);
double func3(double a, double b);
double func4(double a, double b);

double (*funcs[4])(double, double) = {&func1, &func2, &func3, &func4};

funcs[1](12.3, 45.6);
*func[1](12.3, 45.6);
```
