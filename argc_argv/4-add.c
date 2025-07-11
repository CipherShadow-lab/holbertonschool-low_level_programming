#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - program adds positive numbers
* Description: main adds positive numbers
* @argc: number of arguments supplied to the program.
* @argv: An array of pointers to the arguments
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
