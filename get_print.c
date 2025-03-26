#include "main.h"

/**
 * get_print_func - gets the approppriate function pointer corresponding to the
 * data type or format specified by the input conversion specifier.
 * @format_spec: a char that serves as format specifier.
 * Return: pointer to appropriate printing function.
 */

int (*get_print_func(char format_spec))(va_list arg_list)
{
	form_spec conv_spec[5] = {
		{'c', print_char_struct},
		{'s', print_string_struct},
		{'%', print_percent},
		{'d', print_int_struct},
		{'i', print_int_struct}
	};
	unsigned int i;

	i = 0;
	while (i < 5 && conv_spec[i].ident != format_spec)
		++i;
	if (i == 5)
		exit(-1);

	return (conv_spec[i].print_func);
}
