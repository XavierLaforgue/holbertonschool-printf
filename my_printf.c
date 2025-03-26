#include "main.h"

/**
 * _printf - home-made printf function
 * @format: string with characters, special characters, and format specifiers
 * Return: number of printed bytes
 */

int _printf(const char *format, ...)
{
	va_list arg_list;
	unsigned int n_bytes, i, str_len, num_size;
	int var_char, var_int, *ptr_num;
	char *str;

	if (format == NULL)
	{
		exit(401);
	}
	i = 0;
	n_bytes = 0;
	va_start(arg_list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				var_char = va_arg(arg_list, int);
				n_bytes += write(1, &var_char, 1);
				++i;
			}
			else if (format[i + 1] == 's')
			{
				str = va_arg(arg_list, char *);
				str_len = 0;
				while (str[str_len] != '\0')
					++str_len;
				n_bytes += write(1, str, str_len);
				++i;
			}
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
            {
                var_int = va_arg(arg_list, int);
                num_size = 0;
                while ()
                {
                   
                    ++num_size;   
                }
                ptr_num = malloc(num_size * sizeof(int)); //maybe sizeof banned 
                n_bytes += write(1, &var_int, 1);
                ++i;
            }
			else
				exit(404);
		}
		else
		{
			n_bytes += write(1, &format[i], 1);
		}
		++i;
	}
	va_end(arg_list);

	return (n_bytes);
}
