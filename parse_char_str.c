#include "main.h"

/**
 * parse_char - print characters
 * @arg: stores arguments passed
 * @n_chars_printed: characters to be printed
 * Return: passed characters
 */
int parse_char(va_list arg, int n_chars_printed)
{
	char c = va_arg(arg, int);

	write(1, &c, 1);
	return (++n_chars_printed);
}

/**
 * parse_str - print stings
 * @arg: stores arguments passed
 * @n_chars_printed: characters to be printed
 * Return: passed characters
 */
int parse_str(va_list arg, int n_chars_printed)
{
	char *str = va_arg(arg, char *);

	while (*str)
	{
		write(1, str, 1);
		str++;
		n_chars_printed++;
	}
	return (n_chars_printed);
}

/**
 * parse_perc - print modulo
 * @arg: stores arguments passed
 * @n_chars_printed: characters to be printed
 * Return: passed characters
 */
int parse_perc(va_list arg, int n_chars_printed)
{
	/* Must make use of arg */
	char c = va_arg(arg, int);

	c = '%';

	write(1, &c, 1);
	return (++n_chars_printed);
}
