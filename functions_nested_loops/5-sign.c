#include "main.h"

/**
  * print_sign - refer to Description
  * Description: Prints + sign if char is > zero or - if < zero
  * @n: The character to be checked
  *
  * Return: 1 if greater than zero and 0 if is zero
  */

int print_sign(int n)
{
	if (n > '0')
	{
		_putchar(43);
		return (1);
	}
	else if (n < '0')
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
