#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - finds length of string
 * @str: length of string to be copied
 * Return: length of string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copies string pointe to src
 * @src: source string
 * @dest: destination to copy string to
 * Return: pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *namecopy;
	char *ownercopy;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	namecopy = malloc(_strlen(name) + 1);
	if (namecopy == NULL)
		free(d);
	return (NULL);

	_strcopy(namecopy, name);

	ownercopy = malloc(_strlen(owner) + 1);
	if (ownercopy == NULL)
		free(d);
	free(namecopy);
	return (NULL);

	_strcopy(ownercopy, owner);

	d->name = namecopy;
	d->age = age;
	d->owner = ownercopy;

	return (d);
}
