#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: elements of the array
 * @size: size nmemb
 * Return: returns pointer to allocated space
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int i;

	if (nmemb == 0)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	memory = malloc(nmemb * size);
	if (memory == 0)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*(memory + i) = 0;
	}
	return (memory);
}
