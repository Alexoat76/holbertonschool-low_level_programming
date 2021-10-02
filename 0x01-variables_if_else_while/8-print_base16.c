/*
 * File: 8-print_base16.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints all the numbers of base 16 in lowercase
* starting from 0
* Return: Always 0.
*/

int main(void)
{
int n;
char letter;

for (n = 0; n < 10; n++)
putchar((n % 10) + '0');
for (letter = 'a'; letter <= 'f'; letter++)
putchar(letter);
putchar('\n');

return (0);
}
