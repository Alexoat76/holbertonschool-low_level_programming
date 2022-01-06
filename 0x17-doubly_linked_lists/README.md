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

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2f/Google_2015_logo.svg/80px-Google_2015_logo.svg.png)](https://www.google.com/search?q=what+is+a+doubly+linked+list&oq=What+is+a+doubly+linked+list&aqs=chrome.0.0i512l5j69i61j69i60.1304j0j15&sourceid=chrome&ie=UTF-8)

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e1/Logo_of_YouTube_%282015-2017%29.svg/70px-Logo_of_YouTube_%282015-2017%29.svg.png)](https://www.youtube.com/watch?v=KFbm6lkMhgw)

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
	
*The only C standard library functions allowed are  `malloc`, `free` , `printf` and `exit`. 

<div style="text-align: justify">
	
*In the following examples,the `main.c` files are shown as examples. </div>

<div style="text-align: justify">
* You can use them to test your functions, but you don’t have to push them to
	<div style="text-align: justify">
		
   your repo ( *if you do we won’t take them into account* ).</div>
	
<div style="text-align: justify">
* We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples. </div>
<div style="text-align: justify">
* The prototypes of all your functions should be included in your header file called </div>

<div style="text-align: justify"> 

`lists.h` </div>

<div style="text-align: justify">
	
*Don’t forget to push your `header file`.</div>
<div style="text-align: justify">
* All your header files should be include guarded. </div>
<div style="text-align: justify">
	
## Header File :file_folder:

* [lists.h](./lists.h): Header file containing definitions and prototypes for all types
and functions written for the project.

| Type/File           | Definition/Prototype           |
| ------------------- | ------------------------------ |
| `struct dlistint_s`    | <ul><li>`int n`</li><li>`struct dlistint_s *prev`</li><li>`struct dlistint_s *new`</li></ul> |
| `0-print_dlistint.c`   | `size_t print_dlistint(const dlistint_t *h);`                                                |
| `1-dlistint_len.c`     | `size_t dlistint_len(const dlistint_t *h);`                                                  |
| `2-add_dnodeint.c`  | `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`                                     |
| `3-add_dnodeint_end.c` | `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`                              |
| `4-free_dlistint.c`    | `void free_dlistint(dlistint_t *head);`                                                      |
| `5-get_dnodeint.c`     | `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`                   |
| `6-sum_dlistint.c`     | `int sum_dlistint(dlistint_t *head);`                                                        |
| `7-insert_dnodeint.c`  | `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`             |
| `8-delete_dnodeint.c`  | `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`                       |

## Tasks :page_with_curl:

* **0. Print list**
  	* [0-print_dlistint.c](./0-print_dlistint.c): C function that prints all the elements
  	of a doubly-linked `dlistint_t` list.
  		* Returns the number of nodes in the list.

* **1. List length**
  	* [1-dlistint_len.c](./1-dlistint_len.c): C function that returns the number of nodes in
  	a doubly-linked `dlistint_t` list.

* **2. Add node**
  	* [2-add_dnodeint.c](./2-add_dnodeint.c): C function that adds a new node at the
  	beginning of a doubly-linked `dlistint_t` list.
  		* If the function fails - returns `NULL`.
  		* Otherwise - returns the address of the new element.

* **3. Add node at the end**
  	* [3-add_dnodeint_end.c](./3-add_dnodeint_end.c): C function that adds a new
  	node at the end of a doubly-linked `dlistint_t` list.
  		* If the function fails - returns `NULL`.
  		* Otherwise - returns the address of the new element.

* **4. Free list**
  	* [4-free_dlistint.c](./4-free_dlistint.c): C function that frees a
  	doubly-linked `dlistint_t` list.

* **5. Get node at index**
  	* [5-get_dnodeint.c](./5-get_dnodeint.c): C function that locates a given node of a
  	doubly-linked `dlistint_t` list.
  		* The parameter `index` is the index of the node to locate - indices start at `0`.
  		* If the node does not exist - returns `NULL`.
  		* Otherwise - returns the address of the located node.

* **6. Sum list**
  	* [6-sum_dlistint.c](./6-sum_dlistint.c): C function that sums all the data (`n`)
  	of a doubly-linked `dlistint_t` list.
  		* If the list is empty - returns `0`.
  		* Otherwise - returns the sum of all the data (`n`).

* **7. Insert at index**
  	* [7-insert_dnodeint.c](./7-insert_dnodeint.c): C function that inserts a new node at a
  	given position.
  		* The parameter `idx` is the index of the list where the new node should
  		be added - indices start at `0`.
  		* If the function fails - returns `NULL`.
  		* Otherwise - returns the address of the new element.
  		* Requires compilation with functions defined in [2-add_dnodeint.c](./2-add_dnodeint.c)
  		and [3-add_dnodeint_end.c](./3-add_dnodeint_end.c).

* **8. Delete at index**
  	* [8-delete_dnodeint.c](./8-delete_dnodeint.c): C function that deletes the node at
  	index `index` of a doubly-linked `dlistint_t` list.
  		* The paramter `index` is the index of the node to delete - indices start at `0`.
  		* If the function fails - returns `-1`.
  		* Otherwise - returns `1`.

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
