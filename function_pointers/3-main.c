#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

/**
 * main - Prints the result of simple operations.
 * @argc: Argument count
 * @argv: Argument vector - array of strings.
 * Return: 0 on success.
 */


int main(int argc, char *argv[])
{
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
