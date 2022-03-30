<p align="center">
<img src="https://img.shields.io/badge/LINUX-darkgreen.svg"/>
<img src="https://img.shields.io/badge/Shell-ligthgreen.svg"/>
<img src="https://img.shields.io/badge/Emacs-purple.svg"/>
<img src="https://img.shields.io/badge/C-blue.svg"/>
<img src="https://img.shields.io/badge/Betty-darkred.svg"/>
<img src="https://img.shields.io/badge/Markdown-black.svg"/><br>	
</p>

---

# 0x04. C - More functions, more nested loops

In this project, you continue to learn about using **`nested loops`** and writing functions in `C language`.

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
	
The project contains some tasks for learning about using **`nested loops`** and writing functions in **`C`**.
		
## Resources :books:
Read or watch:
	
[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2f/Google_2015_logo.svg/80px-Google_2015_logo.svg.png)]()

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e1/Logo_of_YouTube_%282015-2017%29.svg/70px-Logo_of_YouTube_%282015-2017%29.svg.png)]()
	
- [Nested while loops](https://intranet.hbtn.io/rltoken/3WXPpZkwBEt_9MOlayYGWw) 
- [C - Functions](https://intranet.hbtn.io/rltoken/ES8eagOrYppE4qSjaa4zQA) 
- [Learning to Program in C (Part 06)](https://intranet.hbtn.io/rltoken/X8cL-h23A-vdFyuRmomKQQ) 
 (stop at 14:00)
- [What is the purpose of a function prototype?](https://intranet.hbtn.io/rltoken/IAfwYbkv3JHqttvqlnz0Bw) 
- [C - Header Files](https://intranet.hbtn.io/rltoken/QvgB8JXWlTL_yqsUD-3-ag) 
 (stop before the “Once-Only Headers” paragraph)
 
## Requirements
### General
- Allowed editors: `vi`, `vim`, `emacs` 
- All files will be compiled on `Ubuntu 20.04 LTS` using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89` 
- All files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- The code should use the `Betty style`. It will be checked using **[betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl)** 
 and **[betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)** 
- Not allowed to use global variables
- No more than 5 functions per file
- Not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- Allowed to use **[_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)** 
- Don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. Use them to test the functions, 
	Don’t have to push them to repo.
	We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h` 
- Don’t forget to push the header file.

## More Info
Do not have to understand the call by reference (address), stack, static variables, recursions or arrays, yet.

### Installation :computer:
	
- Clone this repository: `https://github.com/Alexoat76/holbertonschool-low_level_programming.git`	
- Access to directory: `cd 0x04-more_functions_nested_loops`
- `Compile` accord to `instructions` of each task.	

## Files :file_folder:

+ **[main.h](./main.h)**: Header file containing definitions and
prototypes for all types and functions written for the project.
	
| File                     | Prototype                        |
| ------------------------ | -------------------------------- |
| `0-isupper.c`            | `int _isupper(int c);`           |
| `1-isdigit.c`            | `int _isdigit(int c);`           |
| `2-mul.c`                | `int mul(int a, int b);`         |
| `3-print_numbers.c`      | `void print_numbers(void);`      |
| `4-print_most_numbers.c` | `void print_most_numbers(void);` |
| `5-more_numbers.c`       | `void more_numbers(void);`       |
| `6-print_line.c`         | `void print_line(int n);`        |
| `7-print_diagonal.c`     | `void print_diagonal(int n);`    |
| `8-print_square.c`       | `void print_square(int size);`   |
| `10-print_triangle.c`    | `void print_triangle(int size);` |
	
### Tests :heavy_check_mark:

+ **[tests](./tests)**: Folder of test files. Provided by Holberton School.
		
### Executables :heavy_check_mark:

+ **[executables](./executables)**: Folder of `executables` files. Result of successful compilation and execution of functions for tasks.
	
---

## Tasks
+ [x] 0\. **isupper**

+ **[0-isupper.c](./0-isupper.c)**

* Write a function that checks for uppercase character.
	* Prototype:  ` int _isupper(int c); ` 
	* Returns  ` 1 `  if  ` c `  is uppercase
	* Returns  ` 0 `  otherwise
**FYI**: The standard library provides a similar function: `isupper`. Run `man isupper` to learn more.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper
$ ./0-isuper 
A: 1
a: 0
$ 
```
---

+ [x] 1\. **isdigit**

+ **[1-isdigit.c](./1-isdigit.c)**

* Write a function that checks for a digit (`0` through `9`).
	* Prototype: `int _isdigit(int c);` 
	* Returns `1` if `c` is a digit
	* Returns `0` otherwise
**FYI**: The standard library provides a similar function: isdigit. Run man isdigit to learn more.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-isdigit.c -o 1-isdigit
$ ./1-isdigit 
0: 1
a: 0
$ 
```
---

+ [x] 2\. **Collaboration is multiplication**

+ **[2-mul.c](./2-mul.c)**

* Write a function that multiplies two integers.
	* Prototype: `int mul(int a, int b);` 

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-mul.c -o 2-mul
$ ./2-mul 
100352
-1646592
$ 
```
---
 
+ [x] 3\. **The numbers speak for themselves**

+ **[3-print_numbers.c](./3-print_numbers.c)**

* Write a function that prints the numbers, from `0` to `9`, followed by a new line.
	* Prototype: `void print_numbers(void);` 
	* Only use `_putchar` twice in the code.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-print_numbers.c -o 3-print_numbers
$ ./3-print_numbers | cat -e
0123456789$
$ 
```
---

+ [x] 4\. **I believe in numbers and signs**

+ **[4-print_most_numbers.c](./4-print_most_numbers.c)**

* Write a function that prints the numbers, from `0` to `9`, followed by a new line.
	* Prototype: `void print_most_numbers(void);` 
	* Do not print `2` and `4` 
	* Only use `_putchar` twice in the code.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_most_numbers.c -o 4-print_most_numbers
$ ./4-print_most_numbers 
01356789
$ 

```
---

+ [x] 5\. **Numbers constitute the only universal language**

+ **[5-more_numbers.c](./5-more_numbers.c)**

* Write a function that prints 10 times the numbers, from `0` to `14`, followed by a new line.
	* Prototype: `void more_numbers(void);` 
	* Only use  `_putchar` three times in the code.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-more_numbers.c -o 5-more_numbers
$ ./5-more_numbers 
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
$
```
---

+ [x] 6\. **The shortest distance between two points is a straight line**

+ **[6-print_line.c](./6-print_line.c)**

* Write a function that draws a straight line in the terminal.
	* Prototype: `void print_line(int n);` 
	* Only use `_putchar` function to print
	* Where `n` is the number of times the character `_` should be printed
	* The line should end with a `\n` 
	* If `n` is `0` or less, the function should only print `\n`
 
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-print_line.c -o 6-lines
$ ./6-lines | cat -e
$
__$
__________$
$
$ 
```
---

+ [x] 7\. **I feel like I am diagonally parked in a parallel universe**

+ **[7-print_diagonal.c](./7-print_diagonal.c)**

* Write a function that draws a diagonal line on the terminal.
	* Prototype: `void print_diagonal(int n);` 
	* Only use `_putchar` function to print
	* Where `n` is the number of times the character `\` should be printed
	* The diagonal should end with a `\n` 
	* If `n` is `0` or less, the function should only print a `\n`

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_diagonal.c -o 7-diagonals
$ ./7-diagonals | cat -e
$
\$
 \$
\$
 \$
  \$
   \$
    \$
     \$
      \$
       \$
        \$
         \$
$
$ 
```
---

+ [x] 8\. **You are so much sunshine in every square inch**

+ **[8-print_square.c](./8-print_square.c)**

* Write a function that prints a square, followed by a new line.
	* Prototype: `void print_square(int size);` 
	* Only use `_putchar` function to print
	* Where `size` is the size of the square
	* If `size` is `0` or less, the function should print only a new line
	* Use the character `#` to print the square

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-print_square.c -o 8-squares
$ ./8-squares 
##
##
##########
##########
##########
##########
##########
##########
##########
##########
##########
##########

$ 
```
---

+ [x] 9\. **Fizz-Buzz**

+ **[9-fizz_buzz.c](./9-fizz_buzz.c)**

* The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job 
	candidates who can’t seem to program their way out of a wet paper bag.

* Write a program that prints the numbers from `1` to `100`, followed by a new line. But for multiples of three print   
	**`Fizz`** instead of the number and for the multiples of five print **`Buzz`**. For numbers which are multiples of both 
	three and five print **`FizzBuzz`**.
	* Each number or word should be separated by a space
	* You are allowed to use the standard library

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-fizz_buzz.c -o 9-fizz_buzz
$ ./9-fizz_buzz 
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 
26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 
49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 
73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz 
Fizz 97 98 Fizz Buzz
$ 
```
---

+ [x] 10\. **Triangles**

+ **[10-print_triangle.c](./10-print_triangle.c)**

* Write a function that prints a triangle, followed by a new line.
	* Prototype: `void print_triangle(int size);` 
	* Only use `_putchar` function to print
	* Where `size` is the size of the triangle
	* If `size` is `0` or less, the function should print only a new line
	* Use the character `#` to print the triangle

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-print_triangle.c -o 10-triangles
$ ./10-triangles 
 #
##
         #
        ##
       ###
      ####
     #####
    ######
   #######
  ########
 #########
##########
#

$ ./10-triangles | tr ' ' . | cat -e
.#$
##$
.........#$
........##$
.......###$
......####$
.....#####$
....######$
...#######$
..########$
.#########$
##########$
#$
$
$
```
---

+ [x] 11\. **The problem of distinguishing prime numbers from composite numbers and of 
	resolving the latter into their prime factors is known to be one of the most important 
	and useful in arithmetic**

+ **[100-prime_factor.c](./100-prime_factor.c)**

* The prime factors of `1231952` are `2`, `2`, `2`, `2`, `37` and `2081`. 
* Write a program that finds and prints the largest prime factor of the number **`612852475143`**, followed by a new line.
	* You are allowed to use the standard library
	* Your program will be compiled with this command: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 
	100-prime_factor.c -o 100-prime_factor -lm` 

---

+ [x] 12\. **Numbers have life; they're not just symbols on paper**

+ **[101-print_number.c](./101-print_number.c)**

* Write a function that prints an integer.
	* Prototype: `void print_number(int n);` 
	* Only use `_putchar` function to print
	* Not allowed to use `long` 
	* Not allowed to use arrays or pointers
	* Not allowed to hard-code special values

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 101-main.c 101-print_number.c -o 101-print_numbers
$ ./101-print_numbers 
98
402
1024
0
-98
$ 
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
