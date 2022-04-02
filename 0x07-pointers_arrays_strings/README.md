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
