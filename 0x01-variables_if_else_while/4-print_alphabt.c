/*
 * File: 4-print_alphabt.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints the alphabet in lowercase but except q and e.
* Return: Always 0.
*/

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
putchar (letter);
}
putchar ('\n');

return (0);
}
