#include "main.h"
#include <stdio.h>




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
