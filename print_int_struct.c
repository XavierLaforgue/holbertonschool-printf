#include "main.h"

/**
 * print_int_struct - prints an integer on the stdout.
 * @arg_list: integer number entered as next argument.
 * Return: number of printed of bytes.
 */

int print_int_struct(va_list arg_list)
{
	unsigned int n_bytes, num_size;
	int num, sign, var_int;
	char *ptr_digits;

	var_int = va_arg(arg_list, int);
	n_bytes = 0;
	sign = 1;
	if (var_int == 0)
	{
		n_bytes += write(1, "0", 1);
		return (n_bytes);
	}
	if (var_int < 0)
	{
		sign = -1;
		n_bytes += write(1, "-", 1);
	}
	num_size = 1;
	num = var_int;
	while (num / 10 != 0)
	{
		++num_size;
		num = num / 10;
	}
	ptr_digits = malloc((num_size + 1) * sizeof(char));
	/*
		* maybe sizeof banned
		*/
	ptr_digits[num_size] = '\0';
	while (num_size > 0)
	{
		ptr_digits[num_size - 1] = var_int % 10 * sign + '0';
		var_int = var_int / 10;
		--num_size;
	}
	n_bytes += print_string(ptr_digits);
	free(ptr_digits);

	return (n_bytes);
}
