/*
 * File: 3-mul.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: 0 if no errors, else 1. and print:'Error'.
*/

int main(int argc, char *argv[])
{
int multi = 0;
if (argc == 3)
{
multi += atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", multi);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
