![Brand](https://assets.website-files.com/6105315644a26f77912a1ada/610540e8b4cd6969794fe673_Holberton_School_logo-04-04.svg)

# 0x1A. C - Hash tables
<div style="text-align: justify">
	
In this project, you should be to practice to how to use `hash function` and learn about collision and what are the main ways of
dealing with collisions in the context of a hash table in C language. </div>
<div style="text-align: justify">
Don't forget to fully meet the following development requirements. </div>


# Getting Started :running:

## Table of Contents :clipboard:

* [Requirements](#requirements-page_with_curl)
* [Files](#files-file_folder)
* [Tasks](#tasks-page_with_curl)
* [Credits](#credits)

## Requirements :page_with_curl:

### Resources

**Read or watch** :

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2f/Google_2015_logo.svg/80px-Google_2015_logo.svg.png)](https://www.google.com/search?q=what+is+a+doubly+linked+list&oq=What+is+a+doubly+linked+list&aqs=chrome.0.0i512l5j69i61j69i60.1304j0j15&sourceid=chrome&ie=UTF-8)

[![M](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e1/Logo_of_YouTube_%282015-2017%29.svg/70px-Logo_of_YouTube_%282015-2017%29.svg.png)](https://www.youtube.com/watch?v=KFbm6lkMhgw)

<div style="text-align: justify">
	
[What is a HashTable Data Structure - Introduction to Hash Tables , Part 0](https://www.youtube.com/watch?v=MfhjkfocRR0)</div>
<div style="text-align: justify">
	
[Hash function](https://en.wikipedia.org/wiki/Hash_function)</div>
<div style="text-align: justify">
	
[Hash table](https://en.wikipedia.org/wiki/Hash_table)</div>

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
	
*You are allowed to use the C standard library. 

<div style="text-align: justify">
*The prototypes of all your functions should be included in your header file called </div>

<div style="text-align: justify"> 

`hash_tables.h` </div>

<div style="text-align: justify">
	
*Don’t forget to push your `header file`.</div>
<div style="text-align: justify">
* All your header files should be include guarded. </div>
<div style="text-align: justify">
	
## Files :file_folder:

* [hash_tables.h](hash_tables.h): Header file containing definitions and prototypes for all types
and functions written for the project.

| File | Prototype |
| --- | --- |
| `struct hash_node_s` | <ul><li>`char *key`</li><li>`char *value`</li><li>`struct hash_node_s *next`</li></ul>  |
| `struct hash_table_s` | <ul><li>`unsigned long int size`</li><li>`hash_node_t **array`</li></ul>  |
| `0-hash_table_create.c` | `hash_table_t *hash_table_create(unsigned long int size);` |
| `1-djb2.c` | `unsigned long int hash_djb2(const unsigned char *str);` |
| `2-key_index.c` | `unsigned long int key_index(const unsigned char *key, unsigned long int size);` |
| `3-hash_table_set.c` | `int hash_table_set(hash_table_t *ht, const char *key, const char *value);` |
| `4-hash_table_get.c` | `char *hash_table_get(const hash_table_t *ht, const char *key);` |
| `5-hash_table_print.c` | `void hash_table_print(const hash_table_t *ht);` |
| `6-hash_table_delete.c` | `void hash_table_delete(hash_table_t *ht);` |


## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files. Provided by Holberton School.

	
## Tasks :page_with_curl:

* **0. >>> ht = {}**
  	* [0-hash_table_create.c](./0-hash_table_create.c): C function that creates a `hash_table_t`
  	hash table.
    		* If the function fails - returns `NULL`.
    		* Otherwise - returns a pointer to the new hash table.

* **1. djb2**
  	* [1-djb2.c](./1-djb2.c): C function that implements the djb2 hashing algorithm.

* **2. key -> index**
  	* [2-key_index.c](./2-key_index.c): C function that returns the index at which a key/value
  	pair should be stored in the array of a `hash_table_t` hash table.

* **3. >>> ht['betty'] = 'cool'**
  	* [3-hash_table_set.c](./3-hash_table_set.c): C function that adds an element to a
  	`hash_table_t` table.
    		* The parameter `key` cannot be an empty string.
    		* Returns `1` on success, `0` otherwise.

* **4. >>> ht['betty']**
  	* [4-hash_table_get.c](./4-hash_table_get.c): C function that retrieves a value associated
  	with a key in a `hash_table_t` hash table.
    		* If `key` cannot be matched - returns `NULL`.
    		* Otherwise - returns the value associated with `key`.

* **5. >>> print(ht)**
  	* [5-hash_table_print.c](./5-hash_table_print.c): C function that prints a `hash_table_t`
  	hash table.
    		* Prints each `key`/`value` pair in the order they appear in the array of the hash table.
    		* Does not print anything if the hash table is `NULL`.

* **6. >>> del ht**
  	* [6-hash_table_delete.c](./6-hasb_table_delete.c): C function that deletes a
  	`hash_table_t` hash table.
	
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
