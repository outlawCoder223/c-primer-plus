# Chapter 15 Review Questions

1.

- a. 0011

- b. 1101

- c. 0011 1011

- d. 0111 0111

2.

- a. dec -> 21, octal -> 025, hex -> 0x15
- b. dec -> 85, octal -> 0125, hex -> 0x55
- c. dec -> 76, octal -> 0114, hex -> 0x4c
- c. dec -> 157, octal -> 0235, hex -> 0x9d

3.

- a. 1111 1100 -> 252
- b. 0000 0010 -> 2
- c. 0000 0111 -> 7
- d. 0000 0111 -> 7
- e. 0000 0101 -> 5
- f. 0000 0011 -> 3
- g. 0001 1100 -> 28

4.

- a. 1111 1111 -> 255
- b. true
- c. 0000 -> 0
- d. true
- e. 0111 -> 6
- f. true
- g. 0010 1000 -> 40

5. bin -> 0111 1111, dec -> 117, oct -> 0177, hex -> 0x7f

6. `*= 2` is the same as `<<= 1`. However `|=` is not the same as `+=`. They only work the same if there are no bits in common.

7.

a.

```c
struct tinkerbell {
  unsigned int floppy : 2;
  unsigned int : 1;
  unsigned int cd : 2;
  unsigned int : 1;
  unsigned int hd : 2;
};
```

b.

```c
struct klinkerbell {
  unsigned int hd : 2;
  unsigned int : 1;
  unsigned int cd : 2;
  unsigned int : 1;
  unsigned int floppy: 2;
};
```
