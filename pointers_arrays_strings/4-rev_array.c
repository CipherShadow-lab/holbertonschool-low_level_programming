#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Refer to Description
 * @a: array
 * @n: number of elements in the array
 * Description: Function prints an array in reverse.
 * Return:
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
