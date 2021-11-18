![Brand](https://assets.website-files.com/6105315644a26f77912a1ada/610540e8b4cd6969794fe673_Holberton_School_logo-04-04.svg)

# 0x14. C - Bit manipulation
<div style="text-align: justify">
In this project, you should be to practice the Bit manipulation in C. </div>
<div style="text-align: justify">
Don't forget to fully meet the following development requirements. </div>


# Getting Started :running:

## Requirements :page_with_curl:

### Resources

**Read or watch** :

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2f/Google_2015_logo.svg/80px-Google_2015_logo.svg.png)](https://www.google.com/webhp?q=bit+manipulation+C)

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e1/Logo_of_YouTube_%282015-2017%29.svg/70px-Logo_of_YouTube_%282015-2017%29.svg.png)](https://www.youtube.com/results?search_query=bitwise+operators+in+c)




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
* The only C standard library functions allowed are malloc, free and exit. Any use of functions like </div>

`printf, puts, calloc, realloc etc… is forbidden`.</div>

<div style="text-align: justify">
	
*You are allowed to use: `_putchar`. </div>

<div style="text-align: justify">
	
*You don’t have to push [_putchar.c](https://github.com/holbertonschool/_putchar.c) , we will use our file. If you do it won’t be taken into account. </div>

<div style="text-align: justify">
	
*In the following examples,`the main.c files are shown as examples`. </div>

<div style="text-align: justify">
* You can use them to test your functions, but you don’t have to push them to
	<div style="text-align: justify">
		
   your repo ( *if you do we won’t take them into account* ).</div>
	
<div style="text-align: justify">
* We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples. </div>
<div style="text-align: justify">
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called </div>

<div style="text-align: justify"> 

`main.h` </div>

<div style="text-align: justify">
	
*Don’t forget to push your `header file`.</div>
<div style="text-align: justify">
* All your header files should be include guarded. </div>
<div style="text-align: justify">

## Header File :file_folder:

* [lists.h](./lists.h): Header file containing definitions and prototypes for all types
and functions written for the project.

| Type/File                  | Definition/Prototype                                                             |
| -------------------------- | -------------------------------------------------------------------------------- |
| `struct listint_s`         | <ul><li>`int n`</li><li>`struct listint_s *next`</li></ul>                       |
| `typedef listint_t`        | `struct listint_s`                                                               |
| `0-binary_to_uint.c`       | `unsigned int binary_to_uint(const char *b);`                                    |
| `1-print_binary.c`         | `void print_binary(unsigned long int n);`                                        |
| `2-get_bit.c`              | `int get_bit(unsigned long int n, unsigned int index);`                          |
| `3-set_bit.c`     	     | `int set_bit(unsigned long int *n, unsigned int index);`                         |
| `4-clear_bit.c`            | `int clear_bit(unsigned long int *n, unsigned int index);`                       |
| `5-flip_bits.c`            | `unsigned int flip_bits(unsigned long int n, unsigned long int m);`              |
| `100-get_endianness.c`     | `int get_endianness(void);`                                                      |
| `101-password`             | `101-password`          								|
| `Write Blog post`          | `Blog post on how integers are stored in memory using two’s complement.`         |


## Tasks :page_with_curl:

* **0. 0**
  * [0-binary_to_uint.c](./0-binary_to_uint.c): Write a C function that converts a binary number 
	to an `unsigned int`.
	
	 *Returns the converted number, or `0` if.
	*here is one or more chars in the string `b` that is not `0` or `1`. `b` is `NULL`

* **1. 1**
  * [1-print_binary.c](./1-print_binary.c): Write a C function that prints the binary representation of a number.


* **2. 10**
  * [2-get_bit.c](./2-get_bit.c): Write a C function that returns the value of a bit at a given index.
	*where `index` is the index, starting from `0` of the bit you want to get.
		*Returns: the value of the bit at index `index` or `-1` if an error occured.

* **3. 11**
  * [3-set_bit.c](./3-set_bit.c): Write a C function that sets the value of a bit to `1` at a given index.
   	*where `index` is the index, starting from `0` of the bit you want to set.
		*Returns: `1` if it worked, or `-1` if an error occurred.

* **4. 100**
  * [4-clear_bit.c](./4-clear_bit.c): Write a function that sets the value of a bit to `0` at a given index.
    	*where `index` is the index, starting from `0` of the bit you want to set.
		*Returns: `1` if it worked, or `-1` if an error occurred.

* **5. 101**
  * [5-flip_bits.c](./5-flip_bits.c): Write a Cfunction that returns the number of bits you would need 
	to flip to get from one number to another.

* **6. Endianness**
  * [100-get_endianness.c](./100-get_endianness.c): Write a C function that checks the `endianness`.
   	*Returns: `0` if big endian, `1` if little endian.

* **7. Crackme3**
  * [7-get_nodeint.c](./7-get_nodeint.c): Find the password for this program.
   	*Save the password in the file `101-password`.
		*Your file should contain the exact password, no new line, no extra space


## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files. Provided by Holberton School.
	

## Author(s):blue_book:

### **`Alex Orland Arévalo Tribaldos`**

<3915@holbertonschool.com>

@Alexoat76 [![M](https://upload.wikimedia.org/wikipedia/commons/thumb/9/91/Octicons-mark-github.svg/25px-Octicons-mark-github.svg.png)](https://github.com/Alexoat76)
@aoarevalot [![M](https://upload.wikimedia.org/wikipedia/fr/thumb/c/c8/Twitter_Bird.svg/25px-Twitter_Bird.svg.png)](https://twitter.com/aoarevalot)
Alexoat76 [![M](https://upload.wikimedia.org/wikipedia/commons/thumb/c/ca/LinkedIn_logo_initials.png/25px-LinkedIn_logo_initials.png)](https://www.linkedin.com/in/Alexoat76/)


## Acknowledgments :mega: 

### **`Holberton School`** (*providing guidance*)
	
![Brand](https://avatars.githubusercontent.com/u/13408012?s=50&v=4)
www.holbertonschool.com [![M](https://upload.wikimedia.org/wikipedia/commons/thumb/6/65/Crystal_Clear_app_Internet_Connection_Tools.svg/30px-Crystal_Clear_app_Internet_Connection_Tools.svg.png)](https://www.holbertonschool.com/)
	support@holbertonschool.com [![M](https://upload.wikimedia.org/wikipedia/commons/thumb/4/4e/Mail_%28iOS%29.svg/25px-Mail_%28iOS%29.svg.png)](https://github.com/holbertonschool#:~:text=support%40holbertonschool.com)
