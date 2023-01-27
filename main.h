#ifndef _MAIN_H_
#define _MAIN_H_

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>


typedef struct fs_func_struct
{
	char fs;
	int (*func)(va_list, int);
} fs_func;

int _putchar(char c);
int _printf(const char *format, ...);
int print_val(int n, int n_chars_printed, int base);
int print_uint(unsigned int n, int n_chars_printed);
int print_hex(long n, int n_chars_printed, int cap);

int parse_char(va_list arg, int n_chars_printed);
int parse_str(va_list arg, int n_chars_printed);
int parse_int(va_list arg, int n_chars_printed);
int parse_perc(va_list arg, int n_chars_printed);
int parse_oct(va_list arg, int n_chars_printed);
int parse_hex(va_list arg, int n_chars_printed);
int parse_heX(va_list arg, int n_chars_printed);
int parse_uint(va_list arg, int n_chars_printed);

#endif

