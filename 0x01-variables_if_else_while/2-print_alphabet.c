/*
 * File: 2-print_alphabet.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints the alphabet in lowercase
* Return: Always 0.
*/

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar (letter);
putchar ('\n');

return (0);
}
