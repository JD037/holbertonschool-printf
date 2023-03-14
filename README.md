Alton and Josh's Custom printf ~ Holberton School Tulsa 2023

This repository contains a custom implementation of printf function, _printf, which can be used to print a formatted string to the standard output.

Usage

To use this function, simply include the header file "main.h" in your source code and call the _printf function with a format string and any necessary arguments. The format string can contain zero or more directives, which are specified using the percent sign (%) followed by a specifier character.

The following specifier characters are supported:

c: prints a single character
s: prints a null-terminated string
%: prints a percent symbol
d or i: prints a signed decimal integer
u: prints an unsigned decimal integer
o: prints an unsigned octal number
x: prints an unsigned hexadecimal number (lowercase)
X: prints an unsigned hexadecimal number (uppercase)
If a specifier character is not recognized, the % character and the unrecognized character are both printed.

Exa

#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "world");
    _printf("The answer is %d.\n", 42);
    return (0);
}
Output:

Hello, world!
The answer is 42.


Manual Use:
groff -man -Tascii man_3_printf | less

Contributors

This project exists because of the following contributors:

Alton Andrews and Josh Davis
![Alton Andrews](https://github.com/account)
![Josh Davis](https://avatars.githubusercontent.com/u/120410314?v=4)
