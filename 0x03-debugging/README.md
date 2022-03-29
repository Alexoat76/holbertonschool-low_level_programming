<p align="center">
<img src="https://img.shields.io/badge/LINUX-darkgreen.svg"/>
<img src="https://img.shields.io/badge/Shell-ligthgreen.svg"/>
<img src="https://img.shields.io/badge/Emacs-purple.svg"/>
<img src="https://img.shields.io/badge/C-blue.svg"/>
<img src="https://img.shields.io/badge/Betty-darkred.svg"/>
<img src="https://img.shields.io/badge/Markdown-black.svg"/><br>	
</p>

---

# 0x03. C - Debugging

In this project, you learn about `debugging` in `C language`.

<p align="center">
  <img width="400"  
        src="https://c.tenor.com/zKHDose_0kYAAAAM/code-debugging.gif"
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
	
The project contains some tasks for learning about the basics of **`debugging`** in **`C programming language`**.
		
## Resources :books:
Read or watch:
	
[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2f/Google_2015_logo.svg/80px-Google_2015_logo.svg.png)](https://www.google.com/search?q=debugging+in+C&ei=jzZCYqW8NqKcwbkP-tqjqA8&ved=0ahUKEwjlv7So7en2AhUiTjABHXrtCPUQ4dUDCA4&uact=5&oq=debugging+in+C&gs_lcp=Cgdnd3Mtd2l6EAMyBQgAEIAEMgUIABCRAjIFCAAQgAQyBQgAEIAEMgUIABCABDIFCAAQgAQyBQgAEIAEMgUIABCABDIFCAAQgAQyBQgAEIAEOgQIABBHSgQIQRgASgQIRhgAUJIGWJcWYKpHaABwAngAgAGtAogBhgaSAQcwLjQuMC4xmAEAoAEByAEIwAEB&sclient=gws-wiz)

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e1/Logo_of_YouTube_%282015-2017%29.svg/70px-Logo_of_YouTube_%282015-2017%29.svg.png)](https://www.youtube.com/results?search_query=debugging+in+c+programming)
	
- **[Debugging](https://intranet.hbtn.io/rltoken/iADtJa-KkjYI56m-cQyWIw)** 
- **[Rubber Duck Debugging](https://intranet.hbtn.io/rltoken/sS_CVV32moC3tyEImNCvig)** 

Debugging is the process of finding and fixing errors in software that prevents it from running correctly. As you 
become a more advanced programmer and an industry engineer, you will learn how to use debugging tools 
such as **`gdb`** or **built-in** tools that **IDEs** have. However, it’s important to understand the concepts and 
processes of debugging manually.


## Requirements
### General
- Allowed editors: `vi`, `vim`, `emacs` 
- All your files will be compiled on `Ubuntu 20.04 LTS` using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All your files should end with a new line
- A `README.md` file at the root of the repo, containing a description of the repository
- A `README.md` file, at the root of the folder of this project (i.e. `0x03-debugging`), describing what this project is about.
- Your code should use the `Betty style`. It will be checked using **[betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl)** 
 and **[betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)**
- The prototypes of all functions should be included in the header file called `main.h` 

## More Info

### Installation :computer:
	
- Clone this repository: `https://github.com/Alexoat76/holbertonschool-low_level_programming.git`	
- Access to directory: `cd 0x03-debugging`
- `Compile` accord to `instructions` of each task.	

## Files :file_folder:

+ **[main.h](./main.h)**: Header file containing definitions and
prototypes for all types and functions written for the project.
	
### Tests :heavy_check_mark:

+ **[tests](./tests)**: Folder of test files. Provided by Holberton School.
	
## Helper File :heavy_check_mark:
	
+ **[helper_files](./helper_files)**: Folder that contains helper files for develop some tasks of the project.
	
### Executables :heavy_check_mark:

+ **[executables](./executables)**: Folder of `executables` files. Result of successful compilation and execution of functions for tasks.
	
---	
		
## Tasks

+ [x] 0\. **Multiple mains**

+ **[0-main.c](./0-main.c)**

* In most projects, we often give you only one main file to test with. For example, this main file is a test for a
   `positive_or_negative()` function similar to the one you worked with in **[an earlier C project](https://intranet.hbtn.io/rltoken/oksQRX9MFUF8saGnlIKqYw)**:

```bash
$ cat main.c
#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}
$
```

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c main.c
$ ./a.out
98 is positive
$
```

	
Based on the `main.c` file above, create a file named `0-main.c`. This file must test that the function 
`positive_or_negative()` gives the correct output when given a case of `0`.

- You are not coding the solution / function, you’re just testing it! However, you can adapt your function from
	**[0x01. C - Variables, if, else, while - Task #0](https://intranet.hbtn.io/rltoken/oksQRX9MFUF8saGnlIKqYw)** 
		to compile with this main file to test locally.
- You only need to upload `0-main.c` and `main.h` for this task. We will provide our own `positive_or_negative()` function.
- You are not allowed to add or remove lines of code, you may change only one line in this task.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main
$ ./0-main
0 is zero
$ wc -l 0-main.c
16 1-main.c
$ 
```
---
 
+ [x] 1\. **Like, comment, subscribe**

+ **[1-main.c](./1-main.c)**

* Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.
	* Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.
	* You do not have to compile with `-Wall -Werror -Wextra -pedantic` for this task.

```bash
$ cat 1-main.c
#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
$
```
Your output should look like this:

```bash
$ gcc -std=gnu89 1-main.c -o 1-main
$ ./1-main
Infinite loop incoming :(
Infinite loop avoided! \o/
$ wc -l 1-main.c
24 1-main.c
$
```
---
 
+ [x] 2\. **0 > 972?**

+ **[2-largest_number.c](./2-largest_number.c)**

* This program prints the largest of three integers.

```bash
$ cat 2-main.c
#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        int a, b, c;
        int largest;

        a = 972;
        b = -98;
        c = 0;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}
$
```

```bash
$ cat 2-largest_number.c
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}
$
```

```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c 2-main.c -o 2-main
$ ./2-main
0 is the largest number
$
```
- **? That’s definitely not right**.
* Fix the code in `2-largest_number.c` so that it correctly prints out the largest of three numbers, no matter the case.
	* Line count will not be checked for this task.

---

+ [x] 3\. **Leap year**

+ **[3-print_remaining_days.c](./3-print_remaining_days.c)**

* This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.

```bash
$ cat 3-main_a.c
#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
    int month;
    int day;
    int year;

    month = 4;
    day = 01;
    year = 1997;

    printf("Date: %02d/%02d/%04d\n", month, day, year);

    day = convert_day(month, day);

    print_remaining_days(month, day, year);

    return (0);
}
$
```

```bash
$ cat 3-convert_day.c
#include "main.h"

/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/

int convert_day(int month, int day)
{
    switch (month)
    {
        case 2:
            day = 31 + day;
            break;
        case 3:
            day = 59 + day;
            break;
        case 4:
            day = 90 + day;
            break;
        case 5:
            day = 120 + day;
            break;
        case 6:
            day = 151 + day;
            break;
        case 7:
            day = 181 + day;
            break;
        case 8:
            day = 212 + day;
            break;
        case 9:
            day = 243 + day;
            break;
        case 10:
            day = 273 + day;
            break;
        case 11:
            day = 304 + day;
            break;
        case 12:
            day = 334 + day;
            break;
        default:
            break;
    }
    return (day);
}
$
```
```bash
$ cat 3-print_remaining_days.c
#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
    {
        if (month >= 2 && day >= 60)
        {
            day++;
        }

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        if (month == 2 && day == 60)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        }
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}
$ 
```
```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_a.c -o 3-main_a 
$ ./3-main_a
Date: 04/01/1997
Day of the year: 91
Remaining days: 274
$
```
+ Output looks good for `04/01/1997`! Let’s make a new main file `3-main_b.c` to try a case that is a leap year: `02/29/2000`.
```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_b.c -o 3-main_b 
$ ./3-main_b
Date: 02/29/2000
Invalid date: 02/29/2000
$
```
**? That doesn’t seem right**.
- Fix the `print_remaining_days()` function so that the output works correctly for  all  dates and  all  leap years.
	* Line count will not be checked for this task.
	* You can assume that all test cases have valid months (i.e. the value of `month` will never be less than `1` or 
	greater than `12`) and valid days (i.e. the value of `day` will never be less than `1` or greater than `31`). 
	* You can assume that all test cases have valid month/day combinations (i.e. there will never be a June 31st 
	or November 31st, etc.), but not all month/day/year combinations are valid (i.e. February 29, 1991 or February 29, 2427).
	
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
