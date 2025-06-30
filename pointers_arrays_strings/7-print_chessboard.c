#include "main.h"
#include <stdio.h>


/**
 * print_chessboard - Refer to Description
 * @a: array of char pieces
 * Description: Function prints the chessboard
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int r, c;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
		{
			putchar(a[r][c]);
		}
		putchar('\n');
	}
}
