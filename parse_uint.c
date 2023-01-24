#include "main.h"

/**
 * parse_uint - parse and prints an unisnged int
 * @arg: a va_arg that contains the unsigned int
 * @n_chars_printed: number of chars printed
 * Return: Number of chars printed
 */
int parse_uint(va_list arg, int n_chars_printed)
{
	unsigned int val = va_arg(arg, unsigned int);

	n_chars_printed = print_uint(val, n_chars_printed);
	return (n_chars_printed);
}


/**
 * print_uint - helper func prints an unisnged int
 * @n: unsigned int to print
 * @n_chars_printed: number of chars printed
 * Return: Number of chars printed
 */
int print_uint(unsigned int n, int n_chars_printed)
{
	unsigned int k = n;

	k /= 10;

	if (k != 0)
		n_chars_printed = print_uint(k, n_chars_printed);

	_putchar((unsigned int) n % 10 + '0');
	n_chars_printed++;

	return (n_chars_printed);
}

