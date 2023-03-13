#include "main.h"

/**
 * print_octal - Prints an unsigned int argument in octal format
 * @arg: A va_list containing the unsigned int to print
 *
 * Return: The number of characters printed
 */
int print_octal(va_list arg)
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
		num_copy /= 8;
		num_digits++;
	}

	for (i = 1; i < num_digits; i++)
		divisor *= 8;

	while (divisor != 0)
	{
		int digit = num / divisor;

		count += _putchar(digit + '0');

		num -= digit * divisor;
		divisor /= 8;
	}

	return (count);
}

/**
 * print_hex - prints an unsigned int in hexadecimal
 * @arg: the argument to print (unsigned int)
 *
 * Return: the number of characters printed
 */
int print_hex(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int count = 0;
	char hex_chars[] = "0123456789abcdef";
	unsigned int num_copy = num;
	int num_digits = 0;
	unsigned int divisor = 1;
	int i;

	if (num == 0)
		return (_putchar('0'));

	while (num_copy != 0)
	{
		num_copy /= 16;
		num_digits++;
	}

	for (i = 1; i < num_digits; i++)
		divisor *= 16;

	while (divisor != 0)
	{
		int digit = num / divisor;

		count += _putchar(hex_chars[digit]);

		num -= digit * divisor;
		divisor /= 16;
	}

	return (count);
}

/**
 * print_HEX - prints an unsigned int in uppercase hexadecimal
 * @arg: the argument to print (unsigned int)
 *
 * Return: the number of characters printed
 */
int print_HEX(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int count = 0;
	char hex_chars[] = "0123456789ABCDEF";
	unsigned int num_copy = num;
	int num_digits = 0;
	unsigned int divisor = 1;
	int i;

	if (num == 0)
		return (_putchar('0'));

	while (num_copy != 0)
	{
		num_copy /= 16;
		num_digits++;
	}

	for (i = 1; i < num_digits; i++)
		divisor *= 16;

	while (divisor != 0)
	{
		int digit = num / divisor;

		count += _putchar(hex_chars[digit]);

		num -= digit * divisor;
		divisor /= 16;
	}

	return (count);
}
