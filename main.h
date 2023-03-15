#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>

/**
 * struct specifier - Struct for printf specifiers
 * @spec: The conversion specifier
 * @func: The function associated with the specifier
 */
typedef struct specifier
{
	char spec;
	int (*func)(va_list);
} specifier_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);
int print_percent(va_list arg);
int print_int(va_list arg);
int print_int_helper(int num);
int print_unsigned(va_list arg);
int print_octal(va_list arg);
int print_hex(va_list arg);
int print_HEX(va_list arg);

#endif /* MAIN_H */

