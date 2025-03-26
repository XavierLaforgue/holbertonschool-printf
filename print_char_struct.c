#include "main.h"

/**
 * print_char_struct - prints  character
 * @arg_list: character entered as an argument to be printed
 * Return: number of printed bytes
 */

int print_char_struct(va_list arg_list)
{
	int n_bytes;
	int var_char;

	var_char = va_arg(arg_list, int);
	n_bytes = write(1, &var_char, 1);

	return (n_bytes);
}
