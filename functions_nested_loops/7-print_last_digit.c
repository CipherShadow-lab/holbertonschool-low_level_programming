#include "main.h"

/**
  * print_last_digit - refer to Description
  * Description: This function returns the value of the last digit
  * @r: The number to extract the last digit from
  * Return: The value of the last digit
  */

int print_last_digit(int r)
{
	int last_digit;

	last_digit = r % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
