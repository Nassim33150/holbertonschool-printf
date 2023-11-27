#include "main.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_char - Prints a char
 * @args: Argument pointer
 * Return: The number of characters printed.
 *
 */
int print_char(va_list args)
{
	_putchar (va_arg(args, int));
	return (1);
}


/**
 * print_string - Prints a string
 * @args: Argument pointer
 * Return: The number of characters printed.
 *
 */

int print_string(va_list args)
{
	int i;
	char *str;

	str = (va_arg(args, char*));
	for (i = 0; str[i]; i++)
	{

		_putchar(str[i]);
	}
		return (i);
}

/**
 * print_decimal - Prints a decimal number
 * @args: Argument pointer
 * Return: The number of characters printed.
 *
 */
int print_decimal(va_list args)
{
	int i = 0, n = 0;

	n = va_arg(args, int);
	if (n < 0)
	{
		_putchar('-');
		n = (-1) * n;
		i++;

	};
	i += print_recursion_decimal(n);
	return (i);
}

/**
 * print_integer - Prints an integer number
 * @args: Argument pointer
 * Return: The number of characters printed.
 *
 */
int print_integer(va_list args)
{
	int i = 0, n = 0;

	n = va_arg(args, int);
	if (n < 0)
	{
		_putchar('-');
		n = (-1) * n;
		i++;

	};
	i += print_recursion_integer(n);
	return (i);
}
