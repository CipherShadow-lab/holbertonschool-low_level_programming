#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - Refer to Description
 * @a: pointer to array matrix
 * @size: size of matrix
 * Description: Function prints the sum of two diagonals of a square matrix.
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
