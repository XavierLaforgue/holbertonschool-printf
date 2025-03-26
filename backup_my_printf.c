#include "main.h"

/**
 * _printf - home-made printf function; prints text on the stdout.
 * @format: string with characters, special characters, and format specifiers.
 * Return: number of printed bytes
 */

int _printf(const char *format, ...)
{
	va_list arg_list;
	unsigned int n_bytes, form_ind, d_or_i_bool;

	if (format == NULL)
		return (-1);
	form_ind = 0;
	n_bytes = 0;
	va_start(arg_list, format);
	while (format[form_ind] != '\0')
	{
		d_or_i_bool = format[form_ind + 1] == 'd' || format[form_ind + 1] == 'i';
		if (format[form_ind] != '%')
			n_bytes += write(1, &format[form_ind], 1);
		else if (format[form_ind] == '%' && format[form_ind + 1] == 'c')
		{
			n_bytes += print_char(va_arg(arg_list, int));
			++form_ind;
		}
		else if (format[form_ind] == '%' && format[form_ind + 1] == 's')
		{
			n_bytes += print_string(va_arg(arg_list, char *));
			++form_ind;
		}
		else if (format[form_ind] == '%' && d_or_i_bool)
		{
			n_bytes += print_int(va_arg(arg_list, int));
			++form_ind;
		}
		else if (format[form_ind] == '%' && format[form_ind + 1] == '%')
		{
			n_bytes += write(1, "%", 1);
			++form_ind;
		}
		else if (format[form_ind] == '%')
			return (-1);
		++form_ind;
	}
	va_end(arg_list);
	return (n_bytes);
}
