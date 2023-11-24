#include "main.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_char - Prints a char
 * @args: Argument pointer
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return(1);
}


/** print_string - Prints a string
 * @args: Argument pointer
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
		return(i);
}

int print_recursion_decimal(int n)
{
	int i = 1;
	if (n / 10)
	{
		i += print_recursion_decimal(n / 10);
	}
	_putchar(n % 10 + '0');
	return (i);
}


int print_decimal(va_list args)
{
	int i = 0, n = 0;
	n = va_arg(args, int);
	if (n < 0)
	{
		_putchar('-');
		n = (-1)* n;
		i++;

	};
	i += print_recursion_decimal(n);
	return(i);
}


