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
