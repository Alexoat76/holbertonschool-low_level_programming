# 0x02. C - Functions, nested loops

## Resources
Read or watch :
- [Nested while loops](https://intranet.hbtn.io/rltoken/L0Vf5XJdD7ylLOyQnzVY6Q) 
- [C - Functions](https://intranet.hbtn.io/rltoken/pU9KLKlz0W2ZSSlzJsYA7w) 
- [Learning to Program in C (Part 06)](https://intranet.hbtn.io/rltoken/pu-exPylodWaQjU7f6KhYQ) 
 (stop at 14:00)
- [What is the purpose of a function prototype?](https://intranet.hbtn.io/rltoken/bANgUAj_-F9_85yHxzSD6w) 
- [C - Header Files](https://intranet.hbtn.io/rltoken/xC6XfUoznEIJgfdP52GUIw) 
 (stop before the “Once-Only Headers” paragraph)

## Requirements
### General
- Allowed editors: `vi`, `vim`, `emacs` 
- All your files will be compiled on `Ubuntu 20.04 LTS` using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory.
- Your code should use the `Betty` style. It will be checked using **[betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl)** 
 and **[betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)**
- You are not allowed to use global variables.
- No more than 5 functions per file.
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden.
- You are allowed to use **[_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)** 
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account.
- In the following examples, the `main.c` files are shown as examples. You can use them to test your 
	functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We 
	will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples.
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h` 

## More Info

## Tasks
+ [x] 0\. **_putchar**

+ **[0-putchar.c](./0-putchar.c)**

* Write a program that prints `_putchar`, followed by a new line.
	* The program should return `0`.

```bash
$  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar
$ ./0-putchar 
_putchar
$ 
```
---
 
+ [x] 1\. **I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**

+ **[1-alphabet.c](./1-alphabet.c)**

* Write a function that prints the alphabet, in lowercase, followed by a new line.
	* Prototype: `void print_alphabet(void);` 
	* You can only use `_putchar` twice in the code.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
$ ./1-alphabet 
abcdefghijklmnopqrstuvwxyz
$
```
---
 
+ [x] 2\. **10 x alphabet**

+ **[2-print_alphabet_x10.c](./2-print_alphabet_x10.c)**

* Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
	* Prototype: `void print_alphabet_x10(void);` 
	* You can only use `_putchar` twice in the code.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10
$ ./2-alphabet_x10 
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
$ 
```
---

+ [x] 3\. **islower

+ **[3-islower.c](./3-islower.c)**

* Write a function that checks for lowercase character. 
	* Prototype: `int _islower(int c);` 
	* Returns `1` if `c` is lowercase.
	* Returns `0` otherwise.

FYI: The standard library provides a similar function: `islower`. Run `man islower` to learn more.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-islower.c -o 3-islower
$ ./3-islower 
011
$ 
```
---

+ [x] 4\. **isalpha**

+ **[4-isalpha.c](./4-isalpha.c)**

* Write a function that checks for alphabetic character. 
	* Prototype: `int _isalpha(int c);` 
	* Returns `1` if `c` is a letter, lowercase or uppercase.
	* Returns `0` otherwise.

FYI: The standard library provides a similar function: `isalpha`. Run `man isalpha` to learn more.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-isalpha.c -o 4-isalpha
$ ./4-isalpha 
1110
$ 
```
---

+ [x] 5\. **Sign**

+ **[5-sign.c](./5-sign.c)**

* Write a function that prints the sign of a number.
	* Prototype: `int print_sign(int n);` 
	* Returns `1` and prints `+` if `n` is greater than zero.
	* Returns `0` and prints `0` if `n` is zero.
	* Returns `-1` and prints `-` if `n` is less than zero.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-sign.c -o 5-sign
$ ./5-sign 
+, 1
0, 0
+, 1
-, /
$ 
```
---

+ [x] 6\. **There is no such thing as absolute value in this world. 
	You can only estimate what a thing is worth to you**

+ **[6-abs.c](./6-abs.c)**

* Write a function that computes the absolute value of an integer.
	* Prototype: `int _abs(int);` 

FYI: The standard library provides a similar function: `abs`. Run `man abs` to learn more.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-abs.c -o 6-abs
$ ./6-abs 
1
0
1
98
$ 
```
---

+ [x] 7\. **There are only 3 colors, 10 digits, and 7 notes; 
	it's what we do with them that's important**

+ **[7-print_last_digit.c](./7-print_last_digit.c)**

* Write a function that prints the last digit of a number.
	* Prototype: `int print_last_digit(int);` 
	* Returns the value of the last digit

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_last_digit.c -o 7-last_digit
$ ./7-last_digit 
8044
$ 
```
---
 
+ [x] 8\. **I'm federal agent Jack Bauer, and today is the longest day of my life**

+ **[8-24_hours.c](8-24_hours.c)**

* Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
	* Prototype: `void jack_bauer(void);` 
	* You can listen to [this soundtrack](https://intranet.hbtn.io/rltoken/CF-MAQgUTibmVPRfQF3VkQ) 
 while coding :)

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-24_hours.c -o 8-24
$ ./8-24 | head
00:00
00:01
00:02
00:03
00:04
00:05
00:06
00:07
00:08
00:09
$ ./8-24 | tail
23:50
23:51
23:52
23:53
23:54
23:55
23:56
23:57
23:58
23:59
$ ./8-24 | wc -l
1440
$ 
```
---
 
+ [x] 9\. **Learn your times table**

+ **[9-times_table.c](./9-times_table.c)**

* Write a function that prints the 9 times table, starting with 0.
	* Prototype: `void times_table(void);` 
	* Format: see example
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 9-main.c 9-times_table.c -o 9-times_table
$ ./9-times_table | cat -e
0,  0,  0,  0,  0,  0,  0,  0,  0,  0$
0,  1,  2,  3,  4,  5,  6,  7,  8,  9$
0,  2,  4,  6,  8, 10, 12, 14, 16, 18$
0,  3,  6,  9, 12, 15, 18, 21, 24, 27$
0,  4,  8, 12, 16, 20, 24, 28, 32, 36$
0,  5, 10, 15, 20, 25, 30, 35, 40, 45$
0,  6, 12, 18, 24, 30, 36, 42, 48, 54$
0,  7, 14, 21, 28, 35, 42, 49, 56, 63$
0,  8, 16, 24, 32, 40, 48, 56, 64, 72$
0,  9, 18, 27, 36, 45, 54, 63, 72, 81$
$ ./9-times_table | tr ' ' . | cat -e
0,..0,..0,..0,..0,..0,..0,..0,..0,..0$
0,..1,..2,..3,..4,..5,..6,..7,..8,..9$
0,..2,..4,..6,..8,.10,.12,.14,.16,.18$
0,..3,..6,..9,.12,.15,.18,.21,.24,.27$
0,..4,..8,.12,.16,.20,.24,.28,.32,.36$
0,..5,.10,.15,.20,.25,.30,.35,.40,.45$
0,..6,.12,.18,.24,.30,.36,.42,.48,.54$
0,..7,.14,.21,.28,.35,.42,.49,.56,.63$
0,..8,.16,.24,.32,.40,.48,.56,.64,.72$
0,..9,.18,.27,.36,.45,.54,.63,.72,.81$
$ 
```
---

+ [x] 10\. **a + b**

+ **[10-add.c](./10-add.c)**

* Write a function that adds two integers and returns the result.
	* Prototype: `int add(int, int);`

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-add.c -o 10-add
$ ./10-add 
98
$ 
```
---

+ [x] 11\. **98 Battery Street, the OG**

+ **[11-print_to_98.c](./11-print_to_98.c)**

* Write a function that prints all natural numbers from `n` to `98`, followed by a new line.
	* Prototype: `void print_to_98(int n);` 
	* Numbers must be separated by a comma, followed by a space.
	* Numbers should be printed in order.
	* The first printed number should be the number passed to the function.
	* The last printed number should be `98`.
	* Allowed to use the standard library.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 11-main.c 11-print_to_98.c -o 11-98
$ ./11-98 
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 
26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 
50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 
74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 
98
98
111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98
81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 
16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 
40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 
64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 
88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
$ 
```
---