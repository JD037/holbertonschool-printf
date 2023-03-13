#include "main.h"

/**
 * print_unsigned - Prints an unsigned integer
 * @list: List of arguments
 *
 * Return: Number of characters printed
 */
int print_unsigned(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int count = 0;
	unsigned int num_copy = num;
	int num_digits = 0;
	unsigned int divisor = 1;
	int i;

	if (num == 0)
		return (_putchar('0'));

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

		num -= digit * divisor;
		divisor /= 10;
	}

	return (count);
}
