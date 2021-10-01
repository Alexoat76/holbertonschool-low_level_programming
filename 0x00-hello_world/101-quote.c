/*
 * File: 101-quote.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include <stdio.h>
#include <unistd.h>

/**
 * Description: Prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19
 *
 * Return: 1
 */

int main(void)
{
write(1, "and prints exactly and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
return (1);
}
