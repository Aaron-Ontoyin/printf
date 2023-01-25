#include "main.h"
/**
 * _printf - outputs string to the stdout
 * fs_funcs - stores the functions which print the different data types
 * @format: string to be printed
 * Return: passed string
 */


int _printf(const char *format, ...)
{
	fs_func fs_funcs[] = {
		{'c', parse_char}, {'i', parse_int}, {'d', parse_int},
		{'u', parse_uint}, {'o', parse_oct}, {'x', parse_hex},
		{'X', parse_heX}, {'s', parse_str}, {'%', parse_perc},
		{'\0', NULL}
	};
	int i, n_chars_printed = 0;
	va_list arg;

	va_start(arg, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++; /* Move to format string representation */
			/* Search through structs repping each format string representation */
			for (i = 0; fs_funcs[i].fs != '\0'; i++)
			{
				/* If represenation struct found, call the function in that struct */
				if (*format == fs_funcs[i].fs)
				{
					n_chars_printed = fs_funcs[i].func(arg, n_chars_printed);
				break;
				}
			}
		}
		else
		{
			write(1, format, 1);
			n_chars_printed++;
		}
		format++;
	}
	if (!format)
		return (-1);
	va_end(arg);
	return (n_chars_printed);
}
