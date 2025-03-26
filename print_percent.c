#include "main.h"

/**
 * print_percent - prints the percent symbol / character
 * @arg_list: list of arguments entered to be printed
 * Return: number of bytes printed
 */

int print_percent(va_list __attribute__((unused)) arg_list)
{
	int n_bytes;

	n_bytes = write(1, "%", 1);

	return (n_bytes);
}
