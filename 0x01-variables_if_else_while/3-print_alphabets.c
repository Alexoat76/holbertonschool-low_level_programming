/*
 * File: 3-print_alphabets.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints the alphabet in lowercase and uppercase.
* Return: Always 0.
*/

int main(void)
{
char letter;
char Letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar (letter);
for (Letter = 'A'; Letter <= 'Z'; Letter++)
putchar (Letter);
putchar ('\n');

return (0);
}
