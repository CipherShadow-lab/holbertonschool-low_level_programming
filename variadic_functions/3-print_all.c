#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * typedef printer_func - function pointer type
 * for printing char, int, float and str
 * @args: argument pointer
 * @va_list: stores addresses of functions to print
 * specific data types
 */

typedef void (*printer_func)(va_list *args);

/**
 * print_char - Prints a char
 * @args: argument pointer to the
 * char to be printed
 */

void print_char(va_list *args)
{
	printf("%c", (char)va_arg(*args, int));
}

/**
 * print_int - Prints an int
 * @args: argument pointer to the
 * int to be printed
 */

void print_int(va_list *args)
{
	printf("%d", va_arg(*args, int));
}

/**
 * print_float - Prints a float
 * @args: argument pointer to the
 * float to be printed
 */

void print_float(va_list *args)
{
	printf("%f", va_arg(*args, double));
}

/**
 * print_string - Prints a string
 * @args: argument pointer to the
 * string to be printed
 */

void print_string(va_list *args)
{
	char *str = va_arg(*args, char *);

	if (!str)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Prints anything followed by a new line
 * @format: A string of characters representing argument types
 * @...: a variable number of arguments to be printed
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *sep = "";

	const char types[] = {'c', 'i', 'f', 's'};
	printer_func funcs[] = {print_char, print_int, print_float, print_string};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == types[j])
			{
				printf("%s", sep);
				funcs[j](&args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
