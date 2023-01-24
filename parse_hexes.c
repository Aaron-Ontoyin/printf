#include "main.h"

/**
 * parse_hex - parse and prints a hex int with small letters
 * @arg: a va_arg that contains the hex int
 * @n_chars_printed: number of chars printed
 * Return: Number of chars printed
 */
int parse_hex(va_list arg, int n_chars_printed)
{
	long val = va_arg(arg, long);

	n_chars_printed = print_hex(val, n_chars_printed, 0);
	return (n_chars_printed);
}

/**
 * parse_heX - parse and prints a hex int in capital letters
 * @arg: a va_arg that contains the hex int
 * @n_chars_printed: number of chars printed
 * Return: Number of chars printed
 */
int parse_heX(va_list arg, int n_chars_printed)
{
	long val = va_arg(arg, long);

	n_chars_printed = print_hex(val, n_chars_printed, 1);
	return (n_chars_printed);
}

/**
 * print_hex - helper func prints a hex int
 * @n: decimal value to be printed in hex
 * @n_chars_printed: number of chars printed
 * @cap: boolean to determine if hex letters should be capital
 * Return: Number of chars printed
 */
int print_hex(long n, int n_chars_printed, int cap)
{
	long k = n;

	k /= 16;

	if (k != 0)
		n_chars_printed = print_hex(k, n_chars_printed, cap);

	if (n % 16 > 9)
	{
		if (cap)
			_putchar((unsigned int) n % 16 - 10 + 'A');
		else
			_putchar((unsigned int) n % 16 - 10 + 'a');
	}
	else
		_putchar((unsigned int) n % 16 + '0');

	n_chars_printed++;
	return (n_chars_printed);
}

