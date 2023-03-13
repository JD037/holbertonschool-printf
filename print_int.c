#include "main.h"

/**
 * print_int - A function to print a decimal integer
 * @arg: A va_list containing the next argument of type int
 *
 * Return: The number of characters printed
 */
int print_int(va_list arg)
{
	int num = va_arg(arg, int);
	int count = 0;
	int num_copy = num;
	int num_digits = 0;
	int divisor = 1;
	int i;

	if (num == 0)
		return (_putchar('0'));

	if (num < 0)
	{
		count += _putchar('-');
		num = -num;
	}

	while (num_copy != 0)
	{
		num_copy /= 10;
		num_digits++;
	}

	for (i = 1; i < num_digits; i++)
		divisor *= 10;

	while (divisor != 0)
	{
		int digit = num / divisor;

		count += _putchar(digit + '0');
		num %= divisor;
		divisor /= 10;
	}

	return (count);
}

