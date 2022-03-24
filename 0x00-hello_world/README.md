# 0x00. C - Hello, World

 ![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/212/cisfun.jpg) 

## Resources
Read or watch :
- [Everything you need to know to start with C.pdf](https://intranet.hbtn.io/rltoken/d6TBbj0HA4EvnmpqvEz68Q) 
 (You do not have to learn everything in there yet, but make sure you read it entirely first)
- [Dennis Ritchie](https://intranet.hbtn.io/rltoken/vY9KI1Ai38BUuydEfadtaA) 
- [“C” Programming Language: Brian Kernighan](https://intranet.hbtn.io/rltoken/f5nVwIVoNRrnddbX-5h5rw) 
- [Why C Programming Is Awesome](https://intranet.hbtn.io/rltoken/J7yAaPGVuPoJI4iP1DuIPw) 
- [Learning to program in C part 1](https://intranet.hbtn.io/rltoken/AicyjqLinWdA9qxKsXBKjg) 
- [Learning to program in C part 2](https://intranet.hbtn.io/rltoken/1qtDStnOrOjrVseFa3jngA) 
- [Understanding C program Compilation Process](https://intranet.hbtn.io/rltoken/qM-SOqtf8ZnGxVtVWchAfg) 
- [Betty Coding Style](https://intranet.hbtn.io/rltoken/8c-wkUvvmuA_d5s4ktmnEw) 
- [Hash-bang under the hood](https://intranet.hbtn.io/rltoken/7oODGrfLgAJJzoCbfBap3Q) 
 (Look at only after you finish consuming the other resources)
- [Linus Torvalds on C vs. C++](https://intranet.hbtn.io/rltoken/8rYFkn82I0QlSygvC0u2Jw) 
 (Look at only after you finish consuming the other resources)
man or help :
*  `gcc` 
*  `printf (3)` 
*  `puts` 
*  `putchar` 

## Requirements

### C
- Allowed editors: `vi`, `vim`, `emacs`.
- All your files will be compiled on **Ubuntu** `20.04 LTS` using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All your files should end with a new line.
- A `README.md` file at the root of the repo, containing a description of the repository.
- A `README.md` file, at the root of the folder of this project, containing a description of the project.
- There should be no errors and no warnings during compilation.
- You are not allowed to use `system`.
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) 
 and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl). 

### Shell Scripts
- Allowed editors: `vi`, `vim`, `emacs`.
- All your scripts will be tested on **Ubuntu** `20.04 LTS`
- All your scripts should be exactly two lines long (`$ wc -l file` should print 2).
- All your files should end with a new line.
- The first line of all your files should be exactly `#!/bin/bash`.

## More Info
### Betty linter
To run the Betty linter just with command `betty <filename>`:
- Go to the [Betty](https://intranet.hbtn.io/rltoken/Iz34GJJ6iQ28q3sJXRUdkQ) 
 repository.
- Clone the [repo](https://intranet.hbtn.io/rltoken/Iz34GJJ6iQ28q3sJXRUdkQ) 
 to your local machine.
- `cd` into the Betty directory.
- Install the linter with `sudo ./install.sh` 
- `emacs` or `vi` a new file called `betty`, and copy the script below:

```bash
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```

* Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`.
* Move the `betty` file into `/bin/` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/` 
You can now type `betty <filename>` to run the Betty linter!


## Tasks

+ [x] 0\. **Preprocessor**

+ [0-preprocessor](./0-preprocessor)

* `Script` that runs a `C file` through the preprocessor and save the result into another file.
	* The C file name will be saved in the variable `$CFILE`.
	* The output should be saved in the file `c`.

```bash
$ export CFILE=main.c
$ ./0-preprocessor 
$ tail c
# 942 "/usr/include/stdio.h" 3 4

# 2 "main.c" 2


# 3 "main.c"
int main(void)
{
 return (0);
}
$ 
```
---

+ [x] 1\. **Compiler**

+ [1-compiler](./1-compiler)

* `Script` that compiles a `C file` but does not link.
	* The C file name will be saved in the variable `$CFILE`.
	* The output file should be named the same as the `C file`, but with the extension `.o` instead of `.c`.
		* Example: if the C file is `main.c`, the output file should be `main.o`.

```bash
$ export CFILE=main.c
$ ./1-compiler 
$ ls
0-preprocessor  1-compiler   c   main.c   main.o

$ cat -v main.o | head
^?ELF^B^A^A^@^@^@^@^@^@^@^@^@^A^@>^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^P^B^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@@^@^K^@^H^@UHM-^IM-eM-8^@^@^@^@]M-C^@GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609^@^T^@^@^@^@^@^@^@^AzR^@^Ax^P^A^[^L^G^HM-^P^A^@^@^\^@^@^@^\^@^@^@^@^@^@^@^K^@^@^@^@A^N^PM-^F^BC^M^FF^L^G^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^D^@M-qM-^?^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^E^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^D^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^R^@^A^@^@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@main.c^@main^@^@^@^@ ^@^@^@^@^@^@^@^B^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@.symtab^@.strtab^@.shstrtab^@.text^@.data^@.bss^@.comment^@.note.GNU-stack^@.rela.eh_frame^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^[^@^@^@^A^@^@^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@!^@^@^@^A^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@'^@^@^@^H^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@,^@^@^@^A^@^@^@0^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@5^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@5^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@J^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@8^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@E^@^@^@^D^@^@^@@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M- ^A^@^@^@^@^@^@^X^@^@^@^@^@^@^@    ^@^@^@^F^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@^Q^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^A^@^@^@^@^@^@T^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^@^@^@^@^@^@^@M-X^@^@^@^@^@^@^@
^@^@^@^H^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@  ^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^P^A^@^@^@^@^@^@^M^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@
$ 

```
---

+ [x] 2\. **Assembler**

+ [2-assembler](./2-assembler)

* `Script` that generates the assembly code of a C code and save it in an output file.
	* The `C file` name will be saved in the variable `$CFILE`.
	* The output file should be named the same as the `C file`, but with the extension `.s` instead of `.c`.
		* Example: if the `C file` is  `main.c`, the output file should be `main.s`.

```bash
$ export CFILE=main.c
$ ./2-assembler
$ ls
0-preprocessor  1-compiler  2-assembler c  main.c  main.s
$ cat main.s
    .file   "main.c"
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    pushq   %rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    movq    %rsp, %rbp
    .cfi_def_cfa_register 6
    movl    $0, %eax
    popq    %rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
$ 
```
---
 
+ [x] 3\. **Name**

+ [3-name](./3-name)

* `Script` that compiles a `C file` and creates an executable named `cisfun`.
	* The `C file` name will be saved in the variable `$CFILE`.
 
```bash
$ export CFILE=main.c
$ ./3-name 
$ ls
0-preprocessor  1-compiler   2-assembler   3-name  c   cisfun  main.c
main.o  main.s
$ 
```
---

+ [x] 4\. **Hello, puts**

+ [4-puts.c](./4-puts.c)

* `C program` that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.
	* Use the function `puts`. 
	* You are not allowed to use `printf`.
	* The program should end with the value `0`.

```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out
"Programming is like building a multilingual puzzle
$ echo $?
0
$ 
```
---
 
+ [x] 5\. **Hello, printf**

+ [5-printf.c](./5-printf.c)

* `C program` that prints exactly `with proper grammar, but the outcome is a piece of art,` ,followed by a new line.
	* Use the function `printf`.
	* You are not allowed to use the function `puts` 
	* Your program should return `0`.
	* Your program should compile without warning when using the `-Wall`  `gcc`  option.

```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c
$ ./a.out 
with proper grammar, but the outcome is a piece of art,
$ echo $?
0
$ 
```
---

+ [x] 6\. **Size is not grandeur, and territory does not make a nation**

+ [6-size.c](./6-size.c)

* `C program` that prints the size of various types on the computer it is compiled and run on.
	* You should produce the exact same output as in the example.
	* Warnings are allowed.
	* Your program should return `0`. 
	* You might have to install the package `libc6-dev-i386` on your **`Linux (Vagrant)`** to test the `-m32`  `gcc` option.

```bash
$ gcc 6-size.c -m32 -o size32 2> /tmp/32
$ gcc 6-size.c -m64 -o size64 2> /tmp/64
$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
$ echo $?
0
$ 
```
---

+ [x] 7\. **What happens when you type gcc main.c**

* Blog post that explains all the steps of compilation. Use command lines and examples to illustrate.
	* Use `gcc` as the compiler.
	* Have at least one picture, at the top of the blog post.
	* Publish your blog post on Medium or LinkedIn.
	* Share your blog post at least on LinkedIn.

 Task URLs #### Add URLs here:
	[What happens when you type gcc main.c](https://atnovatio.blogspot.com/2021/10/what-happens-when-you-type-gcc-mainc.html)

---

+ [x] 8\. **Intel**

+ [100-intel](./100-intel)

* `Script` that generates the assembly code (Intel syntax) of a C code and save it in an output file.
	* The `C file` name will be saved in the variable `$CFILE`.
	* The output file should be named the same as the C file, but with the extension `.s` instead of `.c` .
		* Example: if the C file is `main.c`, the output file should be `main.s` 

```bash
$ export CFILE=main.c
$ ./100-intel 
$ cat main.s
    .file   "main.c"
    .intel_syntax noprefix
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    push    rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    mov rbp, rsp
    .cfi_def_cfa_register 6
    mov eax, 0
    pop rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
$ 
```
---

+ [x] 9\. **UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity**



* `C program` that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, 
	followed by a new line, to the standard error.
	* You are not allowed to use any functions listed in the NAME section of the man (3) `printf` or man (3) `puts` 
	* Your program should return `1`.
	* Your program should compile without any warnings when using the `-Wall`  `gcc` option.

```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c
$ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19
$ echo $?
1
$ ./quote 2> q
$ cat q
and that piece of art is useful" - Dora Korpar, 2015-10-19
$ grep printf < 101-quote.c
$ grep put < 101-quote.c
$ 
```
---
