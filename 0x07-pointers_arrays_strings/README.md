<p align="center">
<img src="https://img.shields.io/badge/LINUX-darkgreen.svg"/>
<img src="https://img.shields.io/badge/Shell-ligthgreen.svg"/>
<img src="https://img.shields.io/badge/Emacs-purple.svg"/>
<img src="https://img.shields.io/badge/C-blue.svg"/>
<img src="https://img.shields.io/badge/Betty-darkred.svg"/>
<img src="https://img.shields.io/badge/Markdown-black.svg"/><br>	
</p>

---

# 0x07. C - Even more pointers, arrays and strings

In this project, you continue to learn about `pointers`, `arrays` and `strings` in `C language`.

<p align="center">
  <img width="275"  
        src="https://www.freecodecamp.org/news/content/images/2020/08/1534533aefc96880ba542070037d147b.gif"
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
	
The project contains some tasks for continue to learning about `Pointers`, `arrays` and `strings` in **`C language`**.

## Resources :books:
Read or watch:
	
[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2f/Google_2015_logo.svg/80px-Google_2015_logo.svg.png)](https://www.google.com/search?q=pointer+to+pointer+in+c&oq=pointer+to+pointer+&aqs=chrome.1.69i57j0i512l9.11025j0j15&sourceid=chrome&ie=UTF-8)

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e1/Logo_of_YouTube_%282015-2017%29.svg/70px-Logo_of_YouTube_%282015-2017%29.svg.png)](https://www.youtube.com/results?search_query=pointer+to+pointer+in+c)

- [Pointers and arrays](https://intranet.hbtn.io/concepts/60)
- [C - Pointer to Pointer](https://intranet.hbtn.io/rltoken/97ic1ots5Y44UW4c5HBtRQ) 
- [C – Pointer to Pointer with example](https://intranet.hbtn.io/rltoken/SLQf1I04zyLrA0OYFgXzlg) 
- [Multi-dimensional Arrays in C](https://intranet.hbtn.io/rltoken/OINOASSTk6-D9PqX2oZZYw) 
- [Two dimensional (2D) arrays in C programming with example](https://intranet.hbtn.io/rltoken/czf9xxN9_8ISUNWTsLfBcw) 

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
- Access to directory: `cd 0x07-pointers_arrays_strings`
- `Compile` accord to `instructions` of each task.	

## Files :file_folder:

+ **[main.h](./main.h)**: Header file containing definitions and
prototypes for all types and functions written for the project.
	
| File                    | Prototype                                               |
| ----------------------- | ------------------------------------------------------- |
| `0-memset.c`            | `char *_memset(char *s, char b, unsigned int n);`       |
| `1-memcpy.c`            | `char *_memcpy(char *dest, char *src, unsigned int n);` |
| `2-strchr.c`            | `char *_strchr(char *s, char c);`                       |
| `3-strspn.c`            | `unsigned int _strspn(char *s, char *accept);`          |
| `4-strpbrk.c`           | `char *_strpbrk(char *s, char *accept);`                |
| `5-strstr.c`            | `char *_strstr(char *haystack, char *needle);`          |
| `7-print_chessboard.c`  | `void print_chessboard(char (*a)[8]);`                  |
| `8-print_diagsums.c`    | `void print_diagsums(int *a, int size);`                |
| `100-set_string.c`      | `void set_string(char **s, char *to);`                  |

### Tests :heavy_check_mark:

+ **[tests](./tests)**: Folder of test files. Provided by Holberton School.
	
## Helper File :heavy_check_mark:

+ **[_putchar](https://github.com/Alexoat76/holbertonschool-low_level_programming/blob/main/0x02-functions_nested_loops/_putchar.c)**: C function that writes a character to `stdout`.
			
### Executables :heavy_check_mark:

+ **[executables](./executables)**: Folder of `executables` files. Result of successful compilation and execution of functions for tasks.
	
---

## Tasks

+ [x] 0\. **memset**

+ **[0-memset.c](./0-memset.c)**

* Write a function that fills memory with a constant byte.
	* Prototype: `char *_memset(char *s, char b, unsigned int n);` 
	* The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b` 
	* Returns a pointer to the memory area `s` 

	**FYI**: The standard library provides a similar function: `memset`. Run `man memset` to learn more.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-memset.c -o 0-memset
$ ./0-memset 
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
-------------------------------------------------
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x00 0x00 0x00
$ 
```
---

+ [x] 1\. **memcpy**

+ **[1-memcpy.c](./1-memcpy.c)**

* Write a function that copies memory area.
	* Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);` 
	* The `_memcpy()` function copies `n` bytes from memory area `src` to memory area `dest` 
	* Returns a pointer to `dest`

	**FYI**: The standard library provides a similar function: `memcpy`. Run `man memcpy` to learn more.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-memcpy.c -o 1-memcpy
$ ./1-memcpy 
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
-------------------------------------------------
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x01 0x02 0x03 0x04 0x05 0x07 0x07 0x08 0x09 0x0a
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
$ 
```
---

+ [x] 2\. **strchr**

+ **[2-strchr.c](./2-strchr.c)**

* Write a function that locates a character in a string.
	* Prototype: `char *_strchr(char *s, char c);` 
	* Returns a pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not found

	**FYI**: The standard library provides a similar function: `strchr`. Run `man strchr` to learn more.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strchr.c -o 2-strchr
$ ./2-strchr 
llo
$ 
```
---

+ [x] 3\. **strspn**

+ **[3-strspn.c](./3-strspn.c)**

* Write a function that gets the length of a prefix substring.
	* Prototype: `unsigned int _strspn(char *s, char *accept);` 
	* Returns the number of bytes in the initial segment of `s` which consist only of bytes from `accept`

	**FYI**: The standard library provides a similar function: `strspn`. Run `man strspn` to learn more.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strspn.c -o 3-strspn
$ ./3-strspn 
5
$ 
```
---

+ [x] 4\. **strpbrk**

+ **[4-strpbrk.c](./4-strpbrk.c)**

* Write a function that searches a string for any of a set of bytes.
	* Prototype: `char *_strpbrk(char *s, char *accept);` 
	* The `_strpbrk()` function locates the first occurrence in the string `s` of any of the bytes in the string `accept` 
	* Returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found

	**FYI**: The standard library provides a similar function: `strpbrk`. Run `man strpbrk` to learn more.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-strpbrk.c -o 4-strpbrk
$ ./4-strpbrk 
llo, world
$ 
```
---
 
+ [x] 5\. **strstr**

+ **[5-strstr.c](./5-strstr.c)**

* Write a function that locates a substring.
	* Prototype: `char *_strstr(char *haystack, char *needle);` 
	* The `_strstr()` function finds the first occurrence of the substring `needle` in the string `haystack`. 
		The terminating null bytes (`\0`) are not compared
	* Returns a pointer to the beginning of the located substring, or  ` NULL `  if the substring is not found.

	**FYI**: The standard library provides a similar function: `strstr`. Run `man strstr` to learn more.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-strstr.c -o 5-strstr
$ ./5-strstr 
world
$ 
```
---

+ [x] 6\. **Chess is mental torture**

+ **[7-print_chessboard.c](./7-print_chessboard.c)**

* Write a function that prints the chessboard.
	* Prototype: `void print_chessboard(char (*a)[8]);` 

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_chessboard.c -o 7-print_chessboard
$ ./7-print_chessboard 
rkbqkbkr
pppppppp




PPPPPPPP
RKBQKBKR
$ 
```
---
 
+ [x] 7\. **The line of life is a ragged diagonal between duty and desire**

+ **[8-print_diagsums.c](./8-print_diagsums.c)**

* Write a function that prints the sum of the two diagonals of a square matrix of integers.
	* Prototype: `void print_diagsums(int *a, int size);` 
	* Format: see example
	* Allowed to use the standard library

	**Note** that in the following example we are casting an `int[][]` into an `int*`. 
		This is not something you should do. The goal here is to make sure you understand how an array 
		of array is stored in memory.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_diagsums.c -o 8-print_diagsums
$ ./8-print_diagsums 
113, 1016
1214556093, 1137318
$ 
```
---

+ [x] 8\. **Double pointer, double fun**

+ **[100-set_string.c](./100-set_string.c)**

* Write a function that sets the value of a pointer to a char.
	* Prototype: `void set_string(char **s, char *to);` 

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-set_string.c -o 100-set_string
$ ./100-set_string 
Bob Dylan, Robert Allen
Bob Dylan, Bob Dylan
$ 
```
---

+ [x] 9\. **My primary goal of hacking was the intellectual curiosity, the seduction of adventure**

+ **[101-crackme_password](./101-crackme_password)**

* Create a file that contains the password for the **[crackme2](https://github.com/holbertonschool/0x06.c)**
   executable.
* The file should contain the exact password, no new line, no extra space
* `ltrace`, `ldd`, `gdb` and `objdump` can help
* You may need to install the `openssl` library to run the `crakme2` program: `sudo apt install libssl-dev`
 
* Edit the source list `sudo nano /etc/apt/sources.list` to add the following line: 
	`deb http://security.ubuntu.com/ubuntu xenial-security main` Then `sudo apt update` and `sudo apt install libssl1.0.0` 


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
