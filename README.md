

fonctionn printchar .c



A formatted output conversion C program completed as part of
the low-level programming and algorithm track at Holberton School.
The program is a pseudo- recreation of the C standard library function, printf.

Dependencies 👫
The _printf function was coded on an Ubuntu 14.04 LTS machine
with gcc version 4.8.4.

Usage 🏃
To use the _printf function, assuming the above dependencies
have been installed, compile all .c files in the repository
and include the header main.h with any main function.



function that produces output according to a format.
int _printf(const char format, ...); /* the function must return the number of
characters printed (excluding the null byte used to end output to strings)

* write output to stdout, the standard output stream
initialization of variables (i , j)

int chara_print ;
    initialization of the function that counts the number of characters

RETURN FUNCTION
lif the last known argument, in this case format, is null, the function stops
and returns (-1) otherwise the function continuous and return characters
numbers.

*while ( format && format [i] as long as the last argument ( format) exists
and not null ( format[i])
if format[i] is equal to %; the function traverses the structure looking for
the type of argument that comes after percentage if it's a character (c) or if
it's a string (s)
( while (types [j].letters != '/0')
if the argument corresponds to a character (c) display the character and
return the number of characters and therefore (1)
if (arg)corresponds to a string (s) display the string and return the number
of characters.
if %, display display % and return 1 .
if ‘c’ display the character and return 1
if ’s’ displays a string and return a character numbers
if ‘d’ display a sober and return a character number


‘c’ is a caractère
’s’ is an string
‘d’ is a nombres
‘i’ is a int

AUTHORS

This production is an collaboration between two students of holbertonschool

NASSIM ABAIDA <Nassim33150>
EDEM  DJOSSOU <edemdj>


The _printf function emulates functionality of the C standard library function
printf. This README borrows from the Linux man page printf(3).
This program was written as part of the curriculum for Holberton School.

Holberton School is a campus-based full-stack software engineering program
that prepares students for careers in the tech industry using project-based
peer learning.