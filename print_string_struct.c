#include "main.h"

/**
 * print_string_struct - prints a string.
 * @arg_list: string entered as argument to be printed.
 * Return: number of printed bytes.
 */

int print_string_struct(va_list arg_list)
{
	unsigned int n_bytes, str_len;
	char *string;

	string = va_arg(arg_list, char *);
	if (string == NULL)
		exit(-1);
	n_bytes = 0;
	str_len = 0;
	while (string[str_len] != '\0')
		++str_len;
	n_bytes += write(1, string, str_len);

	return (n_bytes);
}
