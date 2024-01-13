# Project _Printf

_Printf is a lightweight and powerful implementation of the Printf function in C language. This library allows you to effortlessly print characters, strings, and integers, providing a simple and effective solution for formatting and displaying text content in your C programs.

Is used to write formatted output to console
Example-
    printf("Hello");    output: Hello
    printf("My name is %s", Nassim); output: My name is Nassim
    where %d is format specifier for string


## Authors

- [Edem DJOSSOU](https://www.github.com/edemdj)
- [Nassim ABAIDA](https://www.github.com/Nassim33150)



## Ressources
Authorized functions and macros
write (man 2 write) malloc (man 3 malloc) free (man 3 free) va_start (man 3 va_start) va_end (man 3 va_end) va_copy (man 3 va_copy) va_arg (man 3 va_arg)






## Usage/Examples

Prototype: int _printf(const char *format, ...); Use - General: _printf("format string", var1, var2, ...);

Examples:

Basic String: _printf("%s Nassim", "Hello");`

Output: Hello Alx
Print integers: _printf("This is an array element: arr[%d]:%c", 32, arr[32]);`

Output: This is an array element arr[32]:A
Many other specifiers and flags were added and by combinig those the _printf() function generate a different ouput. The following list are the specifiers and flags allowed.

Specifier	Output	Examples
c	Character	y
d or i	Signed integer	1024, -1024
s	String of characters	Hello Nassim
```

