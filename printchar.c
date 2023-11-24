#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
	print_type types[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_decimal},
		{'\0', NULL}
	};

	va_list args;
	int chara_print = 0, i = 0, j = 0;

	if(format == NULL)
	{
		return (-1);
	}

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
