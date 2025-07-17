#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything
 * @format: string of characters representing arg types
 * @...: a variable number of arguments to print
 */

void print_all(const char * const format, ...)
{
	char types[] = {'c', 'i', 'f', 's'};
	char *sep = "";
	int t = 0;
	int i = 0;

	va_list args;

	va_start(args, format);

	while (format && format[i] != '\0')
	{
		t = 0;

		while (t < 4 && format[i] != types[t])
		{
			t++;
		}

		if (t < 4)
		{
			printf("%s", sep);
			sep = ", ";

			(void)(t == 0 && printf("%c", (char)va_arg(args, int)));
			(void)(t == 1 && printf("%d", va_arg(args, int)));
			(void)(t == 2 && printf("%f", (float)va_arg(args, double)));

			if (t == 3)
			{
				char *s = va_arg(args, char *);

				(void)(!s && printf("(nil)"));
				(void)(s && printf("%s", s));
			}
		}
		i++;
	}
	printf("\n");

	va_end(args);
}
