#include "main.h"
#include <stdio.h>

/**
 * swap_int - Refer to Description
 * @a: First integer to swap
 * @b: Second integer to swap
 * Description: Function that swaps the values of two integers.
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
