#include "main.h"
#include <stdio.h>

/**
* main - prints the number of arguments passed into it.
* Description: main prints the number of arguments passed into it
* @argc: number of arguments supplied to the program.
* @argv: An array of pointers to the arguments
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
