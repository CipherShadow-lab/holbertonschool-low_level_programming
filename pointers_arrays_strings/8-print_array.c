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
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
