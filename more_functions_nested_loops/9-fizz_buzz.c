#include "main.h"
#include <stdio.h>

/**
 * Description: main - Prints Fizz, Buzz and FizzBuzz
 *
 * Return: (0) success
 */

int main(void)
{
	int c;
	char f[5] = "Fizz";
	char b[5] = "Buzz";

	for (c = 1; c <= 100; c++)
	{
		if (c % 3 == 0 && c % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (c % 3 == 0)
		{
			printf("%s ", f);
		}
		else if (c % 5 == 0)
		{
			printf("%s ", b);
		}
		else
		{
			printf("%d ", c);
		}
	}
	return (0);
}
