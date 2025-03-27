#include "main.h"

/**
 * _printf - home-made printf function; prints text on the stdout.
 * @format: string with characters, special characters, and format specifiers.
 * Return: number of printed bytes
 */

int _printf(const char *format, ...)
{
	va_list arg_list;
	unsigned int n_bytes, form_ind;
	int (*print_func)(va_list);

	if (format == NULL)
		return (-1);
	form_ind = 0;
	n_bytes = 0;
	va_start(arg_list, format);
	while (format[form_ind] != '\0')
	{
		if (format[form_ind] != '%')
			n_bytes += write(1, &format[form_ind], 1);
		else if (format[form_ind] == '%' && format[form_ind + 1] == '\0')
			return (-1);
		else if (format[form_ind] == '%' && format[form_ind + 1] != '\0')
		{
			print_func = get_print_func(format[form_ind + 1]);
			n_bytes += print_func(arg_list);
			++form_ind;
		}
		++form_ind;
	}
	va_end(arg_list);
	return (n_bytes);
}
