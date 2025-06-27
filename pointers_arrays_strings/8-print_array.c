#include "main.h"
#include <stdio.h>


/**
 * print_array - Refer to Description
 * @a: Pointer to array
 * @n: The array to be printed
 * Description: Function prints n elements of an array of integers.
 * Return: (0) success
 */

void print_array(int *a, int n)
{
	int array;

	for (array = 0; array < n; array++)
	{
		printf("%d", a[array]);

		if (array < n - 1)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
