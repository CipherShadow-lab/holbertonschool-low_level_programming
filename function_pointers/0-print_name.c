#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function prints a name
 * @name: name to print
 * @f: function pointer for name
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
