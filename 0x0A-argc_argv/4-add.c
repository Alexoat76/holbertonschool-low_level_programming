/*
 * File: 4-add.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
*/

int main(int argc, char *argv[])
{
int i;
long sum;
for (i = 1, sum = 0; i < argc; i++)
{
if (*argv[i] == 0 || atoi(argv[i]) <= 0)
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%ld\n", sum);
return (0);
}
