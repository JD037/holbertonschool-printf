#include "main.h"

/**
 * _printf - A custom implementation of printf function
 * @format: A character string containing zero or more directives
 *
 * Return: The number of characters printed (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, count = 0;

	specifier_t specs[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			int j;
			i++;
			for (j = 0; specs[j].spec != '\0'; j++)
			{
				if (format[i] == specs[j].spec)
				{
					count += specs[j].func(args);
					break;
				}
			}
			if (specs[j].spec == '\0' && format[i] != '\0')
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
	}

	va_end(args);
	return (count);
}

/**
 * print_char - A function to print a char
 * @arg: A va_list containing the next argument of type char
 *
 * Return: The number of characters printed
 */
int print_char(va_list arg)
{
	char c = va_arg(arg, int);
	return (_putchar(c));
}

/**
 * print_str - A function to print a string
 * @arg: A va_list containing the next argument of type char *
 *
 * Return: The number of characters printed
 */
int print_str(va_list arg)
{
	char *str = va_arg(arg, char *);
	int i;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_percent - A function to print a percent symbol
 * @arg: A va_list containing no argument
 *
 * Return: The number of characters printed
 */
int print_percent(va_list arg)
{
	(void)arg;
	return (_putchar('%'));
}
