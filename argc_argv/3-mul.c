#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - program multiplies two numbers.
* Description: main multiplies two numbers
* @argc: number of arguments supplied to the program.
* @argv: An array of pointers to the arguments
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	else
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int total = num1 * num2;

		printf("%d\n", total);
	}
	return (0);
}
