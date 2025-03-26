#include "main.h"

/**
 * main - tests my_printf
 * Return: always 0
 */

int main(void)
{
	unsigned int std_bytes, my_bytes;
	char *str;

	str = "Hello\tWorld! %c%c%cjour %s! Top %d%% of the %i%%\n";

	my_bytes = _printf(str, 'B', 'o', 'n', "Monde", 1, -2);

	std_bytes = printf(str, 'B', 'o', 'n', "Monde", 1, -2);

	printf("my_bytes = %u\n", my_bytes);

	printf("std_bytes = %u\n", std_bytes);

	return (0);
}
