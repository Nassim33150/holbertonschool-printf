#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>



typedef struct print
{
	char letter;
	int (*f)(va_list args);
} print_type;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);




#endif
