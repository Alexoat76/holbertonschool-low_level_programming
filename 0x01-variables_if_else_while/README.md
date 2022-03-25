<p align="center">
<img src="https://img.shields.io/badge/LINUX-darkgreen.svg"/>
<img src="https://img.shields.io/badge/Shell-ligthgreen.svg"/>
<img src="https://img.shields.io/badge/Emacs-purple.svg"/>
<img src="https://img.shields.io/badge/C-blue.svg"/>
<img src="https://img.shields.io/badge/Betty-darkred.svg"/>
<img src="https://img.shields.io/badge/Markdown-black.svg"/><br>	
</p>

---

# 0x01. C - Variables, if, else, while.

In this project, you learn about using **`arithmetic`**, **`logical`**, **`relational`**, and **`boolean`** operators in C. Additionally, you practice **`declaring`** and **`defining`** variables of type `char`, `int`, and `unsigned int`, using `if` and `if...else` statements, and implementing `while loops`.

<p align="center">
  <img width="450"  
        src="https://www.2braces.com/images/controlstatement.png"
  >
</p>


# Getting Started :running:	
<div style="text-align: justify">
	
## Table of Contents
* [About](#about)
* [Resources](#resources-books)
* [Requirements](#requirements)
* [Tasks](#tasks)
* [Credits](#credits)

## About
	
The project contains some tasks for learning about the basics of **`control statement`** in **`C programming language`**.
		
## Resources :books:
Read or watch:
	
[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2f/Google_2015_logo.svg/80px-Google_2015_logo.svg.png)](https://www.google.com/search?q=C+language+Variables%2C+if%2C+else%2C+while&ei=EPw8YoaoCpuHwbkP8PO4kA8&ved=0ahUKEwiG8Lbp8N_2AhWbQzABHfA5DvIQ4dUDCA4&uact=5&oq=C+language+Variables%2C+if%2C+else%2C+while&gs_lcp=Cgdnd3Mtd2l6EAM6BwgAEEcQsAM6BAghEApKBAhBGABKBAhGGABQpCJYhzJg_kZoAXABeACAAdYCiAHZDpIBBzAuNy4yLjGYAQCgAQHIAQjAAQE&sclient=gws-wiz)

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e1/Logo_of_YouTube_%282015-2017%29.svg/70px-Logo_of_YouTube_%282015-2017%29.svg.png)](https://www.youtube.com/results?search_query=C+language+Variables%2C+if%2C+else%2C+while)	

- [Everything you need to know to start with C.pdf](https://intranet.hbtn.io/rltoken/GB1UNodFfec0AXUfmSxsLA) 
 (You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: “comments”, “Data types | Integer types”, “Declaration”, “Characters”, “Arithmetic operators”, “Variables assignments”, “Comparisons”, “Logical operators”, “if, if…else”, “while loops”.)
- [Keywords and identifiers](https://intranet.hbtn.io/rltoken/ckqC9BrBcMmv-DLmBauaWQ) 
- [integers](https://intranet.hbtn.io/rltoken/Oau_6LT7-3IIt5ew_3Ac6g) 
- [Arithmetic Operators in C](https://intranet.hbtn.io/rltoken/r4hrHzg2X9JjnKj8sP_SAw) 
- [If statements in C](https://intranet.hbtn.io/rltoken/W93uajwXtW3WOxOaeBtF-A) 
- [if…else statement](https://intranet.hbtn.io/rltoken/PMD6eKdkj2RmIpagtABihw) 
- [Relational operators](https://intranet.hbtn.io/rltoken/dCy4644-X_WJMYxRZwCfFQ) 
- [Logical operators](https://intranet.hbtn.io/rltoken/gJzJXQoEdEN1Oxcutp_76Q) 
- [while loop in C](https://intranet.hbtn.io/rltoken/Qhq1p5UcR72-VXFJ_iAqWQ) 
- [While loop](https://intranet.hbtn.io/rltoken/RY9a1EDxRKNNHhxbJ6Pn_g) 

**man or help :**

- `ascii` (You do not need to learn about `scanf`, `getc`, `getchar`, `EOF`, `EXIT_SUCCESS`, `time`, `rand`, `srand`, `RAND_MAX`, `for` loops, `do...while` loops, functions.)

## Requirements
### General

- Allowed editors: `vi`, `vim`, `emacs`. 
- All your files will be compiled on `Ubuntu 20.04 LTS` using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All your files should end with a new line.
- A `README.md` file, at the root of the folder of the project.
- There should be no errors and no warnings during compilation.
- You are not allowed to use `system`.
- Your code should use the `Betty` style. It will be checked using **[betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl)** 
 and **[betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)** 

## More Info
	
### Installation :computer:
	
- Clone this repository: `https://github.com/Alexoat76/holbertonschool-low_level_programming.git`	
- Access to directory: `cd 0x01-variables_if_else_while`
- `Compile` accord to `instructions` of each task.	

## Files :file_folder:	
	
### Executables :heavy_check_mark:

+ **[executables](./executables)**: Folder of `executables` files. Result of successful compilation and execution of functions for tasks.
	
---	
	
## Tasks

+ [x] 0\. **Positive anything is better than negative nothing**.

+ **[0-positive_or_negative.c](./0-positive_or_negative.c)**

* This program will assign a random number to the variable `n` each time it is executed. 
	Complete the source code in order to print whether the number stored in the variable `n` is positive or negative.
	
	* You can find the source code [here](https://intranet.hbtn.io/rltoken/7UBSgP4-dX9UI_R-fz7yYQ).
	* The variable `n` will store a different value every time you will run this program.
	* The output of the program should be:
		* The number, followed by
			* if the number is greater than 0: `is positive` 
			* if the number is 0: `is zero` 
			* if the number is less than 0: `is negative` 
		* followed by a new line

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
$ ./0-positive_or_negative 
-520693284 is negative
$ ./0-positive_or_negative 
561319348 is positive
$ ./0-positive_or_negative 
0 is zero
$ 
```
---

+ [x] 1\. **The last digit**.

+ **[1-last_digit.c](./1-last_digit.c)**

* This program will assign a random number to the variable `n` each time it is executed. 
	Complete the source code in order to print the last digit of the number stored in the variable `n`.

	* You can find the source code [here](https://intranet.hbtn.io/rltoken/oFiQttJDmwMElxNT6fqSiA).
	* The variable `n` will store a different value every time you run this program.
	* The output of the program should be:
		* The string `Last digit of`, followed by
		* `n`, followed by
		* the string `is`, followed by
			* if the last digit of `n` is greater than 5: the string `and is greater than 5` 
			* if the last digit of `n` is 0: the string `and is 0` 
			* if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0` 
		* followed by a new line

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0
$ ./1-last_digit 
Last digit of -748255693 is -3 and is less than 6 and not 0
$ ./1-last_digit 
Last digit of 491506926 is 6 and is greater than 5
$ ./1-last_digit 
Last digit of 809065140 is 0 and is 0
$
```
---

+ [x] 2\. **I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**

+ **[2-print_alphabet.c](./2-print_alphabet.c)**

* This program that prints the alphabet in lowercase, followed by a new line.
	* Only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden).
	* All code should be in the `main` function.
	* Only use `putchar` twice in the code.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
$ ./2-print_alphabet 
abcdefghijklmnopqrstuvwxyz
$
```
---

+ [x] 3\. **alphABET**

+ **[3-print_alphabets.c](./3-print_alphabets.c)**

* Program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
	* Only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden).
	* All code should be in the `main` function.
	* Only use `putchar` three times in the code.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
$ 
```
---

+ [x] 4\. **When I was having that alphabet soup, I never thought that it would pay off**

+ **[4-print_alphabt.c](./4-print_alphabt.c)**

* Program that prints the alphabet in lowercase, followed by a new line.
	* Print all the letters except `q` and `e`
	* Only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden).
	* All code should be in the `main` function.
	* Only use `putchar` twice in the code.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
$ ./4-print_alphabt 
abcdfghijklmnoprstuvwxyz
$ ./4-print_alphabt | grep [eq]
$ 
```
---

+ [x] 5\. **Numbers**

+ **[5-print_numbers.c](./5-print_numbers.c)**

* Program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.
	* All code should be in the `main` function.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
$ ./5-print_numbers 
0123456789
$ 
```
---

+ [x] 6\. **Numberz**

+ **[6-print_numberz.c](./6-print_numberz.c)**

* Program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.
	* Not allowed to use any variable of type `char` 
	* Only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
	* Only use `putchar` twice in the code.
	* All your code should be in the `main` function.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
$ ./6-print_numberz 
0123456789
$ 
```
---
 
+ [x] 7\. **Smile in the mirror**

+ **[7-print_tebahpla.c](7-print_tebahpla.c)**

* Program that prints the lowercase alphabet in reverse, followed by a new line.
	* Only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
	* All code should be in the `main` function.
	* Only use `putchar` twice in the code.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
$
```
---

+ [x] 8\. **Hexadecimal**

+ **[8-print_base16.c](./8-print_base16.c)**

* Program that prints all the numbers of base 16 in lowercase, followed by a new line.
	* Only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
	* All code should be in the `main` function
	* Only use `putchar` three times in the code.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
$ ./8-print_base16
0123456789abcdef
$
```
---

+ [x] 9\. **Patience, persistence and perspiration make an unbeatable combination for success**.

+ **[9-print_comb.c](./9-print_comb.c)**

* Program that prints all possible combinations of single-digit numbers.
	* Numbers must be separated by `,`, followed by a space.
	* Numbers should be printed in ascending order.
	* Only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden).
	* All code should be in the `main` function.
	* Only use `putchar` four times maximum in the code.
	* Not allowed to use any variable of type `char`.
 
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
$ 
```
---

+ [x] 10\. **Inventing is a combination of brains and materials. The more brains you use, the less material you need**

+ **[100-print_comb3.c](./100-print_comb3.c)**

* Program that prints all possible different combinations of two digits.
	* Numbers must be separated by `,`, followed by a space.
	* The two digits must be different.
	* `01` and `10` are considered the same combination of the two digits `0` and `1`.
	* Print only the smallest combination of two digits.
	* Numbers should be printed in ascending order, with two digits.
	* Only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
	* Only use `putchar` five times maximum in the code.
	* Not allowed to use any variable of type `char`.
	* All code should be in the `main` function.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3
$ ./100-print_comb3
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 
34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
$ 
```
---

+ [x] 11\. **The success combination in business is: Do what you do better... and: do more of what you do...**

+ **[101-print_comb4.c](./101-print_comb4.c)**

* Program that prints all possible different combinations of three digits.
	* Numbers must be separated by `,` , followed by a space.
	* The three digits must be different.
	* `012`, `120`, `102`, `021`, `201`, `210` are considered the same combination of the three digits `0`, `1` and `2`.
	* Print only the smallest combination of three digits.
	* Numbers should be printed in ascending order, with three digits.
	* Only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
	* Only use `putchar` six times maximum in the code.
	* Not allowed to use any variable of type `char`.
	* All code should be in the `main` function.

```bash
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-print_comb4.c -o 101-print_comb4
julien@ubuntu:~/0x01$ ./101-print_comb4
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 
038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 
125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 
159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 
257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 
368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 
579, 589, 678, 679, 689, 789
$ 

```
---

+ [x] 12\. **Software is eating the World**.

+ **[102-print_comb5.c](./102-print_comb5.c)**

* Program that prints all possible combinations of two two-digit numbers.
	* The numbers should range from `0` to `99`.
	* The two numbers should be separated by a space.
	* All numbers should be printed with two digits. `1` should be printed as `01`.
	* The combination of numbers must be separated by comma, followed by a space.
	* The combinations of numbers should be printed in ascending order.
	* `00 01` and `01 00` are considered as the same combination of the numbers `0` and `1`.
	* Only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
	* Only use `putchar` eight times maximum in the code.
	* Not allowed to use any variable of type `char`.
	* All code should be in the `main` function.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-print_comb5.c -o 102-print_comb5
$ ./102-print_comb5
00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92,
40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47,
41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96,
94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99
```
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
