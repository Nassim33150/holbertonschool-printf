#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - Produce output according to a format as described below.
 * @format: A format string containing format specifiers.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	print_type types[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_decimal},
		{'i', print_integer},
		{'\0', NULL}
	};
	va_list args;
	int chara_print = 0, i = 0, j = 0;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (types[j].letter != '\0')
			{
				if (types[j].letter == format[i])
				{
					chara_print += types[j].f(args);
				}
				j++;
			}
			if (format[i] == '%')
			{
				_putchar('%');
				chara_print++;
			}
		}
		else
		{
			_putchar(format[i]);
			chara_print++;
		}
		i++;
	}
		va_end(args);
		return (chara_print);
}
