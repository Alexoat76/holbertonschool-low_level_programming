<p align="center">
<img src="https://img.shields.io/badge/LINUX-darkgreen.svg"/>
<img src="https://img.shields.io/badge/Shell-ligthgreen.svg"/>
<img src="https://img.shields.io/badge/Emacs-purple.svg"/>
<img src="https://img.shields.io/badge/C-blue.svg"/>
<img src="https://img.shields.io/badge/Betty-darkred.svg"/>
<img src="https://img.shields.io/badge/Markdown-black.svg"/><br>	
</p>

---

# 0x02. C - Functions, nested loops

In this project, you learn about nested loops, header files, and variable scope in C while practicing declaring and defining my own functions.

<p align="center">
  <img width="200"  
        src="https://thumbs.gfycat.com/MindlessSelfassuredHornbill-size_restricted.gif"
  >
</p>


# Getting Started :running:	
<div style="text-align: justify">
	
## Table of Contents
* [About](#about)
* [Resources](#resources-books)
* [Requirements](#requirements)
* [Files](#files-file_folder)
* [Tasks](#tasks)
* [Credits](#credits)

## About
	
The project contains some tasks for learning about the basics of **`nested loops`** and **`header files`** in **`C programming language`**.
		
## Resources :books:
Read or watch:
	
[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2f/Google_2015_logo.svg/80px-Google_2015_logo.svg.png)](https://www.google.com/search?q=nested+loop+in+c&ei=aFs_YombNNGKwbkP_Y-iEA&ved=0ahUKEwiJ77KEtOT2AhVRRTABHf2HCAIQ4dUDCA4&uact=5&oq=nested+loop+in+c&gs_lcp=Cgdnd3Mtd2l6EAMyBwgAEEcQsAMyBwgAEEcQsAMyBwgAEEcQsAMyBwgAEEcQsAMyBwgAEEcQsAMyBwgAEEcQsAMyBwgAEEcQsAMyBwgAEEcQsAMyBwgAELADEEMyBwgAELADEENKBAhBGABKBAhGGABQAFgAYLkZaAJwAXgAgAEAiAEAkgEAmAEAyAEKwAEB&sclient=gws-wiz)

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e1/Logo_of_YouTube_%282015-2017%29.svg/70px-Logo_of_YouTube_%282015-2017%29.svg.png)](https://www.youtube.com/results?search_query=nested+loop+in+c)
	
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

### Installation :computer:
	
- Clone this repository: `https://github.com/Alexoat76/holbertonschool-low_level_programming.git`	
- Access to directory: `cd 0x02-functions_nested_loops`
- `Compile` accord to `instructions` of each task.	

## Files :file_folder:

+ **[main.h](./main.h)**: Header file containing definitions and
prototypes for all types and functions written for the project.
	
**Function Prototypes**

| File                             | Prototype                                                                                        |
| -------------------------------- | ------------------------------------------------------------------------------------------------ |
| `1-alphabet.c`            	   | `void print_alphabet(void);`                                                 		      |
| `2-print_alphabet_x10.c`         | `void print_alphabet_x10(void);`                                                                 |
| `3-islower.c`                    | `int _islower(int c);`                                                                           |
| `4-isalpha.c`                    | `int _isalpha(int c);`                                                                           |
| `5-sign.c`                       | `int print_sign(int n);`                                                                         |
| `6-abs.c`                        | `int _abs(int);`                                                                                 |
| `7-print_last_digit.c`           | `int print_last_digit(int);`                                                                     |
| `8-24_hours.c`                   | `void jack_bauer(void);`                                                                         |
| `9-times_table.c`                | `void times_table(void);`                                                                        |
| `10-add.c`                       | `int add(int, int);`                                                                             |
| `11-print_to_98.c`               | `void print_to_98(int n);`                                                                       |
| `100-times_table.c`              | `void print_times_table(int n);`                                                                 |

	
### Tests :heavy_check_mark:

+ **[tests](./tests)**: Folder of test files. Provided by Holberton School.
	
## Helper File :heavy_check_mark:

+ **[_putchar](https://github.com/Alexoat76/holbertonschool-low_level_programming/blob/main/0x02-functions_nested_loops/_putchar.c)**: C function that writes a character to `stdout`.
	
### Executables :heavy_check_mark:

+ **[executables](./executables)**: Folder of `executables` files. Result of successful compilation and execution of functions for tasks.
	
---	
		
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

+ [x] 12\. **The World looks like a multiplication-table, or a mathematical equation, which, 
	turn it how you will, balances itself**

+ **[100-times_table.c](./100-times_table.c)**

* Write a function that prints the `n` times table, starting with 0.
	* Prototype: `void print_times_table(int n);` 
	* If `n` is greater than `15` or less than `0` the function should not print anything.
	* Format: see example

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 100-main.c 100-times_table.c -o 100-times_table
$ ./100-times_table 
0,   0,   0,   0
0,   1,   2,   3
0,   2,   4,   6
0,   3,   6,   9

0,   0,   0,   0,   0,   0
0,   1,   2,   3,   4,   5
0,   2,   4,   6,   8,  10
0,   3,   6,   9,  12,  15
0,   4,   8,  12,  16,  20
0,   5,  10,  15,  20,  25


0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12
0,   2,   4,   6,   8,  10,  12,  14,  16,  18,  20,  22,  24
0,   3,   6,   9,  12,  15,  18,  21,  24,  27,  30,  33,  36
0,   4,   8,  12,  16,  20,  24,  28,  32,  36,  40,  44,  48
0,   5,  10,  15,  20,  25,  30,  35,  40,  45,  50,  55,  60
0,   6,  12,  18,  24,  30,  36,  42,  48,  54,  60,  66,  72
0,   7,  14,  21,  28,  35,  42,  49,  56,  63,  70,  77,  84
0,   8,  16,  24,  32,  40,  48,  56,  64,  72,  80,  88,  96
0,   9,  18,  27,  36,  45,  54,  63,  72,  81,  90,  99, 108
0,  10,  20,  30,  40,  50,  60,  70,  80,  90, 100, 110, 120
0,  11,  22,  33,  44,  55,  66,  77,  88,  99, 110, 121, 132
0,  12,  24,  36,  48,  60,  72,  84,  96, 108, 120, 132, 144
$ ./100-times_table | tr ' ' . | cat -e
0,...0,...0,...0$
0,...1,...2,...3$
0,...2,...4,...6$
0,...3,...6,...9$
$
0,...0,...0,...0,...0,...0$
0,...1,...2,...3,...4,...5$
0,...2,...4,...6,...8,..10$
0,...3,...6,...9,..12,..15$
0,...4,...8,..12,..16,..20$
0,...5,..10,..15,..20,..25$
$
$
0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0$
0,...1,...2,...3,...4,...5,...6,...7,...8,...9,..10,..11,..12$
0,...2,...4,...6,...8,..10,..12,..14,..16,..18,..20,..22,..24$
0,...3,...6,...9,..12,..15,..18,..21,..24,..27,..30,..33,..36$
0,...4,...8,..12,..16,..20,..24,..28,..32,..36,..40,..44,..48$
0,...5,..10,..15,..20,..25,..30,..35,..40,..45,..50,..55,..60$
0,...6,..12,..18,..24,..30,..36,..42,..48,..54,..60,..66,..72$
0,...7,..14,..21,..28,..35,..42,..49,..56,..63,..70,..77,..84$
0,...8,..16,..24,..32,..40,..48,..56,..64,..72,..80,..88,..96$
0,...9,..18,..27,..36,..45,..54,..63,..72,..81,..90,..99,.108$
0,..10,..20,..30,..40,..50,..60,..70,..80,..90,.100,.110,.120$
0,..11,..22,..33,..44,..55,..66,..77,..88,..99,.110,.121,.132$
0,..12,..24,..36,..48,..60,..72,..84,..96,.108,.120,.132,.144$
$ 
```
---

+ [x] 13\. **Nature made the natural numbers; All else is the work of women**

+ **[101-natural.c](./101-natural.c)**

* If we list all the natural numbers below `10` that are multiples of `3` or `5`, we get `3`, `5`, `6` and `9`. 
	The sum of these multiples is `23`. Write a program that computes and prints the sum of all the multiples of `3` or `5` below 
	`1024`(excluded), followed by a new line.
		* You are allowed to use the standard library

---

+ [x] 14\. **In computer class, the first assignment was to write a program to print the first 100 
	Fibonacci numbers. Instead, I wrote a program that would steal passwords of 
	students. My teacher gave me an A

+ **[102-fibonacci.c](./102-fibonacci.c)**

* Write a program that prints the first `50 Fibonacci numbers`, starting with `1` and `2`, followed by a new line.
	* The numbers must be separated by comma, followed by a space `,` 
	* You are allowed to use the standard library.

---

+ [x] 15\. **Even Liber Abbaci**

+ **[103-fibonacci.c](./103-fibonacci.c)**

* Each new term in the Fibonacci sequence is generated by adding the previous two terms. 
	* By starting with `1` and `2`, the first 10 terms will be: `1, 2, 3, 5, 8, 13, 21, 34, 55, 89`. 
	* By considering the terms in the Fibonacci sequence whose values do `not exceed` **4,000,000**, 
	* write a program that finds and prints the sum of the even-valued terms, followed by a new line.
		* You are allowed to use the standard library.

---

+ [x] 16\. **In computer class, the first assignment was to write a program to print the first 100 
	Fibonacci numbers. Instead, I wrote a program that would steal passwords of 
	students. My teacher gave me an A+**

+ **[104-fibonacci.c](./104-fibonacci.c)**

* Write a program that finds and prints the first 98 Fibonacci numbers, starting with `1` and `2`, followed by a new line.
	* The numbers should be separated by comma, followed by a space `,` 
	* You are allowed to use the standard library
	* You are not allowed to use any other library (You can’t use `GMP` etc…)
	* You are not allowed to use `long long`, `malloc`, pointers, arrays/tables, or structures
	* You are not allowed to hard code any Fibonacci number (except for `1` and `2`)

---
## Credits

## Author(s):blue_book:

Work is owned and maintained by 
	**`Alex Orland Arévalo Tribaldos`**  and credits for `group projects` are displayed in the respective `README.md` files.

<3915@holbertonschool.com>
	
[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/9/91/Octicons-mark-github.svg/25px-Octicons-mark-github.svg.png)](https://github.com/Alexoat76)
[![M](https://upload.wikimedia.org/wikipedia/fr/thumb/c/c8/Twitter_Bird.svg/25px-Twitter_Bird.svg.png)](https://twitter.com/aoarevalot)
[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/c/ca/LinkedIn_logo_initials.png/25px-LinkedIn_logo_initials.png)](https://www.linkedin.com/in/Alexoat76/)

## Acknowledgments :mega: 

### **`Holberton School`** (*providing guidance*)
	
This program was written as part of the curriculum for Holberton School.
Holberton School is a campus-based full-stack software engineering program
that prepares students for careers in the tech industry using project-based
peer learning. For more information,  please visit [this link](https://www.holbertonschool.com/).
![Brand](https://assets.website-files.com/6105315644a26f77912a1ada/610540e8b4cd6969794fe673_Holberton_School_logo-04-04.svg)
