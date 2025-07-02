#include "main.h"
#include <stdio.h>

/**
* main - prints all arguments received
* Description: main prints all arguments received.
* @argc: number of arguments supplied to the program.
* @argv: An array of pointers to the arguments
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
