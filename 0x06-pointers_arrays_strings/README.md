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

In this project, you continue to learn about `pointers`, `arrays` and `strings` in `C language`.

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
	
The project contains some tasks for continue to learning about `Pointers`, `arrays` and `strings` in **`C language`**.

## Resources :books:
Read or watch:
	
[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2f/Google_2015_logo.svg/80px-Google_2015_logo.svg.png)]()

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e1/Logo_of_YouTube_%282015-2017%29.svg/70px-Logo_of_YouTube_%282015-2017%29.svg.png)]()

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
- Access to directory: `cd 0x06-pointers_arrays_strings`
- `Compile` accord to `instructions` of each task.	

## Files :file_folder:

+ **[main.h](./main.h)**: Header file containing definitions and
prototypes for all types and functions written for the project.
	
| File                 | Prototype                                                      |
| -------------------- | -------------------------------------------------------------- |
| `0-strcat.c`         | `char *_strcat(char *dest, char *src);`                        |
| `1-strncat.c`        | `char *_strncat(char *dest, char *src, int n);`                |
| `2-strncpy.c`        | `char *_strncpy(char *dest, char *src, int n);`                |
| `3-strcmp.c`         | `int _strcmp(char *s1, char *s2);`                             |
| `4-rev_array.c`      | `void reverse_array(int *a, int n);`                           |
| `5-string_toupper.c` | `char *string_toupper(char *);`                                |
| `6-cap_string.c`     | `char *cap_string(char *);`                                    |
| `7-leet.c`           | `char *leet(char *);`                                          |
| `100-rot13.c`        | `char *rot13(char *);`                                         |
| `101-print_number.c` | `void print_number(int n);`                                    |
| `103-infinite_add.c` | `char *infinite_add(char *n1, char *n2, char *r, int size_r);` |
| `104-print_buffer.c` | `void print_buffer(char *b, int size);`                        |
	
### Tests :heavy_check_mark:

+ **[tests](./tests)**: Folder of test files. Provided by Holberton School.
	
## Helper File :heavy_check_mark:

+ **[_putchar](https://github.com/Alexoat76/holbertonschool-low_level_programming/blob/main/0x02-functions_nested_loops/_putchar.c)**: C function that writes a character to `stdout`.
			
### Executables :heavy_check_mark:

+ **[executables](./executables)**: Folder of `executables` files. Result of successful compilation and execution of functions for tasks.
	
---

## Tasks

# 0x06. C - More pointers, arrays and strings

## Tasks
+ [x] 0\. **strcat**

+ **[0-strcat.c](./0-strcat.c)**

* Write a function that concatenates two strings.
	* Prototype: `char *_strcat(char *dest, char *src);` 
	* This function appends the `src`  string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, 
		and then adds a terminating null byte
	* Returns a pointer to the resulting string `dest`
 
	**FYI**: The standard library provides a similar function: `strcat`. Run `man strcat` to learn more.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-strcat.c -o 0-strcat
$ ./0-strcat 
Hello 
World!
Hello World!
World!
Hello World!
$ 
```
---

+ [x] 1\. **strncat**

+ **[1-strncat.c](./1-strncat.c)**

* Write a function that concatenates two strings.
	* Prototype: `char *_strncat(char *dest, char *src, int n);` 
	* The `_strncat` function is similar to the `_strcat` function, except that* it will use at most `n` bytes from `src`; and
	* `src` does not need to be null-terminated if it contains `n` or more bytes
	* Return a pointer to the resulting string `dest`
 
	**FYI**: The standard library provides a similar function: `strncat` . Run `man strncat` to learn more.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strncat.c -o 1-strncat
$ ./1-strncat 
Hello 
World!
Hello W
World!
Hello W
Hello WWorld!
World!
Hello WWorld!
$ 
```
---

+ [x] 1\. **strncpy**

+ **[2-strncpy.c](./2-strncpy.c)**

* Write a function that copies a string.
	* Prototype: `char *_strncpy(char *dest, char *src, int n);` 
	* Your function should work exactly like `strncpy`

	**FYI**: The standard library provides a similar function: `strncpy`. Run `man strncpy` to learn more.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strncpy.c -o 2-strncpy
$ ./2-strncpy 
*************************************************************************************************
First********************************************************************************************
First********************************************************************************************
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
0x46 0x69 0x72 0x73 0x74 0x2c 0x20 0x73 0x6f 0x6c
0x76 0x65 0x20 0x74 0x68 0x65 0x20 0x70 0x72 0x6f
0x62 0x6c 0x65 0x6d 0x2e 0x20 0x54 0x68 0x65 0x6e
0x2c 0x20 0x77 0x72 0x69 0x74 0x65 0x20 0x74 0x68
0x65 0x20 0x63 0x6f 0x64 0x65 0x0a 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x00
$ 
```
---

+ [x] 3\. **strcmp**

+ **[3-strcmp.c](./3-strcmp.c)**

* Write a function that compares two strings.
	* Prototype: `int _strcmp(char *s1, char *s2);` 
	* Your function should work exactly like `strcmp`
 
	**FYI**: The standard library provides a similar function: `strcmp`. Run `man strcmp` to learn more.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strcmp.c -o 3-strcmp
$ ./3-strcmp 
-15
15
0
$ 
```
---

+ [x] 4\. **I am a kind of paranoid in reverse. I suspect people of plotting to make me happy**

+ **[4-rev_array.c](./4-rev_array.c)**

* Write a function that reverses the content of an array of integers.
	* Prototype: `void reverse_array(int *a, int n);` 
	* Where `n` is the number of elements of the array

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-rev_array.c -o 4-rev_array
$ ./4-rev_array 
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337
1337, 1024, 98, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
$ 
```
---

+ [x] 5\. **Always look up**

+ **[5-string_toupper.c](./5-string_toupper.c)**

* Write a function that changes all lowercase letters of a string to uppercase.
	* Prototype: `char *string_toupper(char *);`

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-string_toupper.c -o 5-string_toupper
$ ./5-string_toupper 
LOOK UP!
LOOK UP!
$ 
```
---

+ [x] 6\. **Expect the best. Prepare for the worst. Capitalize on what comes**

+ **[6-cap_string.c](./6-cap_string.c)**

* Write a function that capitalizes all words of a string.
	* Prototype: `char *cap_string(char *);` 
	* Separators of words: space, tabulation, new line, `,`, `;`, `.`, `!`, `?`, `"`, `(`,`)`, `{`, and `}`

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-cap_string.c -o 6-cap
$ ./6-cap 
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World Hello World.Hello World
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World Hello World.Hello World
$ 
```
---
 
+ [x] 7\. **Mozart composed his music not for the elite, but for everybody**

+ **[7-leet.c](./7-leet.c)**

* Write a function that encodes a string into  [1337](https://intranet.hbtn.io/rltoken/HDZQ5imXboSDnMXO9P0-Tg).

	* Letters `a` and `A` should be replaced by `4` 
	* Letters `e` and `E` should be replaced by `3` 
	* Letters `o` and `O` should be replaced by `0` 
	* Letters `t` and `T` should be replaced by `7` 
	* Letters `l` and `L` should be replaced by `1` 
	* Prototype: `char *leet(char *);` 
	* Only use one `if` in your code
	* Only use two loops in your code
	* Not allowed to use `switch` 
	* Not allowed to use any ternary operation

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 7-leet.c -o 7-1337
$ ./7-1337 
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
$ 
```
---

+ [x] 8\. **rot13**

+ **[100-rot13.c](./100-rot13.c)**

* Write a function that encodes a string using [rot13](https://intranet.hbtn.io/rltoken/IFaBd0QrK-h50gV7IoW9iQ).

	* Prototype: `char *rot13(char *);` 
	* Only use `if` statement once in your code
	* YNot allowed to use `else if` 
	* Not allowed to use `else` 
	* Only use two loops in your code
	* Not allowed to use `switch` 
	* Not allowed to use any ternary operation

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-rot13.c -o 100-rot13
$ ./100-rot13 
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.
------------------------------------
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
$ 
```
---

+ [x] 9\. **Numbers have life; they're not just symbols on paper**

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

+ [x] 10\. **A dream doesn't become reality through magic; it takes sweat, 
		determination and hard work**

+ **[102-magic.c](./102-magic.c)**

 Add one line to **[this code](https://github.com/holbertonschool/make_magic_happen/blob/master/magic.c)**, 
	so that the program prints `a[2] = 98`, followed by a new line.

	* Not allowed to use the variable `a` in your new line of code
	* Not allowed to modify the variable `p` 
	* Only write one statement
	* Not allowed to use `,` 
	* Not allowed to code anything else than the line of expected line of code at the expected line
	* The code should be written at line 19, before the `;` 
	* Do not remove anything from the initial code (not even the comments)
	* and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)
	* Allowed to use the standard library
---

+ [x] 11\. **It is the addition of strangeness to beauty that constitutes the romantic character in art**

+ **[103-infinite_add.c](./103-infinite_add.c)**

* Write a function that adds two numbers.
	* Prototype: `char *infinite_add(char *n1, char *n2, char *r, int size_r);` 
	* Where `n1` and `n2` are the two numbers
	* `r` is the buffer that the function will use to store the result
	* `size_r` is the buffer size
	* The function returns a pointer to the result
	* Assume that always get positive numbers, or `0` 
	* Assume that there will be only digits in the strings `n1` and `n2` 
	* `n1` and `n2` will never be empty
	* If the result can not be stored in `r` the function must return `0` 

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-main.c 103-infinite_add.c -o 103-add
$ ./103-add 
1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458 + 
9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346 = 
10269358555905271602506489145024737320744338932474201434349082690912722437209719106353804
Error
Error
999999999 + 1 = 1000000000
$ 
```
---

+ [x] 12\. **Noise is a buffer, more effective than cubicles or booth walls**

+ **[104-print_buffer.c](./104-print_buffer.c)**

* Write a function that prints a buffer.
	* Prototype: ` void print_buffer(char *b, int size);` 
	* The function must print the content of `size` bytes of the buffer pointed by `b` 
	* The output should print 10 bytes per line
	* Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with `0` 
	* Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
	* Each line shows the content of the buffer.  If the byte is a printable character, print the letter, if not, print `.` 
	* Each line ends with a new line `\n` 
	* If `size` is 0 or less, the output should be a new line only `\n` 
	* You are allowed to use the standard library
	* The output should look like the following example, and formatted exactly the same way:

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 104-main.c 104-print_buffer.c -o 104-buffer
$ ./104-buffer 
This is a string!
---------------------------------
00000000: 5468 6973 2069 7320 6120 This is a 
0000000a: 7374 7269 6e67 2100 416e string!.An
00000014: 6420 7468 6973 2069 7320 d this is 
0000001e: 7468 6520 7265 7374 206f the rest o
00000028: 6620 7468 6520 2362 7566 f the #buf
00000032: 6665 7220 3a29 0102 0304 fer :)....
0000003c: 0506 0723 6369 7366 756e ...#cisfun
00000046: 0a00 0000 0000 0000 0000 ..........
00000050: 0000 0000 0000 0000 0000 ..........
0000005a: 2021 3456 2370 6f69 6e74  !4V#point
00000064: 6572 7361 7265 6675 6e20 ersarefun 
0000006e: 2369 6e66 6572 6e75 6d69 #infernumi
00000078: 7366 756e 0a00           sfun..
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
