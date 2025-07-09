#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of memory to allocate
 * Return: Void
 */

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);

	if (memory == NULL)
	{
		exit(98);
	}
	return (memory);
}
