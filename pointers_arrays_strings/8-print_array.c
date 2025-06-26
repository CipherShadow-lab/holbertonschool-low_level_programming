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
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
