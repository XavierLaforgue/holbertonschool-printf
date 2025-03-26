#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int print_string(char *string);
int print_int(int var_int);
int print_char(int var_char);
int print_percent(va_list);
int print_string_struct(va_list);
int print_int_struct(va_list);
int print_char_struct(va_list);
int (*get_print_func(char))(va_list);

/**
 * struct format_specifiers - structure containing a character to identify the
 * format of the entered argument and the function to print it.
 * @ident: character that identifies the type of the argument to include in the
 * printed text.
 * @print_func: pointer to any function that takes an argument list and returns
 * an integer.
 */
typedef struct format_specifiers
{
	char ident;
	int (*print_func)(va_list);
} form_spec;

#endif
