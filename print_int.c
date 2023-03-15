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
	int num_copy = num < 0 ? -num : num;
	int num_digits = 0;
	int divisor = 1;
	int i;

	if (num == 0)
		return (_putchar('0'));

	if (num < 0)
	{
		count += _putchar('-');
		num_copy = -num;
	}

	while (num_copy / divisor > 0)
	{
		divisor *= 10;
		num_digits++;
	}

	divisor /= 10;

	for (i = 0; i < num_digits; i++)
	{
		count += _putchar('0' + num_copy / divisor);
		num_copy %= divisor;
		divisor /= 10;
	}

	return (count);
}
