#include "function_pointers.h"
#include <stdio.h>


/**
 * int_index - Function searches for an integer
 * @array: array to search for integer
 * @size: number of elements in the array
 * @cmp: pointer to the function to compare values
 * Return: index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
