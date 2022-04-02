/*
 * File: 6-cap_string.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* cap_string - Capitalizes all words of a string.
* @c: string to capitalize.
* Return: Address to c.
*/

char *cap_string(char *c)
{
	int i = 0, j;
	char x[] = " \t\n,;.!?\"(){}";

	while (*(c + i))
	{
		if (*(c + i) >= 'a' && *(c + i) <= 'z')
		{
			if (i == 0)
				*(c + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (x[j] == *(c + i - 1))
						*(c + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (c);
}
