# holbertonschool-printf

function that produces output according to a format.

int _printf(const char *format, ...);
/**
 the function must return the number of characters printed
 (excluding the null byte used to end output to strings)
* write output to stdout, the standard output stream

initialization of variables (i , j)

int chara_print ; initialization of the function that counts
the number of characters

if the last known argument, in this case format, is null, the function
stops and returns (-1)

*while ( format && format [i]
as long as the last argument ( format) exists and not null ( format[i])

if format[i] is equal to %; the function traverses the
structure looking for the type of argument that comes
after percentage if it's a
character (c) or if it's a string (s)

( while (types [j].letters != '/0')

if the argument corresponds to a character (c) display the character
and return the number of characters and therefore (1)

if (arg)corresponds to a string (s) display the string and return
the number of characters.

if %, display display % and return 1
.