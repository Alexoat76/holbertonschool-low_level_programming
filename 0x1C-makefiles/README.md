<p align="center">
<img src="https://img.shields.io/badge/LINUX-darkgreen.svg"/>
<img src="https://img.shields.io/badge/Emacs-purple.svg"/>
<img src="https://img.shields.io/badge/Python-blue.svg"/>
<img src="https://img.shields.io/badge/Markdown-black.svg"/><br>
</p>

---

# 0x1C. C - Makefiles

Each file in this project holds code that illustrates an **`essential concept`** of programming, specific to make to **`Makefiles`** in Unix, with a focus on **`C language`** projects.

<p align="center">
  <img width="500"
       src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/273/giphy-2.gif"
  >
</p>

# Getting Started :running:	
<div style="text-align: justify">
	
## Table of Contents :clipboard:
* [About](#about)
* [Resources](#resources-books)
* [Requirements](#requirements)
* [Tasks](#tasks)
* [Credits](#credits)

## About
The tasks in this project cover:
      
- `Makefiles` and how to `use` them.
- `Explicit` and `implicit` rules.
- `Setting` variables.

## Resources :books:
Read or watch :

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2f/Google_2015_logo.svg/80px-Google_2015_logo.svg.png)](https://www.google.com/search?q=makefile&oq=makefi&aqs=chrome.0.69i59j0i512j69i57j0i512l6j46i175i199i512.3857j0j15&sourceid=chrome&ie=UTF-8)

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e1/Logo_of_YouTube_%282015-2017%29.svg/70px-Logo_of_YouTube_%282015-2017%29.svg.png)](https://www.youtube.com/results?search_query=makefile)
      
* [Makefile](https://intranet.hbtn.io/rltoken/E3lCL-6xT3Qt_K38Tk4s_g) 

## Requirements
### General
* Allowed editors:  `vi`, `vim`, `emacs`. 
* OS: Ubuntu 20.04 LTS.
* Version of `gcc`: 9.3.0
* Version of `make`: GNU Make 4.2.1
* All your files should end with a new line.
* A `README.md` file, at the root of the folder of the project, is mandatory.
      
## More Info
### Files to use.
In the tasks, is necessary to **[these files](https://github.com/holbertonschool/0x1B.c)**
 . Compile these only.
## Tasks
+ [x] 0\. make -f 0-Makefile <br/>_**[0-Makefile](0-Makefile)**_ Requirements:
  + name of the executable: `school`.
  + rules: `all`.
    + The `all` rule builds the executable.
  + variables: none.
```bash
$ make -f 0-Makefile 
gcc main.c school.c -o school
$ ./school 
j#0000000000000000000000000000000000000
j#000000000000000000@Q**g00000000000000
j#0000000000000000*]++]4000000000000000
j#000000000000000k]++]++*N#000000000000
j#0000000000000*C+++]++]++]J*0000000000
j#00000000000@+]++qwwwp=]++++]*00000000
j#0000000000*+++]q#0000k+]+]++]4#000000
j#00000000*C+]+]w#0000*]+++]+]++0000000
j#0000we+]wW000***C++]++]+]++++40000000
j#000000000*C+]+]]+]++]++]++]+q#0000000
j#0000000*]+]+++++++]++]+++]+++J0000000
j#000000C++]=]+]+]+]++]++]+]+]+]=000000
j#00000k+]++]+++]+]++qwW0000000AgW00000
j#00000k++]++]+]+++qW#00000000000000000
j#00000A]++]++]++]++J**0000000000000000
j#000000e]++]+++]++]++]J000000000000000
j#0000000A]++]+]++]++]++000000000000000
j#000000000w]++]+]++]+qW#00000000000000
j#00000000000w]++++]*0##000000000000000
j#0000000000000Ag]+]++*0000000000000000
j#00000000000000000we]+]Q00000000000000
j#0000000000000@@+wgdA]+J00000000000000
j#0000000000000k?qwgdC=]4#0000000000000
j#00000000000000w]+]++qw#00000000000000
"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
$ 
```
---
+ [x] 1\. make -f 1-Makefile <br/>_**[1-Makefile](1-Makefile)**_ Requirements:
  + name of the executable: `school`.
  + rules: `all`.
    + `all`: builds the executable.
  + variables: `CC`, `SRC`.
    + `CC`: the compiler to be used.
    + `SRC`: the `.c` files.
---
+ [x] 2\. make -f 2-Makefile <br/>_**[2-Makefile](2-Makefile)**_ Requirements:
  + name of the executable: `school`.
  + rules: `all`.
    + `all`: builds the executable.
  + variables: `CC`, `SRC`, `OBJ`, `NAME`.
    + `CC`: the compiler to be used.
    + `SRC`: the `.c` files.
    + `OBJ`: the `.o` files.
    + `NAME`: the name of the executable.
  + The `all` rule should recompile only the updated source files.
  + A list of all the `.o` files should not be present in the Makefile.
---
+ [x] 3\. make -f 3-Makefile <br/>_**[3-Makefile](3-Makefile)**_ Requirements:
  + name of the executable: `school`.
  + rules: `all`, `clean`, `oclean`, `fclean`, `re`.
    + `all`: builds the executable.
    + `clean`: deletes all Emacs and Vim temporary files along with the executable.
    + `oclean`: deletes the object files.
    + `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files.
    + `re`: forces recompilation of all source files.
  + variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`.
    + `CC`: the compiler to be used.
    + `SRC`: the `.c` files.
    + `OBJ`: the `.o` files.
    + `NAME`: the name of the executable.
    + `RM`: the program to delete files.
  + The `all` rule should recompile only the updated source files.
  + The `clean`, `oclean`, `fclean`, `re` rules should never fail.
  + A list of all the `.o` files should not be present in the Makefile.
---
+ [x] 4\. A complete Makefile <br/>_**[4-Makefile](4-Makefile)**_ Requirements:
  + name of the executable: `school`.
  + rules: `all`, `clean`, `oclean`, `fclean`, `re`.
    + `all`: builds the executable.
    + `clean`: deletes all Emacs and Vim temporary files along with the executable.
    + `oclean`: deletes the object files.
    + `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files.
    + `re`: forces recompilation of all source files.
  + variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`.
    + `CC`: the compiler to be used.
    + `SRC`: the `.c` files.
    + `OBJ`: the `.o` files.
    + `NAME`: the name of the executable.
    + `RM`: the program to delete files.
    + `CFLAGS`: the compiler flags: `-Wall -Werror -Wextra -pedantic`.
  + The `all` rule should recompile only the updated source files.
  + The `clean`, `oclean`, `fclean`, `re` rules should never fail.
  + A list of all the `.o` files should not be present in the Makefile.
---
+ [x] 5\. Island Perimeter <br/>_**[5-island_perimeter.py](5-island_perimeter.py)**_ contains a function `def island_perimeter(grid):` that returns the perimeter of the island described in `grid`:
  + `grid` is a list of list of integers:
    + 0 represents a water zone.
    + 1 represents a land zone.
    + One cell is a square with side length 1.
    + Grid cells are connected horizontally/vertically (not diagonally).
    + Grid is rectangular, width and height don't exceed 100.
  + Grid is completely surrounded by water, and there is one island (or nothing).
  + The island doesn't have "lakes" (water inside that isn't connected to the water around the island).

```bash
$ cat 5-main.py
#!/usr/bin/python3
"""
5-main
"""
island_perimeter = __import__('5-island_perimeter').island_perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
$ 
$ ./5-main.py
12
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
