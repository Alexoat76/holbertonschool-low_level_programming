<p align="center">
<img src="https://img.shields.io/badge/LINUX-darkgreen.svg"/>
<img src="https://img.shields.io/badge/Shell-ligthgreen.svg"/>
<img src="https://img.shields.io/badge/Emacs-purple.svg"/>
<img src="https://img.shields.io/badge/C-blue.svg"/>
<img src="https://img.shields.io/badge/Betty-darkred.svg"/>
<img src="https://img.shields.io/badge/Markdown-black.svg"/><br>	
</p>

---

# 0x05. C - Pointers, arrays and strings

In this project, you learn about **what are** and **how to use** `pointers` and `arrays` and the differences between the two as well as 
	how to use and manipulate `strings` in `C language`.

<p align="center">
  <img width="275"  
        src="https://www.freecodecamp.org/news/content/images/2020/08/456d4568d6e2c00e377b9dfae76e1809.gif"
  >
</p>


## Table of Contents
* [About](#about)
* [Resources](#resources-books)
* [Requirements](#requirements)
* [Files](#files-file_folder)
* [Tasks](#tasks)
* [Credits](#credits)

## About
	
The project contains some tasks for learning about `Pointers`, `arrays` and `strings` and writing functions in **`C`**.

## Resources :books:
Read or watch:
	
[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2f/Google_2015_logo.svg/80px-Google_2015_logo.svg.png)](https://www.google.com/search?q=nested+loop+in+c&ei=aFs_YombNNGKwbkP_Y-iEA&ved=0ahUKEwiJ77KEtOT2AhVRRTABHf2HCAIQ4dUDCA4&uact=5&oq=nested+loop+in+c&gs_lcp=Cgdnd3Mtd2l6EAMyBwgAEEcQsAMyBwgAEEcQsAMyBwgAEEcQsAMyBwgAEEcQsAMyBwgAEEcQsAMyBwgAEEcQsAMyBwgAEEcQsAMyBwgAEEcQsAMyBwgAELADEEMyBwgAELADEENKBAhBGABKBAhGGABQAFgAYLkZaAJwAXgAgAEAiAEAkgEAmAEAyAEKwAEB&sclient=gws-wiz)

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e1/Logo_of_YouTube_%282015-2017%29.svg/70px-Logo_of_YouTube_%282015-2017%29.svg.png)](https://www.youtube.com/results?search_query=nested+loop+in+c)
- [Pointers and arrays](https://intranet.hbtn.io/concepts/60) 
- [Data Structures](https://intranet.hbtn.io/concepts/120) 
- [C - Arrays](https://intranet.hbtn.io/rltoken/JDzn5TfvFN41WKKvjOfvTg) 
- [C - Pointers](https://intranet.hbtn.io/rltoken/9CA1cUi3AxHOszdncsKC7g) 
- [C - Strings](https://intranet.hbtn.io/rltoken/VBdJIrssmpg5YLOfoGTVnA) 
- [Memory Layout](https://intranet.hbtn.io/rltoken/XCdri62uArXHsZev8zHhnA) 

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
- The prototypes of all functions and the prototype of the function `_putchar` been included in the header file called `main.h` 
- Don’t forget to push the header file.

## More Info
Do not need to learn about pointers to functions, pointers to pointers, multidimensional arrays, arrays of structures, `malloc` and `free` - **yet**.

### Installation :computer:
	
- Clone this repository: `https://github.com/Alexoat76/holbertonschool-low_level_programming.git`	
- Access to directory: `cd 0x05-pointers_arrays_strings`
- `Compile` accord to `instructions` of each task.	

## Files :file_folder:

+ **[main.h](./main.h)**: Header file containing definitions and
prototypes for all types and functions written for the project.
	
| File              | Prototype                               |
| ----------------- | --------------------------------------- |
| `0-reset_to_98.c` | `void reset_to_98(int *n);`             |
| `1-swap.c`        | `void swap_int(int *a, int *b);`        |
| `2-strlen.c`      | `int _strlen(char *s);`                 |
| `3-puts.c`        | `void _puts(char *str);`                |
| `4-print_rev.c`   | `void print_rev(char *s);`              |
| `5-rev_string.c`  | `void rev_string(char *s);`             |
| `6-puts2.c`       | `void puts2(char *str);`                |
| `7-puts_half.c`   | `void puts_half(char *str);`            |
| `8-print_array.c` | `void print_array(int *a, int n);`      |
| `9-strcpy.c`      | `char *_strcpy(char *dest, char *src);` |
| `100-atoi.c`      | `int _atoi(char *s);`                   |
	
### Tests :heavy_check_mark:

+ **[tests](./tests)**: Folder of test files. Provided by Holberton School.
	
## Helper File :heavy_check_mark:

+ **[_putchar](https://github.com/Alexoat76/holbertonschool-low_level_programming/blob/main/0x02-functions_nested_loops/_putchar.c)**: C function that writes a character to `stdout`.
			
### Executables :heavy_check_mark:

+ **[executables](./executables)**: Folder of `executables` files. Result of successful compilation and execution of functions for tasks.
	
---

## Tasks

+ [x] 0\. **98 Battery st**.

+ **[0-reset_to_98.c](./0-reset_to_98.c)**

* Write a function that takes a pointer to an `int` as parameter and updates the value it points to to `98`.
	* Prototype: `void reset_to_98(int *n);`

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
$ ./0-98 
n=402
n=98
$ 
```
---

+ [x] 1\. **Don't swap horses in crossing a stream**

+ **[1-swap.c](./1-swap.c)**

* Write a function that swaps the values of two integers.
	* Prototype: `void swap_int(int *a, int *b);`
 
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap
$ ./1-swap 
a=98, b=42
a=42, b=98
$
```
---

+ [x] 2\. **This report, by its very length, defends itself against the risk of being read**

+ **[2-strlen.c](./2-strlen.c)**

* Write a function that returns the length of a string.
	* Prototype: `int _strlen(char *s);`
 
	**FYI**: The standard library provides a similar function: `strlen`. Run `man strlen`to learn more.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strlen.c -o 2-strlen
5$ ./2-strlen 
16
$ 
```
---

+ [x] 3\. **I do not fear computers. I fear the lack of them**

+ **[3-puts.c](./3-puts.c)**

* Write a function that prints a string, followed by a new line, to `stdout`.
	* Prototype: `void _puts(char *str);`
 
	**FYI**: The standard library provides a similar function: `puts`. Run `man puts` to learn more.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-puts.c -o 3-puts
$ ./3-puts 
I do not fear computers. I fear the lack of them - Isaac Asimov
$ 
```
---

+ [x] 4\. **I can only go one way. I've not got a reverse gear**

+ **[4-print_rev.c](./4-print_rev.c)**

* Write a function that prints a string, in reverse, followed by a new line.
	* Prototype: `void print_rev(char *s);`

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev
$ ./4-print_rev 
vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
$ 
```
---

+ [x] 5\. **A good engineer thinks in reverse and asks himself about the stylistic 
		consequences of the components and systems he proposes**

+ **[5-rev_string.c](./5-rev_string.c)**

* Write a function that reverses a string.  
	* Prototype: `void rev_string(char *s);` 

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-rev_string.c -o 5-rev_string
$ ./5-rev_string 
My School
loohcS yM
$ 
```
---

+ [x] 6\. **Half the lies they tell about me aren't true**

+ **[6-puts2.c](./6-puts2.c)**

* Write a function that prints every other character of a string, starting with the first character, followed by a new line.
	* Prototype: `void puts2(char *str);`
 
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-puts2.c -o 6-puts2
$ ./6-puts2 
02468
$ 
```
---

+ [x] 7\. **Winning is only half of it. Having fun is the other half**

+ **[7-puts_half.c](./7-puts_half.c)**

* Write a function that prints half of a string, followed by a new line.
	* Prototype: `void puts_half(char *str);` 
	* The function should print the second half of the string
	* If the number of characters is odd, the function should print the last `n` characters of the string, 
		where `n = (length_of_the_string - 1) / 2`

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-puts_half.c -o 7-puts_half
$ ./7-puts_half 
56789
$ 
```
---

+ [x] 8\. **Arrays are not pointers**

+ **[8-print_array.c](./8-print_array.c)**

* Write a function that prints `n` elements of an array of integers, followed by a new line.
	* Prototype: `void print_array(int *a, int n);` 
	* where `n` is the number of elements of the array to be printed
	* Numbers must be separated by comma, followed by a space
	* The numbers should be displayed in the same order as they are stored in the array
	* Not allowed to use `printf`

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_array.c -o 8-print_array
$ ./8-print_array 
98, 402, -198, 298, -1024
$
```
---

+ [x] 9\. **strcpy**

+ **[9-strcpy.c](9-strcpy.c)**

**Prototype**: `char *_strcpy(char *dest, char *src);`
 
* Write a function that copies the string pointed to by `src`, including the terminating null byte (`\0`), to 
	the buffer pointed to by `dest`.
	* Return value: the pointer to `dest`
 
	**FYI**: The standard library provides a similar function: `strcpy`. Run `man strcpy` to learn more.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 9-strcpy.c -o 9-strcpy
$ ./9-strcpy 
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
$ 
```
---

+ [x] 10\. **Great leaders are willing to sacrifice the numbers to save the people. 
		Poor leaders sacrifice the people to save the numbers**

+ **[100-atoi.c](./100-atoi.c)**

* Write a function that convert a string to an integer.
	* Prototype: `int _atoi(char *s);` 
	* The number in the string can be preceded by an infinite number of characters
	* You need to take into account all the `-` and `+` signs before the number
	* If there are no numbers in the string, the function must return `0` 
	* You are not allowed to use `long` 
	* You are not allowed to declare new variables of “type” array
	* You are not allowed to hard-code special values
	* We will use the `-fsanitize=signed-integer-overflow` gcc flag to compile your code.

	**FYI**: The standard library provides a similar function: `atoi`. Run `man atoi` to learn more.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi
$ ./100-atoi 
98
-402
-98
214748364
0
402
98
402
$ 
```
---

+ [x] 10\. **Don't hate the hacker, hate the code**

+ **[101-keygen.c](./101-keygen.c)**

* Create a program that generates random valid passwords for the program [101-crackme](https://github.com/holbertonschool/0x04.c).
	* You are allowed to use the standard library
	* You don’t have to pass the `betty-style` tests (you still need to pass the `betty-doc` tests)
	* man `srand`, `rand`, `time` 
	* `gdb` and `objdump` can help

```bash
$ gcc -Wall -pedantic -Werror -Wextra 101-keygen.c -o 101-keygen
$ ./101-crackme "`./101-keygen`"
Tada! **Congrats**
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
