#include "main.h"

/**
 * print_string - prints a string.
 * @string: string to be printed.
 * Return: number of printed bytes.
 */

int print_string(char *string)
{
	unsigned int n_bytes, str_len;

	if (string == NULL)
		exit(-1);
	n_bytes = 0;
	str_len = 0;
	while (string[str_len] != '\0')
		++str_len;
	n_bytes += write(1, string, str_len);

	return (n_bytes);
}
