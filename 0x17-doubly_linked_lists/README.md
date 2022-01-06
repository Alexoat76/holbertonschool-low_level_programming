![Brand](https://assets.website-files.com/6105315644a26f77912a1ada/610540e8b4cd6969794fe673_Holberton_School_logo-04-04.svg)

# 0x17. C - Doubly linked lists
<div style="text-align: justify">
	
In this project, you should be to practice to how to use `Doubly Linked List` in C language. </div>
<div style="text-align: justify">
Don't forget to fully meet the following development requirements. </div>


# Getting Started :running:

## Requirements :page_with_curl:

### Resources

**Read or watch** :

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2f/Google_2015_logo.svg/80px-Google_2015_logo.svg.png)](https://en.wikipedia.org/wiki/File_descriptor)

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e1/Logo_of_YouTube_%282015-2017%29.svg/70px-Logo_of_YouTube_%282015-2017%29.svg.png)](https://www.youtube.com/watch?v=dP3N8g7h8gY)

[What is a Doubly Linked List](https://www.youtube.com/watch?v=k0pjD12bzP0)


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
	
*The only C standard library functions allowed are  `malloc`, `free` and `exit`. Any use of functions like</div>
	
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
	
*Tip: always prefer using symbolic constants `(POSIX)` vs numbers when it makes sense. For instance `read(STDIN_FILENO, ...` vs read(0, ...
<div style="text-align: justify">	


## Header File :file_folder:

* [main.h](./main.h): Header file containing definitions and prototypes for all types
and functions written for the project.

| Type/File                  | Definition/Prototype                                                             |
| -------------------------- | ---------------------------------------------------------------------------------|
| `0-read_textfile.c`        | `ssize_t read_textfile(const char *filename, size_t letters);`                   |
| `1-create_file.c`          | `int create_file(const char *filename, char *text_content);`                     |
| `2-append_text_to_file.c`  | `int append_text_to_file(const char *filename, char *text_content);`             |
	

## Tasks :page_with_curl:

* **0. Tread lightly, she is near**
  * [0-read_textfile.c](./0-read_textfile.c): Write a C function that reads a text file and prints it to the `POSIX` standard output.
	* Returns the actual `number of letters` it could `read` and `print`.
	* if the file `can not` be opened or read, return `0`. 
	* if filename is `NULL` return `0`.
	* if write fails or does not write the expected amount of bytes, return `0`.

	
* **1. Under the snow**
  * [1-create_file.c](./1-create_file.c): Create a C function that creates a file.
		* where filename is the name of the file to create and text_content is a `NULL` terminated string to write to the file
		* Returns: `1` on success, `-1` on failure (file can not be created, file can not be written, write `“fails”`, etc…)
		* The created file must have those permissions: `rw-------`. If the file already exists, do not change the permissions.
		* if the file already exists, `truncate` it
		* if filename is `NULL` return `-1`.
		* if text_content is `NULL` create an empty file.


* **2. Speak gently, she can hear**
  * [2-append_text_to_file.c](./2-append_text_to_file.c): Write a C function that appends text at the end of a file..
	* where filename is the name of the file and text_content is the `NULL` terminated string to add at the end of the file
	* Return: `1` on success and `-1` on failure
	* Do not create the file if it does not exist.
	* If filename is `NULL` return `-1`.
	* If `text_content` is `NULL`, do not add anything to the file. Return `1` if the file exists and `-1` if the file does not exist 
		or if you do not have the required permissions to write the file.

	
* **3. cp**
  * [3-cp.c](./3-cp.c): Write a C program that copies the content of a file to another file.
   	* Usage: `cp file_from file_to`
	* if the number of argument is not the correct one, exit with code `97` and print `Usage: cp file_from file_to`, followed by a new line, on the `POSIX` standard error
	* if `file_to` already exists, `truncate` it
	* if `file_from` does not exist, or if you can not read it, exit with code `98` and print `Error: Can't read from file NAME_OF_THE_FILE`, followed by a new line, 
		on the `POSIX` standard error
		* where `NAME_OF_THE_FILE` is the first argument passed to your program.
	* if you can not create or if `write` to `file_to` fails, exit with code `99` and print `Error: Can't write to NAME_OF_THE_FILE`,
		followed by a new line, on the `POSIX` standard error.
		* where `NAME_OF_THE_FILE` is the second argument passed to your program.
	* if you can not close a file descriptor , exit with code `100` and print `Error: Can't close fd FD_VALUE`, followed by a new line, 
		on the `POSIX` standard error.
		* where `FD_VALUE` is the value of the file descriptor.
	* Permissions of the created file: `rw-rw-r--`. If the file already exists, do not change the permissions
	* You must read `1,024` bytes at a time from the `file_from` to make less system calls. Use a buffer
	* You are allowed to use `dprintf`.


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
