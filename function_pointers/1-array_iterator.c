#include "function_pointers.h"
#include <stdio.h>


/**
 * array_iterator - function executes another function
 * to print each element of an array.
 * @array: array to print
 * @size: size of array
 * @action: function that is called on to print the array
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL || action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
