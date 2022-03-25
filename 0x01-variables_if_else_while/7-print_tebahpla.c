/*
 * File: 7-print_tebahpla.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints the lowercase alphabet in reverse
* Return: Always 0.
*/

int main(void)
{
char letter;

for (letter = 'z'; letter >= 'a'; letter--)
putchar (letter);
putchar ('\n');

return (0);
}
