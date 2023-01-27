#include "main.h"

/**
 * parse_int - parse and prints an int
 * @arg: a va_arg that contains the int
 * @n_chars_printed: number of chars printed
 * Return: Number of chars printed
 */
int parse_int(va_list arg, int n_chars_printed)
{
	int base = 10;
	int val = va_arg(arg, int);

	n_chars_printed = print_val(val, n_chars_printed, base);
	return (n_chars_printed);
}

/**
 * parse_oct - parse and prints an octa int
 * @arg: a va_arg that contains the octa int
 * @n_chars_printed: number of chars printed
 * Return: Number of chars printed
 */
int parse_oct(va_list arg, int n_chars_printed)
{
	int base = 8;
	unsigned int val = va_arg(arg, unsigned int);

	n_chars_printed = print_val(val, n_chars_printed, base);
	return (n_chars_printed);
}

/**
 * print_val - prints a val in base 'base'
 * @n: the val in base 10
 * @n_chars_printed: number of chars printed
 * @base: base to print the number in
 * Return: Number of chars printed
 */
int print_val(int n, int n_chars_printed, int base)
{
	unsigned int k = n;

	if (n < 0 && base == 10)
	{
		n *= -1;
		k = n;
		_putchar('-');
		n_chars_printed++;
	}

	k /= base;

	if (k != 0)
		n_chars_printed = print_val(k, n_chars_printed, base);

	_putchar((unsigned int) n % base + '0');

	n_chars_printed++;
	return (n_chars_printed);
}

