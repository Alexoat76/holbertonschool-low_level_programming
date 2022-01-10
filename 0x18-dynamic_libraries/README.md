![Brand](https://assets.website-files.com/6105315644a26f77912a1ada/610540e8b4cd6969794fe673_Holberton_School_logo-04-04.svg)

# 0x18. C - Dynamic libraries
<div style="text-align: justify">
	
In this project, you should be to practice to how to create `Dynamic libraries` in C language, and how to use them with `$LD_LIBRARY_PATH`, `nm`, `ldd`, and `ldconfig`. </div>
<div style="text-align: justify">
Don't forget to fully meet the following development requirements. </div>


# Getting Started :running:

## Requirements :page_with_curl:

### Resources

**Read or watch** :

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2f/Google_2015_logo.svg/80px-Google_2015_logo.svg.png)](https://www.google.com/webhp?hl=en&sa=X&ved=0ahUKEwi-kcza26f1AhVkRTABHTABBroQPAgI)

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e1/Logo_of_YouTube_%282015-2017%29.svg/70px-Logo_of_YouTube_%282015-2017%29.svg.png)](https://www.youtube.com/watch?v=eW5he5uFBNM)

[What is difference between Dynamic and Static library (Static and Dynamic linking)](https://www.youtube.com/watch?v=eW5he5uFBNM)


## General :page_with_curl:
<div style="text-align: justify">
* Allowed editors: vi, vim, emacs. </div>
<div style="text-align: justify">
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options: 
	
`-Wall -Werror -Wextra -pedantic -std=gnu89`. </div>
<div style="text-align: justify">
* All your files should end with a new line. </div>
<div style="text-align: justify">
	
*A `README.md` file, at the root of the folder of the project is mandatory. </div>

<div style="text-align: justify">
* Your code should use the Betty. It will be checked using</div>

`betty-style.pl` and `betty-doc.pl`.</div>

Please visit the [Betty style](https://github.com/holbertonschool/Betty/wiki) for the full specifications of Betty coding and documentation styles.

<div style="text-align: justify">
* You are not allowed to use global variables. </div>
<div style="text-align: justify">
* No more than 5 functions per file. </div>

<div style="text-align: justify">
	
*You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden. 

<div style="text-align: justify">
	
*You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c) 

<div style="text-align: justify">
	
*In the following examples,the `main.c` files are shown as examples. </div>

<div style="text-align: justify">
* You can use them to test your functions, but you don’t have to push them to
	<div style="text-align: justify">
		
   your repo ( *if you do we won’t take them into account* ).</div>
	
<div style="text-align: justify">
* We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples. </div>

<div style="text-align: justify">
		
*The prototypes of all your functions and the prototype of the function `_putchar` 
	should be included in your header file called </div>

<div style="text-align: justify"> 

`main.h` </div>

<div style="text-align: justify">
	
*Don’t forget to push your `header file`.</div>
<div style="text-align: justify">
* All your header files should be include guarded. </div>
<div style="text-align: justify">
	
## Header File :file_folder:

* [main.h](./main.h): Header file containing definitions and prototypes for all types
and functions written for the project.

## Tasks :page_with_curl:

* **0. A library is not a luxury but one of the necessities of life**
  	* [libdynamic.so](./libdynamic.so): C dynamic library containing all the functions
  	listed below:
		* `int _isupper(int c);`
		* `char *_memset(char *s, char b, unsigned int n);`
		* `char *_strcat(char *dest, char *src);`
		* `int _isdigit(int c);`
		* `char *_memcpy(char *dest, char *src, unsigned int n);`
		* `char *_strncat(char *dest, char *src, int n);`
		* `int _atoi(char *s);`
		* `char *_strchr(char *s, char c);`
		* `int _strlen(char *s);`
		* `char *_strncpy(char *dest, char *src, int n);`
		* `int _islower(int c);`
		* `void _puts(char *s);`
		* `int _strcmp(char *s1, char *s2);`
		* `unsigned int _strspn(char *s, char *accept);`
		* `int _isalpha(int c);`
		* `char *_strpbrk(char *s, char *accept);`
		* `char *_strstr(char *haystack, char *needle);`
		* `int _abs(int n);`
		* `char *_strcpy(char *dest, char *src);`
		* `int _putchar(char c);`
 
* **1. Without libraries what have we? We have no past and no future**
  	* [1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh): Bash script that creates a
  	dynamic library called `liball.so` from all the `.c` files in the current directory.

* **2. Either write something worth reading or do something worth writing**
	* Blog post to describe the differences between static and dynamic libraries. That cover:
	
		* Why using libraries in general
		* How do they work
		* How to create them (Linux only)
		* How to use them (Linux only)
		* What are the differences between static and dynamic libraries
		* What are the advantages and drawbacks of each of them
		* The posts have examples. Published on Medium or LinkedIn.
	
* **3. Let's call C functions from Python**
  	* [100-operations.so](./100-operations.so): C dynamic library containing basic C
  	mathematical operation functions that can be called from Python.
  	* Includes:
    	* `int add(int a, int b);`
    	* `int sub(int a, int b);`
    	* `int mul(int a, int b);`
    	* `int div(int a, int b);`
    	* `int mod(int a, int b);`

## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files. Provided by Holberton School.
	
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
