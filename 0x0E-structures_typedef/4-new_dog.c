/*
 * File: 4-new_dog.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * Return: The new struct dog.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *dogge;
int i, j, k;
char *n, *o;

dogge = malloc(sizeof(struct dog));
if (dogge == NULL)
return (NULL);
for (i = 0; name[i] != '\0'; i++)
;
for (j = 0; owner[j] != '\0'; j++)
;
n = malloc(sizeof(char) * i + 1);
if (n == NULL)
{
free(dogge);
return (NULL);
}
o = malloc(sizeof(char) * j + 1);
if (o == NULL)
{
free(n);
free(dogge);
return (NULL);
}
for (k = 0; k <= i; k++)
n[k] = name[k];
for (k = 0; k <= j; k++)
o[k] = owner[k];
dogge->name = n;
dogge->age = age;
dogge->owner = o;
return (dogge);
}
