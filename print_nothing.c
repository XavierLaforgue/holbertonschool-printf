#include "main.h"

/**
 * print_nothing - prints nothing. Serves to maintain the expected function
 * pointer format when none was required
 * @arg_list: list of entered arguments
 * Return: number of printed bytes, 2 to account for the manual fix that prints
 * outside of this function
 */

int print_nothing(va_list __attribute__((unused)) arg_list)
{
	return (2);
}
