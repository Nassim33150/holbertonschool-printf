#include "main.h"
#include <stdio.h>



/**
 * print_recursion_decimal - Recursively print each digit of an integer.
 * @n: The digit to be printed.
 *
 * Return: The number of digits printed.
 */
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

/**
 * print_recursion_integer - Recursively print each digit of an integer.
 * @n: The integer to be printed.
 *
 * Return: The number of integers printed.
 */
int print_recursion_integer(int n)
{
	int i = 1;

	if (n / 10)
	{
		i += print_recursion_integer(n / 10);
	}
		_putchar(n % 10 + '0');
		return (i);
}
